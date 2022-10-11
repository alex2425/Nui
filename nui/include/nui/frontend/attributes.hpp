#pragma once

// values
#include <nui/frontend/attributes/accept.hpp>
#include <nui/frontend/attributes/accept_charset.hpp>
#include <nui/frontend/attributes/access_key.hpp>
#include <nui/frontend/attributes/action.hpp>
#include <nui/frontend/attributes/align.hpp>
#include <nui/frontend/attributes/allow.hpp>
#include <nui/frontend/attributes/alt.hpp>
#include <nui/frontend/attributes/async.hpp>
#include <nui/frontend/attributes/auto_capitalize.hpp>
#include <nui/frontend/attributes/auto_complete.hpp>
#include <nui/frontend/attributes/auto_focus.hpp>
#include <nui/frontend/attributes/auto_play.hpp>
#include <nui/frontend/attributes/buffered.hpp>
#include <nui/frontend/attributes/capture.hpp>
#include <nui/frontend/attributes/challenge.hpp>
#include <nui/frontend/attributes/char_set.hpp>
#include <nui/frontend/attributes/checked.hpp>
#include <nui/frontend/attributes/cite.hpp>
#include <nui/frontend/attributes/class.hpp>
#include <nui/frontend/attributes/code.hpp>
#include <nui/frontend/attributes/code_base.hpp>
#include <nui/frontend/attributes/col_span.hpp>
#include <nui/frontend/attributes/cols.hpp>
#include <nui/frontend/attributes/content_editable.hpp>
#include <nui/frontend/attributes/content.hpp>
#include <nui/frontend/attributes/context_menu.hpp>
#include <nui/frontend/attributes/controls.hpp>
#include <nui/frontend/attributes/coords.hpp>
#include <nui/frontend/attributes/cross_origin.hpp>
#include <nui/frontend/attributes/csp.hpp>
#include <nui/frontend/attributes/data.hpp>
#include <nui/frontend/attributes/date_time.hpp>
#include <nui/frontend/attributes/decoding.hpp>
#include <nui/frontend/attributes/default.hpp>
#include <nui/frontend/attributes/defer.hpp>
#include <nui/frontend/attributes/dir.hpp>
#include <nui/frontend/attributes/dir_name.hpp>
#include <nui/frontend/attributes/disabled.hpp>
#include <nui/frontend/attributes/download.hpp>
#include <nui/frontend/attributes/draggable.hpp>
#include <nui/frontend/attributes/enctype.hpp>
#include <nui/frontend/attributes/enter_key_hint.hpp>
#include <nui/frontend/attributes/form.hpp>
#include <nui/frontend/attributes/form_action.hpp>
#include <nui/frontend/attributes/form_enc_type.hpp>
#include <nui/frontend/attributes/form_method.hpp>
#include <nui/frontend/attributes/form_no_validate.hpp>
#include <nui/frontend/attributes/form_target.hpp>
#include <nui/frontend/attributes/for.hpp>
#include <nui/frontend/attributes/headers.hpp>
#include <nui/frontend/attributes/height.hpp>
#include <nui/frontend/attributes/high.hpp>
#include <nui/frontend/attributes/hidden.hpp>
#include <nui/frontend/attributes/href.hpp>
#include <nui/frontend/attributes/href_lang.hpp>
#include <nui/frontend/attributes/http_equiv.hpp>
#include <nui/frontend/attributes/icon.hpp>
#include <nui/frontend/attributes/id.hpp>
#include <nui/frontend/attributes/importance.hpp>
#include <nui/frontend/attributes/integrity.hpp>
#include <nui/frontend/attributes/input_mode.hpp>
#include <nui/frontend/attributes/item_prop.hpp>
#include <nui/frontend/attributes/ismap.hpp>
#include <nui/frontend/attributes/key_type.hpp>
#include <nui/frontend/attributes/kind.hpp>
#include <nui/frontend/attributes/label.hpp>
#include <nui/frontend/attributes/lang.hpp>
#include <nui/frontend/attributes/list.hpp>
#include <nui/frontend/attributes/loading.hpp>
#include <nui/frontend/attributes/loop.hpp>
#include <nui/frontend/attributes/low.hpp>
#include <nui/frontend/attributes/max.hpp>
#include <nui/frontend/attributes/max_length.hpp>
#include <nui/frontend/attributes/media.hpp>
#include <nui/frontend/attributes/method.hpp>
#include <nui/frontend/attributes/min.hpp>
#include <nui/frontend/attributes/min_length.hpp>
#include <nui/frontend/attributes/multiple.hpp>
#include <nui/frontend/attributes/muted.hpp>
#include <nui/frontend/attributes/name.hpp>
#include <nui/frontend/attributes/no_validate.hpp>
#include <nui/frontend/attributes/on_abort.hpp>
#include <nui/frontend/attributes/on_after_print.hpp>
#include <nui/frontend/attributes/on_before_print.hpp>
#include <nui/frontend/attributes/on_before_unload.hpp>
#include <nui/frontend/attributes/on_blur.hpp>
#include <nui/frontend/attributes/on_can_play.hpp>
#include <nui/frontend/attributes/on_can_play_through.hpp>
#include <nui/frontend/attributes/on_change.hpp>
#include <nui/frontend/attributes/on_click.hpp>
#include <nui/frontend/attributes/on_context_menu.hpp>
#include <nui/frontend/attributes/on_copy.hpp>
#include <nui/frontend/attributes/on_cue_change.hpp>
#include <nui/frontend/attributes/on_cut.hpp>
#include <nui/frontend/attributes/on_dbl_click.hpp>
#include <nui/frontend/attributes/on_drag.hpp>
#include <nui/frontend/attributes/on_drag_end.hpp>
#include <nui/frontend/attributes/on_drag_enter.hpp>
#include <nui/frontend/attributes/on_drag_leave.hpp>
#include <nui/frontend/attributes/on_drag_over.hpp>
#include <nui/frontend/attributes/on_drag_start.hpp>
#include <nui/frontend/attributes/on_drop.hpp>
#include <nui/frontend/attributes/on_duration_change.hpp>
#include <nui/frontend/attributes/on_emptied.hpp>
#include <nui/frontend/attributes/on_ended.hpp>
#include <nui/frontend/attributes/on_error.hpp>
#include <nui/frontend/attributes/on_focus.hpp>
#include <nui/frontend/attributes/on_hash_change.hpp>
#include <nui/frontend/attributes/on_input.hpp>
#include <nui/frontend/attributes/on_invalid.hpp>
#include <nui/frontend/attributes/on_key_down.hpp>
#include <nui/frontend/attributes/on_key_press.hpp>
#include <nui/frontend/attributes/on_key_up.hpp>
#include <nui/frontend/attributes/on_load_start.hpp>
#include <nui/frontend/attributes/on_load.hpp>
#include <nui/frontend/attributes/on_loaded_data.hpp>
#include <nui/frontend/attributes/on_loaded_meta_data.hpp>
#include <nui/frontend/attributes/on_mouse_enter.hpp>
#include <nui/frontend/attributes/on_mouse_leave.hpp>
#include <nui/frontend/attributes/on_mouse_down.hpp>
#include <nui/frontend/attributes/on_mouse_move.hpp>
#include <nui/frontend/attributes/on_mouse_out.hpp>
#include <nui/frontend/attributes/on_mouse_over.hpp>
#include <nui/frontend/attributes/on_mouse_up.hpp>
#include <nui/frontend/attributes/on_mouse_wheel.hpp>
#include <nui/frontend/attributes/on_offline.hpp>
#include <nui/frontend/attributes/on_online.hpp>
#include <nui/frontend/attributes/on_page_hide.hpp>
#include <nui/frontend/attributes/on_page_show.hpp>
#include <nui/frontend/attributes/on_paste.hpp>
#include <nui/frontend/attributes/on_pause.hpp>
#include <nui/frontend/attributes/on_play.hpp>
#include <nui/frontend/attributes/on_playing.hpp>
#include <nui/frontend/attributes/on_pop_state.hpp>
#include <nui/frontend/attributes/on_progress.hpp>
#include <nui/frontend/attributes/on_rate_change.hpp>
#include <nui/frontend/attributes/on_reset.hpp>
#include <nui/frontend/attributes/on_resize.hpp>
#include <nui/frontend/attributes/on_scroll.hpp>
#include <nui/frontend/attributes/on_search.hpp>
#include <nui/frontend/attributes/on_seeked.hpp>
#include <nui/frontend/attributes/on_seeking.hpp>
#include <nui/frontend/attributes/on_select.hpp>
#include <nui/frontend/attributes/on_stalled.hpp>
#include <nui/frontend/attributes/on_storage.hpp>
#include <nui/frontend/attributes/on_submit.hpp>
#include <nui/frontend/attributes/on_suspend.hpp>
#include <nui/frontend/attributes/on_time_update.hpp>
#include <nui/frontend/attributes/on_toggle.hpp>
#include <nui/frontend/attributes/on_unload.hpp>
#include <nui/frontend/attributes/on_volume_change.hpp>
#include <nui/frontend/attributes/on_waiting.hpp>
#include <nui/frontend/attributes/on_wheel.hpp>
#include <nui/frontend/attributes/open.hpp>
#include <nui/frontend/attributes/optimum.hpp>
#include <nui/frontend/attributes/pattern.hpp>
#include <nui/frontend/attributes/ping.hpp>
#include <nui/frontend/attributes/place_holder.hpp>
#include <nui/frontend/attributes/poster.hpp>
#include <nui/frontend/attributes/preload.hpp>
#include <nui/frontend/attributes/read_only.hpp>
#include <nui/frontend/attributes/rel.hpp>
#include <nui/frontend/attributes/required.hpp>
#include <nui/frontend/attributes/referrer_policy.hpp>
#include <nui/frontend/attributes/reversed.hpp>
#include <nui/frontend/attributes/rows.hpp>
#include <nui/frontend/attributes/role.hpp>
#include <nui/frontend/attributes/row_span.hpp>
#include <nui/frontend/attributes/sandbox.hpp>
#include <nui/frontend/attributes/scope.hpp>
#include <nui/frontend/attributes/slot.hpp>
#include <nui/frontend/attributes/selected.hpp>
#include <nui/frontend/attributes/shape.hpp>
#include <nui/frontend/attributes/size.hpp>
#include <nui/frontend/attributes/sizes.hpp>
#include <nui/frontend/attributes/span.hpp>
#include <nui/frontend/attributes/spell_check.hpp>
#include <nui/frontend/attributes/src.hpp>
#include <nui/frontend/attributes/src_doc.hpp>
#include <nui/frontend/attributes/src_lang.hpp>
#include <nui/frontend/attributes/src_set.hpp>
#include <nui/frontend/attributes/start.hpp>
#include <nui/frontend/attributes/step.hpp>
#include <nui/frontend/attributes/style.hpp>
#include <nui/frontend/attributes/tab_index.hpp>
#include <nui/frontend/attributes/target.hpp>
#include <nui/frontend/attributes/title.hpp>
#include <nui/frontend/attributes/translate.hpp>
#include <nui/frontend/attributes/type.hpp>
#include <nui/frontend/attributes/use_map.hpp>
#include <nui/frontend/attributes/value.hpp>
#include <nui/frontend/attributes/width.hpp>
#include <nui/frontend/attributes/wrap.hpp>