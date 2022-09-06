#pragma once

#include <nui/elements/html_element.hpp>
#include <nui/utility/inferance_helper.hpp>
#include <nui/utility/functions.hpp>
#include <nui/event_system/event_context.hpp>
#include <nui/utility/tuple_for_each.hpp>

#include <emscripten/val.h>

#include <concepts>
#include <string>
#include <vector>
#include <memory>

namespace Nui::Dom
{
    class Element : public std::enable_shared_from_this<Element>
    {
      public:
        using collection_type = std::vector<std::shared_ptr<Element>>;
        using iterator = collection_type::iterator;
        using const_iterator = collection_type::const_iterator;

        template <typename T, typename... Attributes>
        Element(HtmlElement<T, Attributes...> const&)
            : type_{T::name}
            , element_{emscripten::val::global("document")
                           .call<emscripten::val>("createElement", emscripten::val{type_})}
            , children_{}
        {}

        template <typename U, typename... Attributes>
        static std::shared_ptr<Element> makeElement(HtmlElement<U, Attributes...> const& element)
        {
            auto elem = std::make_shared<Element>(element);
            elem->setup(element);
            return elem;
        }

        /**
         * @brief Relies on weak_from_this and cannot be used from the constructor
         */
        template <typename T, typename... Attributes>
        void setup(HtmlElement<T, Attributes...> const& element)
        {
            auto setSideEffect = [self = this](auto const& attribute) {
                auto weak = self->weak_from_this();
                attribute.createEvent(
                    weak,
                    [name = attribute.name()](
                        std::shared_ptr<std::decay_t<decltype(*this)>> const& shared, auto const& value) {
                        shared->setAttribute(name, value);
                    });
            };

            tupleForEach(element.attributes(), [this, &setSideEffect](auto const& attribute) {
                setAttribute(attribute.name(), attribute.value());
                setSideEffect(attribute);
            });
        }

        template <typename T>
        Element(Utility::InferanceHelper<T>, emscripten::val val)
            : type_{T::name}
            , element_{std::move(val)}
            , children_{}
        {}

        ~Element()
        {
            element_.call<void>("remove");
        }

        // TODO: more overloads?
        void setAttribute(std::string_view key, std::string_view value)
        {
            // FIXME: performance fix: val(string(...))
            element_.call<emscripten::val>(
                "setAttribute", emscripten::val{std::string{key}}, emscripten::val{std::string{value}});
        }

        void setAttribute(std::string_view key, std::invocable<emscripten::val> auto&& value)
        {
            element_.set(emscripten::val{std::string{key}}, Nui::bind(value, std::placeholders::_1));
        }

        iterator begin()
        {
            return std::begin(children_);
        }
        iterator end()
        {
            return std::end(children_);
        }
        const_iterator begin() const
        {
            return std::begin(children_);
        }
        const_iterator end() const
        {
            return std::end(children_);
        }

        template <typename U, typename... Attributes>
        auto& appendElement(HtmlElement<U, Attributes...> const& element)
        {
            auto elem = makeElement(element);
            element_.call<emscripten::val>("appendChild", elem->element_);
            return children_.emplace_back(std::move(elem));
        }

        void appendElement(std::invocable<Element&> auto&& fn)
        {
            fn(*this);
        }

        template <typename... Elements>
        void appendElements(std::tuple<Elements...> const& elements)
        {
            std::apply(
                [this](auto const&... element) {
                    (appendElement(element), ...);
                },
                elements);
        }

        template <typename U, typename... Attributes>
        void insert(iterator where, HtmlElement<U, Attributes...> const& element)
        {
            auto elem = makeElement(element);
            element_.call<emscripten::val>("insertBefore", elem->element_, (*where)->element_);
            children_.insert(where, std::move(elem));
        }

        emscripten::val& val()
        {
            return element_;
        }

        void clearChildren()
        {
            children_.clear();
        }

      private:
        char const* type_;
        emscripten::val element_;
        collection_type children_;
    };
}