#ifndef HAMMER_PNG_H
#define HAMMER_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char hammer_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x20, 
	0x00, 0x00, 0x00, 0x20, 0x08, 0x04, 0x00, 0x00, 0x00, 0xD9, 
	0x73, 0xB2, 0x7F, 0x00, 0x00, 0x00, 0x04, 0x67, 0x41, 0x4D, 
	0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 0x61, 0x05, 0x00, 
	0x00, 0x00, 0x20, 0x63, 0x48, 0x52, 0x4D, 0x00, 0x00, 0x7A, 
	0x26, 0x00, 0x00, 0x80, 0x84, 0x00, 0x00, 0xFA, 0x00, 0x00, 
	0x00, 0x80, 0xE8, 0x00, 0x00, 0x75, 0x30, 0x00, 0x00, 0xEA, 
	0x60, 0x00, 0x00, 0x3A, 0x98, 0x00, 0x00, 0x17, 0x70, 0x9C, 
	0xBA, 0x51, 0x3C, 0x00, 0x00, 0x00, 0x02, 0x62, 0x4B, 0x47, 
	0x44, 0x00, 0x00, 0xAA, 0x8D, 0x23, 0x32, 0x00, 0x00, 0x00, 
	0x09, 0x70, 0x48, 0x59, 0x73, 0x00, 0x00, 0x0E, 0xC4, 0x00, 
	0x00, 0x0E, 0xC4, 0x01, 0x95, 0x2B, 0x0E, 0x1B, 0x00, 0x00, 
	0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 0x07, 0xE4, 0x04, 0x14, 
	0x0F, 0x00, 0x2F, 0xCB, 0x77, 0xEF, 0x58, 0x00, 0x00, 0x01, 
	0xC6, 0x49, 0x44, 0x41, 0x54, 0x48, 0xC7, 0xA5, 0xD5, 0xCD, 
	0x4B, 0x54, 0x51, 0x18, 0xC7, 0xF1, 0xCF, 0xCC, 0x58, 0xE3, 
	0x68, 0x25, 0x22, 0x21, 0xF4, 0x42, 0x20, 0x22, 0xEE, 0x0D, 
	0xA5, 0x08, 0xA4, 0x30, 0x22, 0x88, 0xF6, 0xB5, 0x6B, 0xD5, 
	0xCB, 0x5A, 0x74, 0xD5, 0x46, 0x28, 0x37, 0x2D, 0xDA, 0x68, 
	0x2D, 0x24, 0x84, 0x36, 0x41, 0x8B, 0xE8, 0x1F, 0x08, 0xDA, 
	0xBA, 0x28, 0x88, 0x24, 0x32, 0x50, 0xDB, 0x54, 0x4C, 0x86, 
	0x93, 0x6F, 0x8D, 0x8E, 0x79, 0x5B, 0x64, 0x36, 0x2F, 0x77, 
	0x66, 0xCE, 0xE0, 0xEF, 0xEE, 0xCE, 0xB9, 0xDF, 0x2F, 0xCF, 
	0x79, 0xCE, 0x73, 0xB9, 0x09, 0xD5, 0x92, 0xD1, 0xA5, 0x47, 
	0x87, 0xC8, 0x92, 0x39, 0x0B, 0xF2, 0x1A, 0x48, 0x93, 0x73, 
	0xA6, 0x7C, 0x94, 0xB3, 0x6E, 0xDD, 0xB2, 0x0F, 0x1E, 0x3B, 
	0xA3, 0x29, 0x14, 0xCF, 0xB8, 0xE3, 0xB3, 0xA8, 0xEC, 0x59, 
	0x70, 0x5B, 0x26, 0x04, 0x4F, 0xB8, 0xE9, 0x67, 0x05, 0x1E, 
	0x89, 0x2C, 0x1B, 0xA9, 0x54, 0xA4, 0x62, 0x04, 0xDD, 0x92, 
	0xE6, 0xAD, 0x48, 0xCB, 0x48, 0x14, 0xED, 0x34, 0xEB, 0xB7, 
	0xE5, 0x8D, 0xED, 0x7A, 0x35, 0x24, 0xA5, 0xB5, 0xEA, 0x34, 
	0x68, 0xCA, 0x5A, 0x59, 0x15, 0xB9, 0xB8, 0x2A, 0xAA, 0xE7, 
	0x88, 0x49, 0x3B, 0xB5, 0x15, 0xA9, 0x9A, 0x82, 0x4D, 0xAB, 
	0xAE, 0x6A, 0x29, 0x59, 0x6B, 0xD6, 0xAF, 0xE0, 0xAD, 0x42, 
	0x58, 0x0D, 0x3D, 0xE6, 0x63, 0xDA, 0x99, 0x33, 0xEC, 0x40, 
	0x98, 0x60, 0xC0, 0xB7, 0xD8, 0x1B, 0x99, 0x73, 0xD6, 0xC1, 
	0xFA, 0x78, 0xCA, 0x5D, 0xDB, 0xB1, 0x82, 0x82, 0x4F, 0x86, 
	0xCB, 0x0E, 0x17, 0x93, 0x5E, 0xEF, 0x63, 0xF1, 0xFF, 0xED, 
	0x6C, 0xAD, 0xDE, 0xC4, 0xA4, 0x6E, 0x79, 0x6D, 0xFA, 0xAA, 
	0x9E, 0xB6, 0xD9, 0x69, 0x2D, 0xD5, 0x04, 0x09, 0x43, 0x1E, 
	0xE9, 0x30, 0x61, 0xA7, 0x48, 0x11, 0x95, 0x0C, 0x16, 0x19, 
	0x27, 0xAA, 0xE1, 0x17, 0xCD, 0x8A, 0x6C, 0x18, 0x77, 0xD2, 
	0xB8, 0x0D, 0x91, 0xAC, 0x67, 0x9E, 0x2B, 0x94, 0x1C, 0x62, 
	0xD1, 0xF5, 0x5A, 0x78, 0xB4, 0xA7, 0xB8, 0xE7, 0x85, 0xCB, 
	0x32, 0x2E, 0xC9, 0x16, 0xE1, 0x4B, 0x6E, 0xC4, 0xCD, 0x51, 
	0x31, 0xFE, 0x57, 0x31, 0xA6, 0x5D, 0xDB, 0x6E, 0xC9, 0x23, 
	0x72, 0xBB, 0xEB, 0xAB, 0x46, 0xA5, 0xEB, 0xE3, 0x91, 0xBC, 
	0xB1, 0xA2, 0x1B, 0xFF, 0xA7, 0xD8, 0xF4, 0xC0, 0xE1, 0x10, 
	0x7C, 0xCB, 0x84, 0xF6, 0xB2, 0xC6, 0x8D, 0xCA, 0x9A, 0x76, 
	0x34, 0x04, 0xFF, 0xED, 0xA9, 0xCE, 0x8A, 0xF7, 0x5A, 0x9D, 
	0x77, 0x3C, 0x04, 0xDF, 0xF1, 0xD2, 0x29, 0x81, 0xA9, 0xC4, 
	0x23, 0xAF, 0xF4, 0xEE, 0x07, 0x9F, 0xD1, 0xB7, 0x1F, 0x7C, 
	0xD6, 0x60, 0x38, 0x3E, 0x54, 0x81, 0xCF, 0xBB, 0x12, 0x8A, 
	0x73, 0xC1, 0xBB, 0x32, 0xFC, 0x8B, 0x6B, 0x92, 0xE1, 0x82, 
	0xD7, 0x65, 0xF8, 0x0F, 0xB7, 0xC2, 0x7F, 0x21, 0x90, 0x2F, 
	0xC1, 0x57, 0xE2, 0x07, 0xB4, 0x56, 0x72, 0x45, 0xF8, 0x2F, 
	0xF7, 0x1D, 0x6A, 0x0C, 0x67, 0x7A, 0xEF, 0x13, 0xAD, 0x1C, 
	0xDB, 0xA0, 0x74, 0x79, 0xE2, 0xBB, 0x0D, 0x5F, 0x3D, 0x8C, 
	0x19, 0xDB, 0xBA, 0x49, 0xA0, 0xDD, 0x80, 0x63, 0x16, 0xCD, 
	0x58, 0x6B, 0x5C, 0xF0, 0x07, 0xAB, 0x18, 0x27, 0x0A, 0x53, 
	0xB3, 0xEB, 0xE5, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 
	0x74, 0x64, 0x61, 0x74, 0x65, 0x3A, 0x63, 0x72, 0x65, 0x61, 
	0x74, 0x65, 0x00, 0x32, 0x30, 0x32, 0x30, 0x2D, 0x30, 0x34, 
	0x2D, 0x32, 0x30, 0x54, 0x31, 0x35, 0x3A, 0x30, 0x30, 0x3A, 
	0x34, 0x37, 0x2B, 0x30, 0x33, 0x3A, 0x30, 0x30, 0xE2, 0xB0, 
	0x36, 0x28, 0x00, 0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 
	0x64, 0x61, 0x74, 0x65, 0x3A, 0x6D, 0x6F, 0x64, 0x69, 0x66, 
	0x79, 0x00, 0x32, 0x30, 0x32, 0x30, 0x2D, 0x30, 0x34, 0x2D, 
	0x32, 0x30, 0x54, 0x31, 0x35, 0x3A, 0x30, 0x30, 0x3A, 0x34, 
	0x37, 0x2B, 0x30, 0x33, 0x3A, 0x30, 0x30, 0x93, 0xED, 0x8E, 
	0x94, 0x00, 0x00, 0x00, 0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 
	0x6F, 0x66, 0x74, 0x77, 0x61, 0x72, 0x65, 0x00, 0x77, 0x77, 
	0x77, 0x2E, 0x69, 0x6E, 0x6B, 0x73, 0x63, 0x61, 0x70, 0x65, 
	0x2E, 0x6F, 0x72, 0x67, 0x9B, 0xEE, 0x3C, 0x1A, 0x00, 0x00, 
	0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& hammer_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( hammer_png, sizeof( hammer_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //HAMMER_PNG_H
