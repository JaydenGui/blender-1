/**
 * $Id$
 *
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL LICENSE BLOCK *****
 */

#ifndef __GPU_POLYGONMATERIAL_H
#define __GPU_POLYGONMATERIAL_H

#include "BP_PolygonMaterial.h"

class GPU_PolygonMaterial : public BP_PolygonMaterial
{
public:
	GPUPolygonMaterial(const STR_String& texname, bool ba,const STR_String& matname,
			int tile, int tileXrep, int tileYrep, int mode, int transparant,
			int lightlayer,,void* tpage) :
			BP_PolygonMaterial(texname, ba,matname, tile, tileXrep, tileYrep,
					mode, transparant, lightlayer),
			m_tface(tpage)
	{
	}
    
	virtual ~GPU_PolygonMaterial()
	{
	}
};

#endif  // __GPU_POLYGONMATERIAL_H

