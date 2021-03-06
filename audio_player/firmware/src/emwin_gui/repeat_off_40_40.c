/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.36.                           *
*        Compiled Aug 31 2016, 10:51:11                              *
*                                                                    *
*        (c) 1998 - 2016 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: repeat_off_40_40                                      *
* Dimensions:  40 * 40                                               *
* NumColors:   256                                                   *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmrepeat_off_40_40;

/*********************************************************************
*
*       Palette
*
*  Description
*    The following are the entries of the palette table.
*    The entries are stored as a 32-bit values of which 24 bits are
*    actually used according to the following bit mask: 0xBBGGRR
*
*    The lower   8 bits represent the Red   component.
*    The middle  8 bits represent the Green component.
*    The highest 8 bits represent the Blue  component.
*/
static GUI_CONST_STORAGE GUI_COLOR _Colorsrepeat_off_40_40[] = {
  0x000000, 0x241CEC, 0xFEFEFE, 0xD2E647,
  0xDBEB6C, 0xD9D9D9, 0x453EEF, 0xE1E1E1,
  0xEEEEEE, 0xB1B2B2, 0xFCFCFC, 0x9D9D9D,
  0xAAAAAA, 0xA4A4A4, 0xF4F4F4, 0xCEE149,
  0xE8E8E8, 0x2E26E0, 0x969696, 0xE6E6E6,
  0xCADC4C, 0x2F28D6, 0x2E2E2E, 0xD0E448,
  0xD5D6D5, 0x101010, 0x2E28DA, 0x251DEB,
  0x2C24E2, 0xB8B8B8, 0xC0C0C0, 0xF6F6F6,
  0x2C26DE, 0x2C25E0, 0x2D26E0, 0x2A23E4,
  0x2921E9, 0xC6C6C5, 0xD1D1D1, 0xDDDDDD,
  0xFAFAFA, 0x2E26DE, 0x2E28D8, 0x2922E6,
  0x3028EA, 0x342CEA, 0x8D8D90, 0xCDCDCD,
  0xECECEC, 0x404040, 0xD0E348, 0x322BEA,
  0xB6B6B6, 0x1D1D1D, 0x2A2A2A, 0x2C2C2C,
  0x343436, 0x363636, 0x464647, 0x545457,
  0xCCDE4C, 0xC6D654, 0xC5D265, 0x7E7C88,
  0x2E27DA, 0x2E27DC, 0x2F28DE, 0x261EEA,
  0x2B24E2, 0x2D26E2, 0x2E27E3, 0x2E26E4,
  0x2E27E7, 0x2720E8, 0x2D26E8, 0x352EEA,
  0x433CEE, 0x443DEE, 0xA2A2A2, 0xBDBDBD,
  0xCACACA, 0x191919, 0x1B1B1B, 0x303030,
  0x343535, 0x383838, 0x3A3A3A, 0x444444,
  0x444447, 0x45454A, 0x47464B, 0x48474B,
  0x4E4E50, 0x515055, 0x555458, 0x626264,
  0x666568, 0x666470, 0x686672, 0x6E6D74,
  0x707073, 0xC7D84F, 0xCCDF4B, 0xC9DA4E,
  0xC5D651, 0xC2D254, 0xD2E548, 0xD2E648,
  0xD2E54E, 0xC4D262, 0xC2D064, 0xD7E862,
  0xDAEA6A, 0x7B7A83, 0x2D27DC, 0x2F28DC,
  0x271FE9, 0x2922E5, 0x2C24E4, 0x2D25E6,
  0x2F28E1, 0x332CEA, 0x828188, 0x909090,
  0x9998A1, 0xADADAD, 0xBDBDBA, 0xF6F5F5,
  0x100F10, 0x1E1E1E, 0x343334, 0x373738,
  0x3B3B3C, 0x3C3C3C, 0x474748, 0x48484A,
  0x4A4A4C, 0x4B4B50, 0x4C4B50, 0x4D4D50,
  0x4E4D50, 0x545356, 0x59585A, 0x5A595D,
  0x5D5D5E, 0x616163, 0x656468, 0x666668,
  0x65656B, 0x67666B, 0x68686C, 0x6A696F,
  0x6D6D6F, 0x646370, 0x676672, 0x686674,
  0x6B6A73, 0x6C6B73, 0x6A6875, 0x6D6B75,
  0x6F6E75, 0x6F6E77, 0x727274, 0x757576,
  0x71707B, 0x73727B, 0x767679, 0x75757A,
  0x76757B, 0x73717D, 0x79797C, 0xBDC967,
  0xB6C070, 0xC7D852, 0xC9DA52, 0xCCDD57,
  0xC7D65B, 0xC7D75C, 0xC8D859, 0xCBDC58,
  0xCEE14C, 0xD2E547, 0xD2E54B, 0xD2E54C,
  0xD2E552, 0xD5E75C, 0xD6E75E, 0xC7D664,
  0xC9D960, 0xCEDB72, 0xD9E966, 0xD9EA67,
  0x797881, 0x7A7981, 0x7C7C80, 0x7A7885,
  0x7B7986, 0x2921E7, 0x2A23E6, 0x2B24E4,
  0x3029E9, 0x3E37EE, 0x4038EE, 0x413AEF,
  0x423BEF, 0x807F84, 0x807F89, 0x818087,
  0x848389, 0x8F9090, 0x939298, 0x949399,
  0xB1B68A, 0xA3A690, 0xA3A4A3, 0xA2A1A4,
  0xA4A3A6, 0xABACAB, 0xABABAD, 0xB5B8A7,
  0xB9BCA2, 0xBCBFA3, 0xB8BAA5, 0xB9BCA4,
  0xB5B6AD, 0xB9BCAA, 0xB2B1B4, 0xB6B4BD,
  0xBCC0A1, 0xD2D9A1, 0xC5C8B4, 0xC8CBB7,
  0xB7B6C0, 0xC4C3C9, 0xC6C6CC, 0xCCCBCB,
  0xCBCCCB, 0xD4D4D2, 0xD7D8D7, 0xD9D8DE,
  0xE0DFDF, 0xE2E8C5, 0xDBDBE1, 0xDFDFE2,
  0xE0DFE0, 0xE2E2E4, 0xE7E8E7, 0xE7E8E8,
  0xEEEDED, 0xF0EFEF, 0xF1F2EF, 0xF0F0F0,
  0xF5F6F5, 0xF8F9F9, 0xFBFBFC, 0xFBFCFC
};

static GUI_CONST_STORAGE GUI_LOGPALETTE _Palrepeat_off_40_40 = {
  256,  // Number of entries
  1,    // Has transparency
  &_Colorsrepeat_off_40_40[0]
};

static GUI_CONST_STORAGE unsigned char _acrepeat_off_40_40[] = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x35, 0x54, 0x86, 0x8C, 0x5B, 0x5B, 0x8B, 0x3A, 0x82, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x90, 0xA8, 0x73, 0x73, 0x73, 0x22, 0x22, 0x22, 0x20, 0x1A, 0x1A, 0x2A, 0xA0, 0x8E, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x64, 0xA4, 0x41, 0x23, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x23, 0x1A, 0x61, 0x96, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x98, 0xA9, 0x11, 0x1B, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x72, 0x99, 0x93, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0xC2, 0x73, 0x43, 0x01, 0x01, 0x01, 0x01, 0x1B, 0x33, 0x4C, 0x06, 0x06, 0x06, 0x06, 0x4C, 0x33, 0x1B, 0x01, 0x01, 0x01, 0x01, 0x1B, 0x15, 0x63, 0x83, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0xC1, 0x11, 0x01, 0x01, 0x01, 0x01, 0x4B, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x4B, 0x01, 0x01, 0x01, 0x01, 0x20, 0x62, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x57, 0xC0, 0x1C, 0x01, 0x01, 0x01, 0x2C, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x2C, 0x01, 0x01, 0x01, 0x23, 0x61, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x55, 0x71, 0x1C, 0x01, 0x01, 0x01, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x01, 0x23, 0x9A, 0x54, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x80, 0xCD, 0x22, 0x01, 0x01, 0x01, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x01, 0x20, 0x63, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x64, 0x42, 0x01, 0x01, 0x01, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x10, 0xB7, 0x04, 0x02, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x01, 0x15, 0x60, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x16, 0xC3, 0x1B, 0x01, 0x01, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0xBA, 0x03, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x01, 0x15, 0x36, 0x00, 0x00,
  0x00, 0x00, 0xA6, 0x22, 0x01, 0x01, 0x2C, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0xBF, 0x03, 0x03, 0x03, 0xB9, 0x02, 0x02, 0x02, 0x02, 0x2C, 0x01, 0x01, 0x72, 0x95, 0x00, 0x00,
  0x00, 0x16, 0xC4, 0x01, 0x01, 0x01, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x6B, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x01, 0x15, 0x36, 0x00,
  0x00, 0x91, 0x11, 0x01, 0x01, 0x2D, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x02, 0x02, 0x02, 0x2D, 0x01, 0x01, 0x1A, 0x5E, 0x00,
  0x00, 0xCF, 0x2B, 0x01, 0x01, 0x06, 0x02, 0x02, 0x02, 0x02, 0x02, 0xB8, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x75, 0x9D, 0x00,
  0x52, 0x11, 0x01, 0x01, 0x1B, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x03, 0x03, 0x6B, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x1B, 0x01, 0x01, 0x15, 0x51,
  0x84, 0x11, 0x01, 0x01, 0x33, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x03, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x04, 0x03, 0x6A, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x33, 0x01, 0x01, 0x15, 0x38,
  0x5C, 0x11, 0x01, 0x01, 0x4D, 0x02, 0x02, 0x02, 0x02, 0x6C, 0x03, 0x03, 0x6C, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x70, 0x03, 0x04, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x4D, 0x01, 0x01, 0x40, 0x58,
  0x8D, 0x1C, 0x01, 0x01, 0x06, 0x28, 0xFE, 0xFE, 0x02, 0xB6, 0x03, 0x03, 0x6F, 0x02, 0xFE, 0xFF, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x02, 0x04, 0x02, 0x0A, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x06, 0x01, 0x01, 0x20, 0x5A,
  0x3B, 0x76, 0x01, 0x01, 0x4C, 0x0E, 0x0E, 0x0E, 0x28, 0x6A, 0x03, 0x6F, 0xFD, 0x0E, 0x0E, 0x7F, 0x0E, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0xFC, 0x1F, 0x1F, 0x1F, 0x28, 0x1F, 0x1F, 0x1F, 0x1F, 0x4D, 0x01, 0x01, 0x21, 0x59,
  0x3B, 0x76, 0x01, 0x01, 0xCB, 0xF8, 0xF8, 0xF8, 0x08, 0x07, 0xBE, 0xF9, 0xF8, 0xF8, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0xF9, 0x08, 0xF9, 0xF9, 0x28, 0xBD, 0xF9, 0xFB, 0xF9, 0xF9, 0xCC, 0x01, 0x01, 0x21, 0x59,
  0x3B, 0x1C, 0x01, 0x01, 0xC9, 0x13, 0x13, 0x13, 0x13, 0x10, 0x13, 0x13, 0xF6, 0x10, 0x10, 0xF6, 0xF6, 0xF6, 0xF6, 0xF7, 0xF6, 0xF6, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x0E, 0xAF, 0x32, 0xFA, 0x10, 0x10, 0x10, 0xCA, 0x01, 0x01, 0x21, 0x5A,
  0x5C, 0x11, 0x01, 0x01, 0x2D, 0xF3, 0xF0, 0xF4, 0xF0, 0xF4, 0xF4, 0xF4, 0xF5, 0xEE, 0x50, 0xF5, 0xF4, 0xF4, 0xF4, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0xF5, 0xF1, 0x3D, 0x14, 0x14, 0x30, 0x07, 0x07, 0xF5, 0x4B, 0x01, 0x01, 0x41, 0x58,
  0x85, 0x11, 0x01, 0x01, 0x24, 0xEF, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x27, 0x32, 0xE6, 0x27, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x27, 0x27, 0x69, 0x69, 0x68, 0xD4, 0x07, 0x05, 0x05, 0xF2, 0x24, 0x01, 0x01, 0x2A, 0x38,
  0x52, 0x11, 0x01, 0x01, 0x01, 0x79, 0x26, 0x26, 0x26, 0x26, 0xED, 0x05, 0x3C, 0x0F, 0x1E, 0x05, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0xEE, 0x05, 0x05, 0xE5, 0x68, 0x0F, 0x3C, 0xAB, 0xF0, 0x18, 0xED, 0xED, 0x2D, 0x01, 0x01, 0x01, 0x15, 0x51,
  0x00, 0xD0, 0x24, 0x01, 0x01, 0x79, 0xEC, 0xEB, 0xEB, 0xEB, 0xED, 0xAE, 0x66, 0x14, 0xB2, 0xBC, 0xBB, 0x3E, 0x3E, 0x3E, 0x6D, 0x6D, 0x6E, 0x6E, 0xB1, 0x67, 0x0F, 0x0F, 0xAC, 0xEE, 0x2F, 0x2F, 0x2F, 0x2F, 0x2D, 0x01, 0x01, 0x49, 0x9C, 0x00,
  0x00, 0x5F, 0x45, 0x01, 0x01, 0x24, 0xE9, 0x25, 0x25, 0x50, 0xB4, 0x14, 0x0F, 0x0F, 0x17, 0x66, 0x66, 0x3C, 0x3C, 0x3C, 0x66, 0x0F, 0x6A, 0x6A, 0x0F, 0x6A, 0x67, 0xB0, 0x26, 0x25, 0x25, 0x25, 0x25, 0xEA, 0x24, 0x01, 0x01, 0x41, 0x5E, 0x00,
  0x00, 0x16, 0x11, 0x01, 0x01, 0x01, 0xC8, 0x4F, 0x4F, 0x1E, 0x3D, 0x32, 0x6A, 0x17, 0xB5, 0x32, 0x0F, 0x0F, 0x32, 0x6A, 0x03, 0x03, 0x6A, 0x14, 0x14, 0x65, 0xB3, 0xE7, 0x1E, 0x1E, 0x1E, 0x1E, 0x1E, 0x2C, 0x01, 0x01, 0x01, 0x15, 0x37, 0x00,
  0x00, 0x00, 0xAA, 0x1C, 0x01, 0x01, 0x74, 0xE3, 0x1D, 0x1D, 0x7E, 0x32, 0x14, 0x14, 0x4E, 0xE0, 0xDB, 0xDE, 0xDC, 0xDF, 0xE1, 0x1D, 0x1D, 0x1D, 0xDD, 0x4F, 0x7E, 0x1D, 0x1D, 0x1D, 0x1D, 0x1D, 0xE8, 0x74, 0x01, 0x01, 0x21, 0x94, 0x00, 0x00,
  0x00, 0x00, 0x16, 0x3F, 0x01, 0x01, 0x01, 0x4A, 0x09, 0x09, 0x09, 0xE4, 0x3D, 0x65, 0xD6, 0x34, 0x09, 0x09, 0x09, 0x09, 0x09, 0xE2, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0x09, 0xE2, 0x4A, 0x01, 0x01, 0x01, 0x15, 0x36, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xA3, 0x11, 0x01, 0x01, 0x01, 0x48, 0x0C, 0x0C, 0x0C, 0x7D, 0xAD, 0xD5, 0xD9, 0x0C, 0x0C, 0x0C, 0x0C, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xD9, 0xDA, 0x48, 0x01, 0x01, 0x01, 0x40, 0x92, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x19, 0xD0, 0x1C, 0x01, 0x01, 0x01, 0x48, 0xD7, 0xD6, 0xD6, 0x0D, 0x0B, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0xD8, 0x48, 0x01, 0x01, 0x01, 0x44, 0x9F, 0x19, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x56, 0xCE, 0xC6, 0x01, 0x01, 0x01, 0x77, 0x7C, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x7C, 0x77, 0x01, 0x01, 0x01, 0x2B, 0x9B, 0x39, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3F, 0x2B, 0x01, 0x01, 0x01, 0x49, 0x46, 0xD2, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0x12, 0xD3, 0x46, 0x49, 0x01, 0x01, 0x01, 0x75, 0x62, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x86, 0x3F, 0xC7, 0x01, 0x01, 0x01, 0x01, 0x2B, 0x46, 0x46, 0x2E, 0x2E, 0xD1, 0xD1, 0x7B, 0x7B, 0xD1, 0x2E, 0x47, 0x46, 0x24, 0x01, 0x01, 0x01, 0x01, 0x21, 0x9E, 0x31, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0xCF, 0x11, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x2B, 0x45, 0x78, 0x78, 0x78, 0x78, 0x45, 0xC5, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x40, 0xA1, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0xA2, 0x42, 0x1C, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x21, 0x1A, 0x60, 0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0xA7, 0x42, 0x22, 0x74, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x74, 0x22, 0x1A, 0x97, 0x37, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x53, 0x91, 0x71, 0x42, 0x11, 0x22, 0x44, 0x23, 0x23, 0x44, 0x11, 0x73, 0x73, 0xA5, 0x8F, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x83, 0x88, 0x5D, 0x8A, 0x89, 0x5D, 0x87, 0x38, 0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

GUI_CONST_STORAGE GUI_BITMAP bmrepeat_off_40_40 = {
  40, // xSize
  40, // ySize
  40, // BytesPerLine
  8, // BitsPerPixel
  _acrepeat_off_40_40,  // Pointer to picture data (indices)
  &_Palrepeat_off_40_40   // Pointer to palette
};

/*************************** End of file ****************************/
