/*
 * area.c - area functions
 *
 * Copyright (c) 2006, 2015 Matt Gregory
 *
 * This file is part of TX81Z Programmer.
 *
 * TX81Z Programmer is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * TX81Z Programmer is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with TX81Z Programmer.  If not, see <http://www.gnu.org/licenses/>.
 */
#include "stdafx.h"

/*
 * Global procedures
 */
extern void AreaToRect(RECT *rect, const AREA *area);


/*
 * Procedure definitions
 */
void AreaToRect(RECT *rect, const AREA *area)
{
    long x = area->x;
    long y = area->y;

    rect->left = x;
    rect->top = y;
    rect->right = x + area->w;
    rect->bottom = y + area->h;
}
