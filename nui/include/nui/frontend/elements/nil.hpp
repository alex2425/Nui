#pragma once

#include <nui/frontend/elements/impl/html_element.hpp>

namespace Nui
{
    [[maybe_unused]] static auto nil()
    {
        return [](auto& parentElement, Renderer const&) {
            return std::shared_ptr<std::decay_t<decltype(parentElement)>>(nullptr);
        };
    }
}