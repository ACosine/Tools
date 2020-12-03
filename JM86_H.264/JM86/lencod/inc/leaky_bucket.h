/**********************************************************************
 * Software Copyright Licensing Disclaimer
 *
 * This software module was originally developed by contributors to the
 * course of the development of ISO/IEC 14496-10 for reference purposes
 * and its performance may not have been optimized.  This software
 * module is an implementation of one or more tools as specified by
 * ISO/IEC 14496-10.  ISO/IEC gives users free license to this software
 * module or modifications thereof. Those intending to use this software
 * module in products are advised that its use may infringe existing
 * patents.  ISO/IEC have no liability for use of this software module
 * or modifications thereof.  The original contributors retain full
 * rights to modify and use the code for their own purposes, and to
 * assign or donate the code to third-parties.
 *
 * This copyright notice must be included in all copies or derivative
 * works.  Copyright (c) ISO/IEC 2004.
 **********************************************************************/

/*!
 ***************************************************************************
 *
 * \file leaky_bucket.h
 *
 * \brief
 *    Header for Leaky Buffer parameters
 *
 * \author
 *    Main contributors (see contributors.h for copyright, address and affiliation details)
 *    - Shankar Regunathan                   <shanre@microsoft.com>
 **************************************************************************/

#ifndef _LEAKY_BUCKET_H_
#define _LEAKY_BUCKET_H_

#include "global.h"

/* Leaky Bucket Parameter Optimization */
#ifdef _LEAKYBUCKET_
int get_LeakyBucketRate(unsigned long NumberLeakyBuckets, unsigned long *Rmin);
void PutBigDoubleWord(unsigned long dw, FILE *fp);
void write_buffer(unsigned long NumberLeakyBuckets, unsigned long Rmin[], unsigned long Bmin[], unsigned long Fmin[]);
void Sort(unsigned long NumberLeakyBuckets, unsigned long *Rmin);
void calc_buffer();
#endif

#endif

