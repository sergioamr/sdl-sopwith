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

#ifndef __STD_H__
#define __STD_H__

#include <stdio.h>
#include <stdlib.h>

#define FOREVER  for (;;)

// sdh 21/10/2001: moved BOOL here from sw.h, made into enum
typedef enum {FALSE, TRUE} BOOL;
enum {NO, YES};

int strindex(char *str,int c);
void movblock(unsigned int srcoff,unsigned int srcseg,
              unsigned int destoff,unsigned int destseg,
              unsigned int count);

// sdh: these are standard c anyway: memcpy and memset
// remove at some point

void movmem(void *src,void *dest,unsigned count);
void setmem(void *dest,unsigned count,int c);

#endif

//---------------------------------------------------------------------------
//
// $Log: $
//
// sdh 14/2/2003: change license header to GPL
// sdh 21/10/2001: rearranged headers, added cvs tags
//
//---------------------------------------------------------------------------
