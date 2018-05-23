/* Copyright (C) 2001-2018 Artifex Software, Inc.
   All Rights Reserved.

   This software is provided AS-IS with no warranty, either express or
   implied.

   This software is distributed under license and may not be copied,
   modified or distributed except as expressly authorized under the terms
   of the license contained in the file LICENSE in this distribution.

   Refer to licensing information at http://www.artifex.com or contact
   Artifex Software, Inc.,  1305 Grant Avenue - Suite 200, Novato,
   CA 94945, U.S.A., +1(415)492-9861, for further information.
*/


/* Shared procedures for outline character rendering */

#ifndef gxchrout_INCLUDED
#  define gxchrout_INCLUDED

#ifndef gs_gstate_DEFINED
#  define gs_gstate_DEFINED
typedef struct gs_gstate_s gs_gstate;
#endif

/*
 * Determine the flatness for rendering a character in an outline font.
 * This may be less than the flatness in the gs_gstate.
 * The second argument is the default scaling for the font: 0.001 for
 * Type 1 fonts, 1.0 for TrueType fonts.
 */
double gs_char_flatness(const gs_gstate *pgs, double default_scale);

#endif /* gxchrout_INCLUDED */