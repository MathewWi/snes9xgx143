/****************************************************************************
 * Snes9x 1.51 Nintendo Wii/Gamecube Port
 *
 * softdev July 2006
 * Michniewski 2008
 * Tantric September 2008
 *
 * gcunzip.h
 *
 * File unzip routines
 ****************************************************************************/
#ifndef _GCUNZIP_H_
#define _GCUNZIP_H_

int IsZipFile (char *buffer);
char * GetFirstZipFilename(int method);
int UnZipBuffer (unsigned char *outbuffer, int method);
int SzParse(char * filepath, int method);
int SzExtractFile(int i, unsigned char *buffer);
void SzClose();

#endif
