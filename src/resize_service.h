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

#ifndef MIRACLE_WM_RESIZE_SERVICE_H
#define MIRACLE_WM_RESIZE_SERVICE_H

#include <memory>
#include <mir_toolkit/event.h>
#include <mir/geometry/point.h>

namespace miracle
{
class CommandController;
 class Config;
    
class ResizeService
{
public:
    ResizeService(std::shared_ptr<CommandController> const&, std::shared_ptr<Config> const&);
    bool handle_pointer_event(float x, float y, MirPointerEvent const* event, MirResizeEdge edge);

private:
    std::shared_ptr<CommandController> command_controller;
    std::shared_ptr<Config> config;
    
    mir::geometry::Point last_position;
    MirResizeEdge edge;
};
}

#endif
