/*****************************************************************************
 *
 * This file is part of Mapnik (c++ mapping toolkit)
 *
 * Copyright (C) 2014 Artem Pavlenko, Jean-Francois Doyon
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 *
 *****************************************************************************/

#include <mapnik/geometry.hpp>
#include <mapnik/geometry_container.hpp>
#include <mapnik/wkt/wkt_generator_grammar_impl.hpp>
#include <string>

using sink_type = std::back_insert_iterator<std::string>;
template struct mapnik::wkt::wkt_generator<sink_type, mapnik::geometry_type>;
template struct mapnik::wkt::wkt_multi_generator<sink_type, mapnik::geometry_container>;