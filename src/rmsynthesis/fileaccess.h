/******************************************************************************
fileaccess.h
Copyright (C) 2016  {fullname}

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

Correspondence concerning RMSynth_GPU should be addressed to: 
sarrvesh.ss@gmail.com

******************************************************************************/
#ifndef FILEACCESS_H
#define FILEACCESS_H

#ifdef __cplusplus
extern "C"
#endif

int getFitsHeader(struct optionsList *inOptions, struct parList *params);
int getFreqList(struct optionsList *inOptions, struct parList *params);
void checkFitsError(int status);
void makeOutputFitsImages(struct optionsList *inOptions, struct parList *params);
void checkInputFiles(struct optionsList *inOptions, struct parList *params);
int getHDF5Header(struct optionsList *inOptions, struct parList *params);
void makeOutputHDF5Images(struct optionsList *inOptions, struct parList *params);

/* Define the output file names here */
#define DIRTY_P "dirtyP.fits"
#define DIRTY_Q "dirtyQ.fits"
#define DIRTY_U "dirtyU.fits"

#endif
