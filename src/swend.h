// Emacs style mode select -*- C++ -*-
//---------------------------------------------------------------------------
//
// $Id: $
//
// Copyright(C) 1984-2000 David L. Clark
// Copyright(C) 2001-2003 Simon Howard
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2 of the License, or (at your
// option) any later version. This program is distributed in the hope that
// it will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
// the GNU General Public License for more details. You should have
// received a copy of the GNU General Public License along with this
// program; if not, write to the Free Software Foundation, Inc., 59 Temple
// Place - Suite 330, Boston, MA 02111-1307, USA.
//
//---------------------------------------------------------------------------

#ifndef __SWEND_H__
#define __SWEND_H__

#include "sw.h"

extern void swend(char *msg, BOOL update);
extern void endgame(int targclr);
extern void winner(OBJECTS *obp);
extern void loser(OBJECTS *ob);
extern void swreport();

#endif


//---------------------------------------------------------------------------
//
// $Log: $
//
// sdh 14/2/2003: change license header to GPL
// sdh 21/10/2001: added cvs tags
// sdh 19/10/2001: added header
//
//---------------------------------------------------------------------------
