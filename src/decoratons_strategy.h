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

#ifndef MIRACLE_DECORATONS_STRATEGY_H
#define MIRACLE_DECORATONS_STRATEGY_H

#include <miral/decorations.h>

namespace miracle
{
enum class DecorationsStrategy
{
    always_ssd,
    always_csd,
    prefer_ssd,
    prefer_csd
};

inline miral::Decorations to_decorations(DecorationsStrategy strategy)
{
    switch (strategy)
    {
    case DecorationsStrategy::always_csd:
        return miral::Decorations::always_csd();
    case DecorationsStrategy::always_ssd:
        return miral::Decorations::always_ssd();
    case DecorationsStrategy::prefer_csd:
        return miral::Decorations::prefer_csd();
    case DecorationsStrategy::prefer_ssd:
        return miral::Decorations::prefer_ssd();
    default:
        return miral::Decorations::prefer_csd();
    }
}

}

#endif // MIRACLE_DECORATONS_STRATEGY_H
