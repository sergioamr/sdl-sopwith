// Emacs style mode select -*- C++ -*-
//---------------------------------------------------------------------------
//
// $Id: swplanes.c 5 2003-02-14 19:02:36Z fraggle $
//
// Copyright(C) 1984-2000 David L. Clark
// Copyright(C) 2001 Simon Howard
//
// All rights reserved except as specified in the file license.txt.
// Distribution of this file without the license.txt file accompanying
// is prohibited.
//
//---------------------------------------------------------------------------
//
//  Plane symbols
//
//---------------------------------------------------------------------------

#include "sw.h"
#include "swplanes.h"

char    swplnsym[ORIENTS][ANGLES][SYMBYTES] = {

/*  airplane symbols based on the following template file:
16
. . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .
1 1 1 . . . . . . . . . . . . .
1 1 1 1 . . . . 2 2 2 2 2 2 2 .
1 1 1 1 1 . . . . . 2 . 2 . . .
2 2 2 2 2 1 1 1 1 1 2 1 2 1 1 1
. 1 1 1 1 1 1 1 1 1 2 1 2 1 1 1
. . 1 1 1 1 1 1 2 2 2 2 2 2 1 1
. . 1 . . . . . . . . 1 . . . .
. . . . . . . . . . 1 1 1 . . .
. . . . . . . . . . . 1 . . . .
. . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .
*/
    {
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x54, 0x0 , 0x0 , 0x0 ,
		0x55, 0x0 , 0xAA, 0xA8, 0x55, 0x40, 0x8 , 0x80, 0xAA, 0x95,
		0x59, 0x95, 0x15, 0x55, 0x59, 0x95, 0x5 , 0x55, 0xAA, 0xA5,
		0x4 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x5 , 0x40, 0x0 , 0x0 ,
		0x1 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x2 , 0xA0, 0x0 , 0x0 , 0x2A, 0x4 ,
		0x0 , 0x2 , 0xA2, 0x55, 0x10, 0x0 , 0x19, 0x95, 0x54, 0x41,
		0x59, 0xA0, 0x55, 0x95, 0x6A, 0x0 , 0x6A, 0x55, 0x60, 0x50,
		0x15, 0x54, 0x1 , 0x40, 0x1 , 0x40, 0x0 , 0x0 , 0x1 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x8 , 0x0 , 0x0 , 0x0 ,
		0x8 , 0x40, 0x0 , 0x0 , 0xA1, 0x50, 0x0 , 0x2 , 0x9 , 0x50,
		0x0 , 0x8 , 0xA6, 0x80, 0x0 , 0x0 , 0x4A, 0x0 , 0x0 , 0x1 ,
		0x58, 0x50, 0x0 , 0x5 , 0x60, 0x50, 0x11, 0x55, 0x40, 0x0 ,
		0x55, 0x95, 0x0 , 0x0 , 0x56, 0x54, 0x0 , 0x0 , 0x19, 0x50,
		0x0 , 0x0 , 0x0 , 0x10, 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x2 , 0x95, 0x40, 0x0 , 0x2 ,
		0x15, 0x0 , 0x0 , 0x8 , 0xA6, 0x0 , 0x0 , 0x8 , 0x5A, 0x0 ,
		0x0 , 0xA , 0xA9, 0x40, 0x0 , 0x20, 0x58, 0x50, 0x0 , 0x1 ,
		0x60, 0x0 , 0x0 , 0x1 , 0x60, 0x0 , 0x0 , 0x5 , 0x50, 0x0 ,
		0x0 , 0x15, 0x40, 0x0 , 0x5 , 0x69, 0x40, 0x0 , 0x5 , 0x65,
		0x0 , 0x0 , 0x15, 0x65, 0x0 , 0x0 , 0x5 , 0x80, 0x40, 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x1 , 0x50, 0x0 , 0x0 , 0x21, 0x50, 0x0 , 0x0 , 0x21,
		0x60, 0x0 , 0x0 , 0x2A, 0xA1, 0x0 , 0x0 , 0x21, 0x65, 0x40,
		0x0 , 0x2A, 0xA1, 0x0 , 0x0 , 0x21, 0x60, 0x0 , 0x0 , 0x21,
		0x60, 0x0 , 0x0 , 0x1 , 0x50, 0x0 , 0x0 , 0x1 , 0x50, 0x0 ,
		0x0 , 0x1 , 0x50, 0x0 , 0x0 , 0x6 , 0x50, 0x0 , 0x0 , 0x16,
		0x50, 0x0 , 0x0 , 0x56, 0x54, 0x0 , 0x0 , 0x56, 0x40, 0x0 ,
		0x0 , 0x56, 0x0 , 0x0 ,
	},
	{
		0x0 , 0x14, 0x0 , 0x0 , 0x0 , 0x54, 0x0 , 0x0 , 0x2 , 0x16,
		0x10, 0x0 , 0x2 , 0x1A, 0x14, 0x0 , 0x2 , 0xA5, 0x84, 0x0 ,
		0x0 , 0x8A, 0x80, 0x0 , 0x0 , 0xA5, 0xA0, 0x0 , 0x0 , 0x21,
		0x50, 0x0 , 0x0 , 0x21, 0x50, 0x0 , 0x0 , 0x0 , 0x54, 0x0 ,
		0x0 , 0x0 , 0x54, 0x0 , 0x0 , 0x1 , 0x95, 0x0 , 0x0 , 0x0 ,
		0x65, 0x40, 0x0 , 0x1 , 0x64, 0x0 , 0x0 , 0x5 , 0x64, 0x0 ,
		0x0 , 0x1 , 0x50, 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x41,
		0x40, 0x0 , 0x5 , 0x61, 0x40, 0x0 , 0x1 , 0x68, 0x0 , 0x0 ,
		0x28, 0x9A, 0x0 , 0x0 , 0x2 , 0x21, 0x80, 0x0 , 0x2 , 0x25,
		0x50, 0x0 , 0x0 , 0x81, 0x54, 0x0 , 0x0 , 0x20, 0x55, 0x0 ,
		0x0 , 0x0 , 0x15, 0x50, 0x0 , 0x0 , 0x19, 0x40, 0x0 , 0x0 ,
		0x16, 0x40, 0x0 , 0x0 , 0x5 , 0x80, 0x0 , 0x0 , 0x15, 0x40,
		0x0 , 0x0 , 0x5 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x4 ,
		0x0 , 0x0 , 0x10, 0x14, 0x0 , 0x0 , 0x16, 0x90, 0x0 , 0x0 ,
		0x55, 0xA8, 0x0 , 0x0 , 0x16, 0x66, 0x90, 0x0 , 0x22, 0x65,
		0x55, 0x4 , 0x28, 0x21, 0x55, 0x50, 0x2 , 0xA0, 0x16, 0x50,
		0x0 , 0x8 , 0x6 , 0xA0, 0x0 , 0x0 , 0x1 , 0x58, 0x0 , 0x0 ,
		0x1 , 0x54, 0x0 , 0x0 , 0x1 , 0x54, 0x0 , 0x0 , 0x0 , 0x10,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x40, 0x0 , 0x0 , 0x1 , 0x50, 0x0 , 0x0 ,
		0x0 , 0x40, 0x0 , 0x10, 0x5A, 0xAA, 0x55, 0x50, 0x56, 0x65,
		0x55, 0x54, 0x56, 0x65, 0x56, 0xAA, 0x2 , 0x20, 0x1 , 0x55,
		0x2A, 0xAA, 0x0 , 0x55, 0x0 , 0x0 , 0x0 , 0x15, 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x40, 0x0 , 0x0 , 0x1 , 0x40,
		0x1 , 0x40, 0x15, 0x54, 0x5 , 0x9 , 0x55, 0xA9, 0x0 , 0xA9,
		0x56, 0x55, 0xA , 0x65, 0x41, 0x15, 0x56, 0x64, 0x0 , 0x4 ,
		0x55, 0x8A, 0x80, 0x0 , 0x10, 0xA8, 0x0 , 0x0 , 0xA , 0x80,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x4 , 0x0 , 0x0 , 0x0 , 0x5 , 0x64, 0x0 , 0x0 , 0x15, 0x95,
		0x0 , 0x0 , 0x56, 0x55, 0x0 , 0x1 , 0x55, 0x44, 0x5 , 0x9 ,
		0x50, 0x0 , 0x5 , 0x25, 0x40, 0x0 , 0x0 , 0xA1, 0x0 , 0x0 ,
		0x2 , 0x9A, 0x20, 0x0 , 0x5 , 0x60, 0x80, 0x0 , 0x5 , 0x4A,
		0x0 , 0x0 , 0x1 , 0x20, 0x0 , 0x0 , 0x0 , 0x20, 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x2 , 0x50, 0x0 , 0x0 ,
		0x59, 0x54, 0x0 , 0x0 , 0x59, 0x50, 0x0 , 0x1 , 0x69, 0x50,
		0x0 , 0x1 , 0x54, 0x0 , 0x0 , 0x5 , 0x50, 0x0 , 0x0 , 0x9 ,
		0x40, 0x0 , 0x0 , 0x9 , 0x40, 0x0 , 0x5 , 0x25, 0x8 , 0x0 ,
		0x1 , 0x6A, 0xA0, 0x0 , 0x0 , 0xA5, 0x20, 0x0 , 0x0 , 0x9A,
		0x20, 0x0 , 0x0 , 0x54, 0x80, 0x0 , 0x1 , 0x56, 0x80, 0x0 ,
		0x0 , 0x10, 0x0 , 0x0 ,
	},
	{		
		0x0 , 0x0 , 0x95, 0x0 , 0x0 , 0x1 , 0x95, 0x0 , 0x0 , 0x15,
		0x95, 0x0 , 0x0 , 0x5 , 0x94, 0x0 , 0x0 , 0x5 , 0x90, 0x0 ,
		0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x5 ,
		0x40, 0x0 , 0x0 , 0x9 , 0x48, 0x0 , 0x0 , 0x9 , 0x48, 0x0 ,
		0x0 , 0x4A, 0xA8, 0x0 , 0x1 , 0x59, 0x48, 0x0 , 0x0 , 0x4A,
		0xA8, 0x0 , 0x0 , 0x9 , 0x48, 0x0 , 0x0 , 0x5 , 0x48, 0x0 ,
		0x0 , 0x5 , 0x40, 0x0 ,
	},
	{
		0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x19, 0x50, 0x0 , 0x0 , 0x19,
		0x40, 0x0 , 0x1 , 0x59, 0x0 , 0x0 , 0x0 , 0x56, 0x40, 0x0 ,
		0x0 , 0x15, 0x0 , 0x0 , 0x0 , 0x15, 0x0 , 0x0 , 0x0 , 0x5 ,
		0x48, 0x0 , 0x0 , 0x5 , 0x48, 0x0 , 0x0 , 0xA , 0x5A, 0x0 ,
		0x0 , 0x2 , 0xA2, 0x0 , 0x0 , 0x12, 0x5A, 0x80, 0x0 , 0x14,
		0xA4, 0x80, 0x0 , 0x4 , 0x94, 0x80, 0x0 , 0x0 , 0x15, 0x0 ,
		0x0 , 0x0 , 0x14, 0x0 ,
	},
	{
		0x0 , 0x50, 0x0 , 0x0 , 0x1 , 0x54, 0x0 , 0x0 , 0x2 , 0x50,
		0x0 , 0x0 , 0x1 , 0x94, 0x0 , 0x0 , 0x1 , 0x64, 0x0 , 0x0 ,
		0x5 , 0x54, 0x0 , 0x0 , 0x0 , 0x55, 0x8 , 0x0 , 0x0 , 0x15,
		0x42, 0x0 , 0x0 , 0x5 , 0x58, 0x80, 0x0 , 0x2 , 0x48, 0x80,
		0x0 , 0x0 , 0xA6, 0x28, 0x0 , 0x0 , 0x29, 0x40, 0x0 , 0x1 ,
		0x49, 0x50, 0x0 , 0x1 , 0x41, 0x40, 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 , 0x15, 0x40,
		0x0 , 0x0 , 0x15, 0x40, 0x0 , 0x0 , 0x25, 0x40, 0x0 , 0x0 ,
		0xA , 0x90, 0x20, 0x0 , 0x5 , 0x94, 0xA , 0x80, 0x5 , 0x55,
		0x48, 0x28, 0x10, 0x55, 0x59, 0x88, 0x0 , 0x6 , 0x99, 0x94,
		0x0 , 0x0 , 0x2A, 0x55, 0x0 , 0x0 , 0x6 , 0x94, 0x0 , 0x0 ,
		0x14, 0x4 , 0x0 , 0x0 , 0x10, 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	}
    },
    {
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x0 , 0x0 ,  0x0 ,  0x5 ,  0x40,
		0x4 , 0x0 , 0x1 , 0x0 , 0x5 , 0x55, 0xAA,  0xA5,  0x15,  0x55,
		0x59, 0x95, 0xAA, 0x95, 0x59, 0x95, 0x55,  0x40,  0x8 ,  0x80,
		0x55, 0x0 , 0xAA, 0xA8, 0x54, 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x10, 0x0 , 0x0 , 0x0 , 0x14, 0x4 , 0x0 ,  0x0 ,  0x6 ,  0x94,
		0x0 , 0x0 , 0x2A, 0x55, 0x0 , 0x6 , 0x99,  0x94,  0x10,  0x55,
		0x59, 0x88, 0x5 , 0x55, 0x48, 0x28, 0x5 ,  0x94,  0xA ,  0x80,
		0xA , 0x90, 0x20, 0x0 , 0x25, 0x40, 0x0 ,  0x0 ,  0x15,  0x40,
		0x0 , 0x0 , 0x15, 0x40, 0x0 , 0x0 , 0x4 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
                0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x1 ,
		0x41, 0x40, 0x0 , 0x1 , 0x49, 0x50, 0x0 ,  0x0 ,  0x29,  0x40,
		0x0 , 0x0 , 0xA6, 0x28, 0x0 , 0x2 , 0x48,  0x80,  0x0 ,  0x5 ,
		0x58, 0x80, 0x0 , 0x15, 0x42, 0x0 , 0x0 ,  0x55,  0x8 ,  0x0 ,
		0x5 , 0x54, 0x0 , 0x0 , 0x1 , 0x64, 0x0 ,  0x0 ,  0x1 ,  0x94,
		0x0 , 0x0 , 0x2 , 0x50, 0x0 , 0x0 , 0x1 ,  0x54,  0x0 ,  0x0 ,
		0x0 , 0x50, 0x0 , 0x0 ,
	},
	{		
		0x0 , 0x0 , 0x14, 0x0 , 0x0 , 0x0 , 0x15,  0x0 ,  0x0 ,  0x4 ,
		0x94, 0x80, 0x0 , 0x14, 0xA4, 0x80, 0x0 ,  0x12,  0x5A,  0x80,
		0x0 , 0x2 , 0xA2, 0x0 , 0x0 , 0xA , 0x5A,  0x0 ,  0x0 ,  0x5 ,
		0x48, 0x0 , 0x0 , 0x5 , 0x48, 0x0 , 0x0 ,  0x15,  0x0 ,  0x0 ,
		0x0 , 0x15, 0x0 , 0x0 , 0x0 , 0x56, 0x40,  0x0 ,  0x1 ,  0x59,
		0x0 , 0x0 , 0x0 , 0x19, 0x40, 0x0 , 0x0 ,  0x19,  0x50,  0x0 ,
		0x0 , 0x5 , 0x40, 0x0 ,
	},
	{
		0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x5 , 0x48,  0x0 ,  0x0 ,  0x9 ,
		0x48, 0x0 , 0x0 , 0x4A, 0xA8, 0x0 , 0x1 ,  0x59,  0x48,  0x0 ,
		0x0 , 0x4A, 0xA8, 0x0 , 0x0 , 0x9 , 0x48,  0x0 ,  0x0 ,  0x9 ,
		0x48, 0x0 , 0x0 , 0x5 , 0x40, 0x0 , 0x0 ,  0x5 ,  0x40,  0x0 ,
		0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x5 , 0x90,  0x0 ,  0x0 ,  0x5 ,
		0x94, 0x0 , 0x0 , 0x15, 0x95, 0x0 , 0x0 ,  0x1 ,  0x95,  0x0 ,
		0x0 , 0x0 , 0x95, 0x0 ,
	},
	{
		0x0 , 0x10, 0x0 , 0x0 , 0x1 , 0x56, 0x80,  0x0 ,  0x0 ,  0x54,
		0x80, 0x0 , 0x0 , 0x9A, 0x20, 0x0 , 0x0 ,  0xA5,  0x20,  0x0 ,
		0x1 , 0x6A, 0xA0, 0x0 , 0x5 , 0x25, 0x8 ,  0x0 ,  0x0 ,  0x9 ,
		0x40, 0x0 , 0x0 , 0x9 , 0x40, 0x0 , 0x0 ,  0x5 ,  0x50,  0x0 ,
		0x0 , 0x1 , 0x54, 0x0 , 0x0 , 0x1 , 0x69,  0x50,  0x0 ,  0x0 ,
		0x59, 0x50, 0x0 , 0x0 , 0x59, 0x54, 0x0 ,  0x1 ,  0x2 ,  0x50,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x20, 0x0 ,  0x0 ,  0x1 ,  0x20,
		0x0 , 0x0 , 0x5 , 0x4A, 0x0 , 0x0 , 0x5 ,  0x60,  0x80,  0x0 ,
		0x2 , 0x9A, 0x20, 0x0 , 0x0 , 0xA1, 0x0 ,  0x0 ,  0x5 ,  0x25,
		0x40, 0x0 , 0x5 , 0x9 , 0x50, 0x0 , 0x0 ,  0x1 ,  0x55,  0x44,
		0x0 , 0x0 , 0x56, 0x55, 0x0 , 0x0 , 0x15,  0x95,  0x0 ,  0x0 ,
		0x5 , 0x64, 0x0 , 0x0 , 0x4 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{		
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0xA , 0x80, 0x0 , 0x0 , 0x10,  0xA8,  0x0 ,  0x0 ,
		0x55, 0x8A, 0x80, 0x0 , 0x56, 0x64, 0x0 ,  0x4 ,  0xA ,  0x65,
		0x41, 0x15, 0x0 , 0xA9, 0x56, 0x55, 0x5 ,  0x9 ,  0x55,  0xA9,
		0x1 , 0x40, 0x15, 0x54, 0x0 , 0x0 , 0x1 ,  0x40,  0x0 ,  0x0 ,
		0x0 , 0x40, 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x15,
		0x2A, 0xAA, 0x0 , 0x55, 0x2 , 0x20, 0x1 ,  0x55,  0x56,  0x65,
		0x56, 0xAA, 0x56, 0x65, 0x55, 0x54, 0x5A,  0xAA,  0x55,  0x50,
		0x0 , 0x40, 0x0 , 0x10, 0x1 , 0x50, 0x0 ,  0x0 ,  0x0 ,  0x40,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x10,  0x0 ,  0x0 ,
		0x1 , 0x54, 0x0 , 0x0 , 0x1 , 0x54, 0x0 ,  0x0 ,  0x1 ,  0x58,
		0x0 , 0x8 , 0x6 , 0xA0, 0x2 , 0xA0, 0x16,  0x50,  0x28,  0x21,
		0x55, 0x50, 0x22, 0x65, 0x55, 0x4 , 0x16,  0x66,  0x90,  0x0 ,
		0x55, 0xA8, 0x0 , 0x0 , 0x16, 0x90, 0x0 ,  0x0 ,  0x10,  0x14,
		0x0 , 0x0 , 0x0 , 0x4 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x5 , 0x0 , 0x0 , 0x0 , 0x15,  0x40,  0x0 ,  0x0 ,
		0x5 , 0x80, 0x0 , 0x0 , 0x16, 0x40, 0x0 ,  0x0 ,  0x19,  0x40,
		0x0 , 0x0 , 0x15, 0x50, 0x0 , 0x20, 0x55,  0x0 ,  0x0 ,  0x81,
		0x54, 0x0 , 0x2 , 0x25, 0x50, 0x0 , 0x2 ,  0x21,  0x80,  0x0 ,
		0x28, 0x9A, 0x0 , 0x0 , 0x1 , 0x68, 0x0 ,  0x0 ,  0x5 ,  0x61,
		0x40, 0x0 , 0x1 , 0x41, 0x40, 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x1 , 0x50, 0x0 , 0x0 , 0x5 , 0x64,  0x0 ,  0x0 ,  0x1 ,
		0x64, 0x0 , 0x0 , 0x0 , 0x65, 0x40, 0x0 ,  0x1 ,  0x95,  0x0 ,
		0x0 , 0x0 , 0x54, 0x0 , 0x0 , 0x0 , 0x54,  0x0 ,  0x0 ,  0x21,
		0x50, 0x0 , 0x0 , 0x21, 0x50, 0x0 , 0x0 ,  0xA5,  0xA0,  0x0 ,
		0x0 , 0x8A, 0x80, 0x0 , 0x2 , 0xA5, 0x84,  0x0 ,  0x2 ,  0x1A,
		0x14, 0x0 , 0x2 , 0x16, 0x10, 0x0 , 0x0 ,  0x54,  0x0 ,  0x0 ,
		0x0 , 0x14, 0x0 , 0x0 ,
	},
	{
		0x0 , 0x56, 0x0 , 0x0 , 0x0 , 0x56, 0x40,  0x0 ,  0x0 ,  0x56,
		0x54, 0x0 , 0x0 , 0x16, 0x50, 0x0 , 0x0 ,  0x6 ,  0x50,  0x0 ,
		0x0 , 0x1 , 0x50, 0x0 , 0x0 , 0x1 , 0x50,  0x0 ,  0x0 ,  0x1 ,
		0x50, 0x0 , 0x0 , 0x21, 0x60, 0x0 , 0x0 ,  0x21,  0x60,  0x0 ,
		0x0 , 0x2A, 0xA1, 0x0 , 0x0 , 0x21, 0x65,  0x40,  0x0 ,  0x2A,
		0xA1, 0x0 , 0x0 , 0x21, 0x60, 0x0 , 0x0 ,  0x21,  0x50,  0x0 ,
		0x0 , 0x1 , 0x50, 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x5 , 0x80, 0x40,  0x0 ,  0x15,  0x65,
		0x0 , 0x0 , 0x5 , 0x65, 0x0 , 0x0 , 0x5 ,  0x69,  0x40,  0x0 ,
		0x0 , 0x15, 0x40, 0x0 , 0x0 , 0x5 , 0x50,  0x0 ,  0x0 ,  0x1 ,
		0x60, 0x0 , 0x0 , 0x1 , 0x60, 0x0 , 0x0 ,  0x20,  0x58,  0x50,
		0x0 , 0xA , 0xA9, 0x40, 0x0 , 0x8 , 0x5A,  0x0 ,  0x0 ,  0x8 ,
		0xA6, 0x0 , 0x0 , 0x2 , 0x15, 0x0 , 0x0 ,  0x2 ,  0x95,  0x40,
		0x0 , 0x0 , 0x4 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x10,
		0x0 , 0x0 , 0x19, 0x50, 0x0 , 0x0 , 0x56,  0x54,  0x0 ,  0x0 ,
		0x55, 0x95, 0x0 , 0x0 , 0x11, 0x55, 0x40,  0x0 ,  0x0 ,  0x5 ,
		0x60, 0x50, 0x0 , 0x1 , 0x58, 0x50, 0x0 ,  0x0 ,  0x4A,  0x0 ,
		0x0 , 0x8 , 0xA6, 0x80, 0x0 , 0x2 , 0x9 ,  0x50,  0x0 ,  0x0 ,
		0xA1, 0x50, 0x0 , 0x0 , 0x8 , 0x40, 0x0 ,  0x0 ,  0x8 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x1 , 0x0 , 0x0 , 0x0 , 0x1 ,  0x40,  0x0 ,  0x0 ,
		0x15, 0x54, 0x1 , 0x40, 0x6A, 0x55, 0x60,  0x50,  0x55,  0x95,
		0x6A, 0x0 , 0x54, 0x41, 0x59, 0xA0, 0x10,  0x0 ,  0x19,  0x95,
		0x0 , 0x2 , 0xA2, 0x55, 0x0 , 0x0 , 0x2A,  0x4 ,  0x0 ,  0x0 ,
		0x2 , 0xA0, 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,  0x0 ,  0x0 ,  0x0 ,
		0x0 , 0x0 , 0x0 , 0x0
	}
    }
};

char    swhitsym[HITSYMS][SYMBYTES] = {  /*  Hit plane pixel array  */

/*  airplane symbols based on the following template file:
16
. . . . . . 2 2 2 2 2 2 2 2 2 2
. . . . . . . 2 2 2 1 1 2 2 2 .
. . . . . . . . 2 2 1 1 2 2 . .
. . . . . . . . . . 1 1 . . . .
. . . . . . . . . . 1 1 . . . .
. . . . . . . . . . 1 1 . . . .
. . . . . . . . . 1 1 1 1 . . .
. . . . . . . . . 1 1 1 1 . . .
. . . . . . . . . 1 1 1 1 . . .
. . . . . . . . . 1 1 1 1 . . .
. . 2 2 2 2 2 2 2 2 1 1 2 2 2 2
2 2 2 2 2 2 2 2 2 2 1 1 2 2 2 .
2 2 2 2 2 2 2 2 2 2 1 1 2 2 2 2
2 2 2 2 2 2 2 2 2 2 1 1 2 2 . 2
. . . . . . . . . 1 1 1 1 . . .
. . . . . . . . . 1 1 1 1 . . .
*/
	{
		0x0 , 0xA , 0xAA, 0xAA, 0x0 , 0x2 , 0xA5, 0xA8, 0x0 , 0x0 ,
		0xA5, 0xA0, 0x0 , 0x0 , 0x5 , 0x0 , 0x0 , 0x0 , 0x5 , 0x0 ,
		0x0 , 0x0 , 0x5 , 0x0 , 0x0 , 0x0 , 0x15, 0x40, 0x0 , 0x0 ,
		0x15, 0x40, 0x0 , 0x0 , 0x15, 0x40, 0x0 , 0x0 , 0x15, 0x40,
		0xA , 0xAA, 0xA5, 0xAA, 0xAA, 0xAA, 0xA5, 0xA8, 0xAA, 0xAA,
		0xA5, 0xAA, 0xAA, 0xAA, 0xA5, 0xA2, 0x0 , 0x0 , 0x15, 0x40,
		0x0 , 0x0 , 0x15, 0x40,
	},
	{
		0x0 , 0x0 , 0x95, 0x0 , 0x0 , 0x1 , 0x95, 0x0 , 0x0 , 0x15,
		0x95, 0x0 , 0x0 , 0x5 , 0x94, 0x0 , 0x0 , 0x5 , 0x90, 0x0 ,
		0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x5 , 0x40, 0x0 , 0x0 , 0x5 ,
		0x40, 0x0 , 0x0 , 0x9 , 0x48, 0x0 , 0x0 , 0x9 , 0x48, 0x0 ,
		0x0 , 0x4A, 0xA8, 0x0 , 0x1 , 0x59, 0x48, 0x0 , 0x0 , 0x4A,
		0xA8, 0x0 , 0x0 , 0x9 , 0x48, 0x0 , 0x0 , 0x5 , 0x48, 0x0 ,
		0x0 , 0x5 , 0x40, 0x0
	}
};


char    swwinsym[WINSIZES][WINBYTES] = {  /*  Win plane pixel array  */

/*  airplane symbols based on the following template files:
16                                 16
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . 1 1 . . . . . . .
. . . . . . . 1 1 . . . . . . .    . . . . . . 2 2 2 2 . . . . . .
. . . . . . . 1 1 . . . . . . .    . . . . . . 2 2 2 2 . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . 1 1 . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .

16                                 16
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . 1 1 . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . 1 1 . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . 1 1 . . . . . . .
. . . . . . . . . . . . . . . .    2 2 2 2 2 2 2 1 1 2 2 2 2 2 2 2
. . . . . . . 1 1 . . . . . . .    . . . . . . . 1 1 . . . . . . .
. . . . 2 2 2 1 1 2 2 2 . . . .    . . . . 2 2 2 2 2 2 2 2 . . . .
. . . . . . . 1 1 . . . . . . .    . . . . . . 1 1 1 1 . . . . . .
. . . . . 2 2 2 2 2 2 . . . . .    . . . . . . 1 1 1 1 . . . . . .
. . . . . . 1 . . 1 . . . . . .    . 2 2 2 2 2 2 2 2 2 2 2 2 2 2 .
. . . . . . . . . . . . . . . .    . . . . . 1 . . . . 1   . . . .
. . . . . . . . . . . . . . . .    . . . . 1 . . . . . . 1 . . . .
. . . . . . . . . . . . . . . .    . . . . 1 . . . . . . 1 . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
. . . . . . . . . . . . . . . .    . . . . . . . . . . . . . . . .
*/
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 ,
		0x40, 0x0 , 0x0 , 0x1 , 0x40, 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x40, 0x0 , 0x0 , 0xA ,
		0xA0, 0x0 , 0x0 , 0xA , 0xA0, 0x0 , 0x0 , 0x1 , 0x40, 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 , 0x40, 0x0 , 0x0 , 0xA9,
		0x6A, 0x0 , 0x0 , 0x1 , 0x40, 0x0 , 0x0 , 0x2A, 0xA8, 0x0 ,
		0x0 , 0x4 , 0x10, 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0 ,
	},
	{
		0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 , 0x1 ,
		0x40, 0x0 , 0x0 , 0x1 , 0x40, 0x0 , 0x0 , 0x1 , 0x40, 0x0 ,
		0xAA, 0xA9, 0x6A, 0xAA, 0x0 , 0x1 , 0x40, 0x0 , 0x0 , 0xAA,
		0xAA, 0x0 , 0x0 , 0x5 , 0x50, 0x0 , 0x0 , 0x5 , 0x50, 0x0 ,
		0x2A, 0xAA, 0xAA, 0xA8, 0x0 , 0x10, 0x4 , 0x0 , 0x0 , 0x40,
		0x1 , 0x0 , 0x0 , 0x40, 0x1 , 0x0 , 0x0 , 0x0 , 0x0 , 0x0 ,
		0x0 , 0x0 , 0x0 , 0x0
	}
};


//---------------------------------------------------------------------------
//
// $Log$
// Revision 1.1  2003/02/14 19:02:47  fraggle
// Initial revision
//
//
// sdh 21/10/2001: reformatted headers, added cvs tags
// sdh 20/10/2001: added some missing {}'s to shut up compiler
//
//---------------------------------------------------------------------------

