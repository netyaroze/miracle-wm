/**
Copyright (C) 2024  Matthew Kosarek

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
**/


#include "resize_service.h"
#include "command_controller.h"
#include "config.h"

using namespace miracle;

namespace
{
auto pointer_position(MirPointerEvent const* event) -> mir::geometry::Point
{
    return {
        mir_pointer_event_axis_value(event, mir_pointer_axis_x),
        mir_pointer_event_axis_value(event, mir_pointer_axis_y)};
}
}

ResizeService::ResizeService(
    std::shared_ptr<CommandController> const& command_controller,
    std::shared_ptr<Config> const& config) :
    command_controller(command_controller),
    config(config)
{
}

bool handle_pointer_event(float x, float y, MirPointerEvent const* event, MirResizeEdge edge)
{
    auto const position = pointer_position(event);

    
}
