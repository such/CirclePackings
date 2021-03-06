/*This file is part of Circle Packings.

    Circle Packings is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Circle Packings is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Circle Packings.  If not, see <http://www.gnu.org/licenses/>.*/

#ifndef CANVAS_DELEGATE_SHOW_LIVE_HPP
#define CANVAS_DELEGATE_SHOW_LIVE_HPP

#include "basic_types.hpp"
#include "canvas_delegate.hpp"

class Canvas_Delegate_Show_Live : public Canvas_Delegate
{
public:
    Canvas_Delegate_Show_Live(const int &size_in_pixels, Graph<Circle> * const circle_packing);

    void paint_event();
private:
    Graph<Circle> * const circle_packing_;
};

#endif // CANVAS_DELEGATE_SHOW_LIVE_HPP
