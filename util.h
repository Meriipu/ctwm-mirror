/*****************************************************************************/
/**       Copyright 1988 by Evans & Sutherland Computer Corporation,        **/
/**                          Salt Lake City, Utah                           **/
/**  Portions Copyright 1989 by the Massachusetts Institute of Technology   **/
/**                        Cambridge, Massachusetts                         **/
/**                                                                         **/
/**                           All Rights Reserved                           **/
/**                                                                         **/
/**    Permission to use, copy, modify, and distribute this software and    **/
/**    its documentation  for  any  purpose  and  without  fee is hereby    **/
/**    granted, provided that the above copyright notice appear  in  all    **/
/**    copies and that both  that  copyright  notice  and  this  permis-    **/
/**    sion  notice appear in supporting  documentation,  and  that  the    **/
/**    names of Evans & Sutherland and M.I.T. not be used in advertising    **/
/**    in publicity pertaining to distribution of the  software  without    **/
/**    specific, written prior permission.                                  **/
/**                                                                         **/
/**    EVANS & SUTHERLAND AND M.I.T. DISCLAIM ALL WARRANTIES WITH REGARD    **/
/**    TO THIS SOFTWARE, INCLUDING ALL IMPLIED WARRANTIES  OF  MERCHANT-    **/
/**    ABILITY  AND  FITNESS,  IN  NO  EVENT SHALL EVANS & SUTHERLAND OR    **/
/**    M.I.T. BE LIABLE FOR ANY SPECIAL, INDIRECT OR CONSEQUENTIAL  DAM-    **/
/**    AGES OR  ANY DAMAGES WHATSOEVER  RESULTING FROM LOSS OF USE, DATA    **/
/**    OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER    **/
/**    TORTIOUS ACTION, ARISING OUT OF OR IN  CONNECTION  WITH  THE  USE    **/
/**    OR PERFORMANCE OF THIS SOFTWARE.                                     **/
/*****************************************************************************/
/*
 *  [ ctwm ]
 *
 *  Copyright 1992 Claude Lecommandeur.
 *
 * Permission to use, copy, modify  and distribute this software  [ctwm] and
 * its documentation for any purpose is hereby granted without fee, provided
 * that the above  copyright notice appear  in all copies and that both that
 * copyright notice and this permission notice appear in supporting documen-
 * tation, and that the name of  Claude Lecommandeur not be used in adverti-
 * sing or  publicity  pertaining to  distribution of  the software  without
 * specific, written prior permission. Claude Lecommandeur make no represen-
 * tations  about the suitability  of this software  for any purpose.  It is
 * provided "as is" without express or implied warranty.
 *
 * Claude Lecommandeur DISCLAIM ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL  IMPLIED WARRANTIES OF  MERCHANTABILITY AND FITNESS.  IN NO
 * EVENT SHALL  Claude Lecommandeur  BE LIABLE FOR ANY SPECIAL,  INDIRECT OR
 * CONSEQUENTIAL  DAMAGES OR ANY  DAMAGES WHATSOEVER  RESULTING FROM LOSS OF
 * USE, DATA  OR PROFITS,  WHETHER IN AN ACTION  OF CONTRACT,  NEGLIGENCE OR
 * OTHER  TORTIOUS ACTION,  ARISING OUT OF OR IN  CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 *
 * Author:  Claude Lecommandeur [ lecom@sic.epfl.ch ][ April 1992 ]
 */


/***********************************************************************
 *
 * $XConsortium: util.h,v 1.10 89/12/10 17:47:04 jim Exp $
 *
 * utility routines header file
 *
 * 28-Oct-87 Thomas E. LaStrange                File created
 *
 ***********************************************************************/

#ifndef _CTWM_UTIL_H
#define _CTWM_UTIL_H

#include <ctype.h>

#include "types.h"

#ifndef MAX
#define MAX(x,y) ((x)>(y)?(x):(y))
#endif
#ifndef MIN
#define MIN(x,y) ((x)<(y)?(x):(y))
#endif
#ifndef ABS
#define ABS(x) ((x)<0?-(x):(x))
#endif

/*
 * Define some helper macros, because "The argument to toupper() must be
 * EOF or representable as an unsigned char; otherwise, the behavior is
 * undefined." In particular, an argument of type "char" is problematic
 * (gcc:  warning: array subscript has type 'char').
 */
#define Isascii(c)      isascii((int)(unsigned char)(c))
#define Isdigit(c)      isdigit((int)(unsigned char)(c))
#define Islower(c)      islower((int)(unsigned char)(c))
#define Isupper(c)      isupper((int)(unsigned char)(c))
#define Tolower(c)      tolower((int)(unsigned char)(c))
#define Toupper(c)      toupper((int)(unsigned char)(c))

void     Zoom(Window wf, Window wt);
void     MoveOutline(Window root,
                     int x, int y, int width, int height,
                     int bw, int th);
char     *ExpandFilename(const char *name);
char     *ExpandFilePath(char *path);

void InsertRGBColormap(Atom a, XStandardColormap *maps, int nmaps,
                       Bool replace);
void RemoveRGBColormap(Atom a);
void LocateStandardColormaps(void);
void GetColor(int kind, Pixel *what, char *name);
void GetShadeColors(ColorPair *cp);
void GetFont(MyFont *font);
Bool UpdateFont(MyFont *font, int height);
void SetFocusVisualAttributes(TwmWindow *tmp_win, Bool focus);
void move_to_after(TwmWindow *t, TwmWindow *after);
void SetFocus(TwmWindow *tmp_win, Time tim);
Pixmap CreateMenuIcon(int height, unsigned int *widthp, unsigned int *heightp);
Pixmap Create3DMenuIcon(unsigned int height,
                        unsigned int *widthp, unsigned int *heightp,
                        ColorPair cp);
Pixmap Create3DIconManagerIcon(ColorPair cp);
void Draw3DBorder(Window w,
                  int x, int y, int width, int height, int bw,
                  ColorPair cp,
                  int state, int fill, int forcebw);
void Draw3DCorner(Window w,
                  int x, int y, int width, int height, int thick, int bw,
                  ColorPair cp,
                  int type);
void PaintBorders(TwmWindow *tmp_win, Bool focus);
void PaintIcon(TwmWindow *tmp_win);
void AdoptWindow(void);
void RescueWindows(void);
void DebugTrace(char *file);
void SetBorderCursor(TwmWindow *tmp_win, int x, int y);


unsigned char *GetWMPropertyString(Window w, Atom prop);
void FreeWMPropertyString(char *prop);
void ConstrainByBorders1(int *left, int width, int *top, int height);
void ConstrainByBorders(TwmWindow *twmwin,
                        int *left, int width,
                        int *top, int height);

#endif /* _CTWM_UTIL_H */
