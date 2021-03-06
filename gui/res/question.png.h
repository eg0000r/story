#ifndef QUESTION_PNG_H
#define QUESTION_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char question_png[] =
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
	0x00, 0x07, 0x74, 0x49, 0x4D, 0x45, 0x07, 0xE4, 0x04, 0x15, 
	0x00, 0x2E, 0x2D, 0x9D, 0x9E, 0xA7, 0x00, 0x00, 0x00, 0x01, 
	0xE0, 0x49, 0x44, 0x41, 0x54, 0x48, 0xC7, 0x9D, 0xD5, 0x4F, 
	0x48, 0x54, 0x51, 0x14, 0x06, 0xF0, 0xDF, 0xBC, 0x85, 0xF6, 
	0x67, 0x8C, 0x88, 0x52, 0x22, 0x88, 0xB4, 0x09, 0x12, 0x85, 
	0x5C, 0x44, 0x50, 0xD6, 0xC6, 0xA5, 0x08, 0xD1, 0x42, 0x68, 
	0xD5, 0xAE, 0x4D, 0xB4, 0x6A, 0x5F, 0x0B, 0x21, 0x6C, 0x53, 
	0xAB, 0x42, 0xD4, 0x5D, 0x20, 0x04, 0x6D, 0x5A, 0x94, 0xAB, 
	0x18, 0x83, 0x10, 0xA2, 0x4D, 0x4E, 0xD0, 0x2E, 0x94, 0x71, 
	0x21, 0x4C, 0x51, 0x04, 0x33, 0x86, 0x23, 0x89, 0x2D, 0xA6, 
	0x99, 0xC6, 0xB9, 0xEF, 0x3D, 0x47, 0xCF, 0xD9, 0xBC, 0x7B, 
	0xCF, 0xF7, 0x9D, 0x73, 0xCF, 0xB9, 0xE7, 0x9D, 0x9B, 0x11, 
	0x27, 0x5D, 0xC6, 0x8C, 0xB8, 0xE0, 0x8C, 0xA3, 0xF8, 0x65, 
	0x45, 0x41, 0xDE, 0x1B, 0x65, 0x6D, 0xC8, 0x49, 0x53, 0xD6, 
	0x6D, 0xC7, 0xE8, 0xBA, 0x59, 0xB9, 0x74, 0xF2, 0x41, 0x13, 
	0x2A, 0xB1, 0xE4, 0xBA, 0x6E, 0x7A, 0xA4, 0x33, 0x89, 0x9E, 
	0xF3, 0x39, 0x95, 0x5C, 0xD7, 0x45, 0x3D, 0x71, 0xF4, 0x21, 
	0xA5, 0xB6, 0xE8, 0xDB, 0xB6, 0xAD, 0x1A, 0xAC, 0xD3, 0x32, 
	0x8D, 0xE8, 0x8B, 0xBA, 0x5B, 0x5C, 0x16, 0xBD, 0xF4, 0x05, 
	0x83, 0xC6, 0x9D, 0x6E, 0xB1, 0xAD, 0xBA, 0xA4, 0xD4, 0x9C, 
	0x7B, 0xEB, 0xE1, 0xB7, 0xDC, 0xD7, 0xD1, 0xB0, 0x77, 0x78, 
	0x60, 0x2B, 0x48, 0xA4, 0xA9, 0x16, 0x13, 0xC1, 0x21, 0xEF, 
	0x04, 0x29, 0xDE, 0x0D, 0x30, 0x93, 0xFF, 0x2F, 0xAE, 0xB5, 
	0xF2, 0x6F, 0xC1, 0x11, 0xCF, 0xAC, 0x59, 0xF3, 0x54, 0x17, 
	0xC8, 0xB7, 0xA0, 0xAA, 0xCE, 0xD6, 0x1C, 0x4C, 0x05, 0xBE, 
	0xAF, 0x23, 0x63, 0xBE, 0xB1, 0x7E, 0x0D, 0x6E, 0x04, 0xB8, 
	0x99, 0x5A, 0xD7, 0x85, 0x6D, 0x73, 0x02, 0x03, 0x3B, 0x76, 
	0xFA, 0xD1, 0x1D, 0xE0, 0x2A, 0xB2, 0x91, 0x31, 0x87, 0x82, 
	0x7C, 0xAB, 0xB8, 0xB8, 0x63, 0xE7, 0x14, 0x7E, 0x07, 0xB8, 
	0xC3, 0x46, 0x99, 0x8D, 0xB9, 0xE7, 0x57, 0x6E, 0x5B, 0x69, 
	0x5A, 0x17, 0x1D, 0xC0, 0x70, 0x0C, 0x72, 0x9A, 0x8F, 0xBB, 
	0xB6, 0x4D, 0xD9, 0x65, 0xF0, 0x3C, 0xC6, 0xF6, 0x81, 0xEF, 
	0xBB, 0xD0, 0x17, 0xF4, 0x81, 0x2B, 0xFE, 0xC4, 0x58, 0x4B, 
	0x54, 0x53, 0xE9, 0x73, 0xFF, 0x7A, 0xF5, 0x9C, 0x6F, 0xB1, 
	0xF6, 0x8D, 0x74, 0x07, 0x15, 0xC7, 0xC0, 0x2D, 0x3F, 0x12, 
	0x10, 0x1B, 0xE9, 0x29, 0x2C, 0x80, 0x7B, 0x29, 0x88, 0x52, 
	0x64, 0x39, 0x65, 0x3E, 0xFC, 0x04, 0xC3, 0x29, 0x88, 0xE5, 
	0x48, 0x21, 0xC5, 0x7C, 0xD5, 0x79, 0xFD, 0xAE, 0xA5, 0x20, 
	0x0A, 0xDC, 0x6C, 0x7B, 0x0A, 0xC4, 0xE9, 0x38, 0x59, 0xE5, 
	0x7D, 0xD3, 0x2B, 0xB2, 0x91, 0x8A, 0x17, 0x29, 0x47, 0x5C, 
	0x4A, 0x4D, 0x71, 0x4E, 0x05, 0x72, 0x36, 0x13, 0x22, 0x2C, 
	0x89, 0x44, 0x0A, 0x89, 0x57, 0xD8, 0x4B, 0x84, 0xAF, 0x9E, 
	0xD8, 0x8F, 0x3C, 0xB6, 0x52, 0xFF, 0xEC, 0xB4, 0x98, 0x10, 
	0xA5, 0x90, 0x18, 0xFF, 0x7D, 0xD3, 0xC8, 0x43, 0x8F, 0xD5, 
	0x3D, 0x95, 0xAF, 0x18, 0x8E, 0xF6, 0xC1, 0x3D, 0xB8, 0x28, 
	0x1A, 0x88, 0xCB, 0xE9, 0xB8, 0x77, 0x6D, 0xD1, 0x13, 0x1E, 
	0x96, 0x5A, 0x2D, 0x26, 0x77, 0xF9, 0x3B, 0xAB, 0x1E, 0xEE, 
	0xCC, 0x3D, 0x94, 0x3E, 0x33, 0x09, 0xEF, 0x63, 0xD9, 0xB4, 
	0xDE, 0x56, 0x78, 0x26, 0xD6, 0x49, 0xD6, 0xA8, 0x11, 0x43, 
	0x7A, 0x1B, 0xCF, 0xFB, 0x27, 0x79, 0xF3, 0xD6, 0x43, 0xE8, 
	0x5F, 0x81, 0x55, 0x49, 0xE9, 0xDB, 0x5A, 0x15, 0xD9, 0x00, 
	0x00, 0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 
	0x65, 0x3A, 0x63, 0x72, 0x65, 0x61, 0x74, 0x65, 0x00, 0x32, 
	0x30, 0x32, 0x30, 0x2D, 0x30, 0x34, 0x2D, 0x32, 0x31, 0x54, 
	0x30, 0x30, 0x3A, 0x34, 0x36, 0x3A, 0x34, 0x35, 0x2B, 0x30, 
	0x30, 0x3A, 0x30, 0x30, 0xF4, 0x15, 0x48, 0xDE, 0x00, 0x00, 
	0x00, 0x25, 0x74, 0x45, 0x58, 0x74, 0x64, 0x61, 0x74, 0x65, 
	0x3A, 0x6D, 0x6F, 0x64, 0x69, 0x66, 0x79, 0x00, 0x32, 0x30, 
	0x32, 0x30, 0x2D, 0x30, 0x34, 0x2D, 0x32, 0x31, 0x54, 0x30, 
	0x30, 0x3A, 0x34, 0x36, 0x3A, 0x34, 0x35, 0x2B, 0x30, 0x30, 
	0x3A, 0x30, 0x30, 0x85, 0x48, 0xF0, 0x62, 0x00, 0x00, 0x00, 
	0x19, 0x74, 0x45, 0x58, 0x74, 0x53, 0x6F, 0x66, 0x74, 0x77, 
	0x61, 0x72, 0x65, 0x00, 0x77, 0x77, 0x77, 0x2E, 0x69, 0x6E, 
	0x6B, 0x73, 0x63, 0x61, 0x70, 0x65, 0x2E, 0x6F, 0x72, 0x67, 
	0x9B, 0xEE, 0x3C, 0x1A, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 
	0x4E, 0x44, 0xAE, 0x42, 0x60, 0x82, 
};

wxBitmap& question_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( question_png, sizeof( question_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //QUESTION_PNG_H
