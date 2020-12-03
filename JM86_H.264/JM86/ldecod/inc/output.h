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
 **************************************************************************************
 * \file
 *    output.h
 * \brief
 *    Picture writing routine headers
 * \author
 *    Main contributors (see contributors.h for copyright, address and affiliation details) 
 *      - Karsten Suehring        <suehring@hhi.de>
 ***************************************************************************************
 */

void write_stored_frame(FrameStore *fs, FILE *p_out);
void direct_output(StorablePicture *p, FILE *p_out);
void init_out_buffer();
void uninit_out_buffer();

#ifdef PAIR_FIELDS_IN_OUTPUT
void flush_pending_output(FILE *p_out);
#endif
