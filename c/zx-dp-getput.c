/* c/zx-dp-getput.c - WARNING: This file was automatically generated. DO NOT EDIT!
 * $Id$ */
/* Code generation design Copyright (c) 2006 Sampo Kellomaki (sampo@iki.fi),
 * All Rights Reserved. NO WARRANTY. See file COPYING for terms and conditions
 * of use. Some aspects of code generation were driven by schema
 * descriptions that were used as input and may be subject to their own copyright.
 * Code generation uses a template, whose copyright statement follows. */

/** getput-templ.c  -  Auxiliary functions template: cloning, freeing, walking data
 ** Copyright (c) 2006 Symlabs (symlabs@symlabs.com), All Rights Reserved.
 ** Author: Sampo Kellomaki (sampo@iki.fi)
 ** This is confidential unpublished proprietary source code of the author.
 ** NO WARRANTY, not even implied warranties. Contains trade secrets.
 ** Distribution prohibited unless authorized in writing.
 ** Licensed under Apache License 2.0, see file COPYING.
 ** Id: getput-templ.c,v 1.7 2007/03/28 20:31:54 sampo Exp $
 **
 ** 30.5.2006, created, Sampo Kellomaki (sampo@iki.fi)
 ** 6.8.2006, factored from enc-templ.c to separate file --Sampo
 **
 ** N.B: wo=wire order (needed for exc-c14n), so=schema order
 ** Edit with care! xsd2sg.pl applies various substitutions to this file.
 **/

#include <memory.h>
#include "errmac.h"
#include "zx.h"
#include "c/zx-const.h"
#include "c/zx-data.h"
#include "c/zx-dp-data.h"

/* FUNC(zx_dp_Request_GET_itemID) */
struct zx_str* zx_dp_Request_GET_itemID(struct zx_dp_Request_s* x) { return x->itemID; }
/* FUNC(zx_dp_Request_PUT_itemID) */
void zx_dp_Request_PUT_itemID(struct zx_dp_Request_s* x, struct zx_str* y) { x->itemID = y; }





/* FUNC(zx_dp_Response_GET_ref) */
struct zx_str* zx_dp_Response_GET_ref(struct zx_dp_Response_s* x) { return x->ref; }
/* FUNC(zx_dp_Response_PUT_ref) */
void zx_dp_Response_PUT_ref(struct zx_dp_Response_s* x, struct zx_str* y) { x->ref = y; }





/* EOF -- c/zx-dp-getput.c */