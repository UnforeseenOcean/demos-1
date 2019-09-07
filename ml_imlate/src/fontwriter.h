﻿#include "sys/msys.h"
#include "intro.h"

size_t font_len = 1724;
unsigned char font[1724]=
{
	0x89,0x50,0x4E,0x47,0x0D,0x0A,0x1A,0x0A,0x00,0x00,0x00,
	0x0D,0x49,0x48,0x44,0x52,0x00,0x00,0x00,0x80,0x00,0x00,
	0x00,0x60,0x08,0x06,0x00,0x00,0x00,0xD5,0x7A,0x7A,0x49,
	0x00,0x00,0x00,0x04,0x67,0x41,0x4D,0x41,0x00,0x00,0xB1,
	0x8F,0x0B,0xFC,0x61,0x05,0x00,0x00,0x00,0x09,0x70,0x48,
	0x59,0x73,0x00,0x00,0x0E,0xBF,0x00,0x00,0x0E,0xBF,0x01,
	0x38,0x05,0x53,0x24,0x00,0x00,0x00,0x18,0x74,0x45,0x58,
	0x74,0x53,0x6F,0x66,0x74,0x77,0x61,0x72,0x65,0x00,0x70,
	0x61,0x69,0x6E,0x74,0x2E,0x6E,0x65,0x74,0x20,0x34,0x2E,
	0x30,0x2E,0x35,0x65,0x85,0x32,0x65,0x00,0x00,0x06,0x3A,
	0x49,0x44,0x41,0x54,0x78,0x5E,0xED,0x94,0xC1,0x72,0xE3,
	0x36,0x10,0x05,0xF7,0xFF,0x7F,0x38,0xB9,0x39,0x06,0xA3,
	0x51,0xB5,0xC6,0x0D,0x72,0x00,0xD1,0x6B,0xC9,0x44,0x57,
	0x75,0xA2,0x7D,0x3D,0x60,0x2E,0x5B,0xF9,0xF3,0xF1,0xF1,
	0xB1,0xBC,0xB0,0x3A,0x2E,0xAF,0xA3,0x8E,0x13,0x12,0xEB,
	0xAF,0x22,0xB1,0x7E,0x86,0x7B,0xD8,0xFD,0x19,0x12,0xEB,
	0x5D,0x75,0x9C,0x90,0x58,0x7F,0x15,0x89,0xF5,0x33,0x24,
	0xD6,0xBF,0x43,0x62,0xBD,0xAB,0x8E,0x9F,0x56,0x18,0xBD,
	0x27,0x7C,0x3B,0xF3,0xBE,0xF1,0x4A,0xEF,0x29,0xB1,0xDE,
	0x73,0x94,0x67,0xDE,0x36,0xB6,0xB7,0xFC,0x48,0x45,0x52,
	0xD9,0xB3,0xA4,0xB2,0x67,0x49,0x65,0xCF,0x92,0xCA,0x9E,
	0x25,0xD6,0x9B,0xC4,0x7A,0x4F,0x62,0xBD,0x49,0x2A,0x7B,
	0x96,0x6C,0x5B,0x3E,0x38,0x92,0x54,0xF6,0x2C,0xA9,0xEC,
	0x59,0x52,0xD9,0xB3,0xA4,0xB2,0x67,0x89,0xF5,0x26,0xB1,
	0xDE,0x93,0x58,0x6F,0x92,0xCA,0x9E,0x25,0xDB,0xD6,0x8B,
	0x15,0x7A,0x6F,0xB9,0x67,0x49,0x65,0xAF,0x4A,0xAC,0x87,
	0xA4,0xB2,0x67,0x89,0xF5,0x26,0xB1,0xDE,0x93,0x58,0x6F,
	0x92,0xCA,0x9E,0x25,0xDB,0x66,0x91,0x5B,0x96,0x54,0xF6,
	0x2C,0xA9,0xEC,0x55,0x89,0xF5,0x90,0xF4,0xF6,0x2A,0x7C,
	0x5F,0xF9,0x8E,0xDD,0x53,0x62,0xBD,0x49,0x2A,0x7B,0x96,
	0x6C,0x9B,0x45,0x6E,0x59,0x52,0xD9,0xB3,0xA4,0xB2,0x67,
	0x49,0x65,0xCF,0x92,0xCA,0x3E,0x23,0xB1,0xDE,0x93,0x58,
	0x6F,0x92,0xCA,0x9E,0x25,0xDB,0x66,0x91,0x5B,0x96,0x54,
	0xF6,0x2C,0xA9,0xEC,0x59,0x52,0xD9,0xB3,0xA4,0xB2,0xCF,
	0x48,0xAC,0xF7,0x24,0xD6,0x9B,0xA4,0xB2,0x67,0xC9,0xB6,
	0xF5,0x62,0x85,0xB3,0xDE,0xCE,0xBC,0x6F,0xFC,0xD4,0x7B,
	0xBE,0x33,0x89,0xF5,0x9E,0xA3,0xF4,0xDE,0x72,0xCF,0x92,
	0x6D,0xCB,0x07,0xCB,0xD7,0x96,0x58,0x1F,0x56,0xC7,0xE5,
	0xCB,0x4A,0xAC,0x0F,0xAB,0xE3,0xF2,0x25,0x3C,0xC2,0xDE,
	0x0C,0xAB,0xE3,0xF2,0x3A,0xEA,0xB8,0xBC,0x8E,0x3A,0xDE,
	0x24,0xD6,0xAB,0x12,0xEB,0xCB,0x1F,0x54,0xC7,0x9B,0xC4,
	0x7A,0x55,0x62,0xBD,0x49,0xAC,0x8F,0x9A,0xB1,0x9B,0xE5,
	0xA7,0x3A,0xFE,0x80,0xC4,0xFA,0x8C,0xC4,0xFA,0xF2,0x53,
	0x1D,0x3F,0xCD,0xD8,0x4D,0xC5,0x8C,0xDD,0x34,0xC9,0x48,
	0xDB,0x93,0x58,0x0F,0x9F,0x61,0xE6,0x1B,0xFC,0x6F,0xCF,
	0xBC,0x0F,0x9E,0x79,0x7F,0x7F,0xCB,0x8F,0x64,0x89,0xF5,
	0xAA,0xC4,0x7A,0x93,0x8C,0xB4,0x3D,0x89,0xF5,0x90,0xCC,
	0xEE,0x84,0xB7,0x67,0xF5,0x90,0x54,0x76,0x4A,0xEE,0x3B,
	0x0F,0xB2,0xC4,0x7A,0x55,0x62,0xBD,0x49,0x46,0xDA,0x9E,
	0xC4,0x7A,0x48,0x66,0x77,0xC2,0xDB,0xB3,0x7A,0x48,0x2A,
	0x3B,0x25,0xF7,0x9D,0x07,0x59,0x62,0xBD,0x2A,0xB1,0xDE,
	0x9C,0xC1,0xBE,0x43,0x89,0xF5,0x90,0xCC,0xEE,0x84,0xB7,
	0x67,0xF5,0x90,0x54,0x76,0x4A,0xEE,0x3B,0x0F,0xB2,0xC4,
	0x7A,0x55,0x62,0xBD,0x49,0xAC,0x87,0xC4,0x3A,0x25,0xD6,
	0x43,0x32,0xBB,0x13,0xDE,0x9E,0xD5,0x43,0x52,0xD9,0x29,
	0xB9,0xEF,0x3C,0xC8,0x12,0xEB,0x55,0x89,0xF5,0x26,0xB1,
	0x1E,0x12,0xEB,0x94,0x58,0x0F,0xC9,0xEC,0x4E,0x78,0x7B,
	0x56,0x0F,0x49,0x65,0xA7,0xE4,0xBE,0xF3,0x20,0x4B,0xAC,
	0x57,0x25,0xD6,0x9B,0xC4,0x7A,0x48,0xAC,0x53,0x62,0x3D,
	0x24,0xB3,0x3B,0xE1,0xED,0x59,0x3D,0x24,0x95,0x9D,0x92,
	0xFB,0xCE,0x83,0x2C,0xB1,0x5E,0x95,0x58,0x6F,0x12,0xEB,
	0x21,0xB1,0x4E,0x89,0xF5,0x90,0xCC,0xEE,0x84,0xB7,0x33,
	0xBD,0xCA,0x33,0xEF,0xEF,0x6F,0xF9,0x91,0x67,0x25,0x95,
	0x7D,0x79,0x9E,0xC4,0x7A,0x57,0x1D,0x27,0x25,0x95,0x7D,
	0x79,0x9E,0xC4,0x7A,0x57,0x1D,0x27,0xAD,0x60,0xEF,0x96,
	0xCF,0x4B,0xAC,0x77,0xD5,0x71,0x79,0x1D,0x75,0x5C,0x5E,
	0x47,0x1D,0x97,0xD7,0x51,0xC7,0x37,0x97,0x58,0x5F,0x42,
	0x1D,0xDF,0x5C,0x62,0x7D,0x09,0xE3,0xC7,0x0C,0xFC,0xD0,
	0x08,0x7C,0x97,0x3D,0xC2,0xDE,0xD0,0x0A,0x47,0xEF,0xAC,
	0x87,0xA4,0xB2,0x53,0xF2,0x37,0xF7,0xDD,0xBE,0x1B,0x45,
	0x52,0xD9,0xAB,0xBD,0x49,0xAC,0x57,0x25,0xD6,0x4D,0x62,
	0x3D,0x24,0x95,0x9D,0x92,0xEF,0xD8,0xF7,0x1A,0xE1,0xBE,
	0xFE,0x02,0xDC,0x24,0xD6,0x43,0x52,0xD9,0x29,0xF9,0x8E,
	0xBD,0xD7,0x49,0xBE,0xFD,0xFF,0x2F,0xC0,0xBF,0x9F,0xFF,
	0xF8,0xE7,0xD3,0xF6,0xEF,0x4F,0xBE,0x1C,0x85,0x3B,0x77,
	0x84,0x7B,0xB5,0x87,0x23,0xD8,0xFB,0x26,0xB1,0x6E,0x12,
	0xEB,0x21,0xA9,0xEC,0x94,0x7C,0xC7,0x4E,0x0D,0xBB,0xFB,
	0x6B,0xFF,0x07,0x38,0xD3,0xC0,0x5A,0x93,0x58,0x37,0x89,
	0xF5,0x90,0x54,0x76,0x4A,0xBE,0x63,0xA7,0x86,0xDD,0xBD,
	0xCC,0x5F,0x00,0x62,0x9D,0x92,0xD1,0x4E,0x2A,0x7B,0x96,
	0x54,0x76,0x4A,0xBE,0x63,0xB7,0x9E,0xF9,0x72,0x1F,0x3F,
	0xC8,0xC3,0x41,0x92,0x54,0xF6,0xAA,0xC4,0x3A,0x25,0xA3,
	0x9D,0x54,0xF6,0x2C,0xA9,0xEC,0xD6,0x1B,0xBD,0x76,0x74,
	0x9F,0x89,0x7D,0xAF,0x67,0x1E,0xDE,0xC4,0x8F,0x19,0xF8,
	0x21,0xC2,0x7D,0xC4,0x51,0xEC,0x1B,0xCD,0x0A,0x33,0x6F,
	0x32,0xCF,0xBC,0x7F,0xE6,0x2D,0xD9,0xFB,0x4E,0xA9,0xF1,
	0xA8,0x22,0xB1,0xBE,0x7C,0x33,0x75,0xDC,0x91,0x58,0x5F,
	0xBE,0x99,0x3A,0x2E,0xAF,0xA3,0x8E,0xCB,0xEB,0xA8,0xE3,
	0xF2,0x3A,0xEA,0xF8,0x22,0x12,0xEB,0x26,0xA9,0xEC,0x59,
	0x52,0xD9,0xDF,0x5E,0x1D,0x5F,0x44,0x62,0xDD,0x24,0x95,
	0x3D,0x4B,0x2A,0xFB,0xDB,0xAB,0xE3,0xF2,0x3A,0xC6,0x0F,
	0xF2,0x70,0x00,0xC9,0x5E,0xAB,0xF2,0x9B,0xDE,0x8F,0x7E,
	0x23,0xBF,0xCD,0x66,0xEC,0xA6,0x67,0x95,0xED,0xDE,0x1E,
	0xC5,0x96,0x25,0x23,0x8D,0x92,0xDE,0xDE,0x60,0xA3,0xA4,
	0xB7,0x37,0xD8,0x28,0xE9,0xED,0x0D,0xB6,0xCA,0x0D,0xE1,
	0x9E,0x25,0xD6,0x29,0xB1,0x3E,0x6A,0x66,0xDB,0x2D,0xC6,
	0x96,0x25,0x23,0x2D,0xF7,0xC6,0x5E,0xCF,0x8D,0x92,0xCA,
	0x9E,0x25,0x95,0x3D,0x4B,0x2A,0x7B,0x96,0x58,0xA7,0xC4,
	0xFA,0xA8,0x99,0x6D,0xB7,0x18,0x5B,0x96,0x58,0x37,0x33,
	0x76,0xD3,0x24,0xD6,0x43,0x52,0xD9,0xB3,0xA4,0xB2,0x67,
	0x49,0x65,0xCF,0x12,0xEB,0x94,0x58,0xA7,0x33,0x6C,0x6F,
	0xED,0x03,0xB1,0x65,0x89,0xF5,0x6C,0x60,0x2D,0x4B,0xAC,
	0x87,0xA4,0xB2,0x67,0x49,0x65,0xCF,0x92,0xCA,0x9E,0x25,
	0xD6,0x29,0xB1,0x4E,0x33,0x76,0xA3,0xC6,0x0F,0xF2,0x70,
	0x00,0x89,0xF5,0x90,0x54,0x1B,0xE1,0x9E,0x25,0x95,0x3D,
	0x4B,0x2A,0x7B,0x96,0x54,0xF6,0x2C,0xB1,0x4E,0x89,0x75,
	0x4A,0xAC,0x77,0x8D,0x1F,0x99,0x87,0xA3,0x9B,0x64,0xAF,
	0x35,0x72,0x0F,0x49,0x65,0xCF,0x92,0xCA,0x9E,0x25,0x95,
	0x3D,0x4B,0x2A,0x7B,0x96,0x58,0xA7,0xC4,0x3A,0x25,0xD6,
	0xBB,0xC6,0x8F,0x51,0x1E,0x3E,0xD2,0x86,0x09,0x9E,0xFD,
	0xC6,0x4F,0xBE,0xCF,0x6F,0xCF,0x78,0x9F,0x25,0xD6,0xE9,
	0x0C,0xDB,0xDB,0xFC,0xA1,0x3D,0x89,0xF5,0xE5,0x1B,0xAA,
	0xA3,0x98,0xB1,0x9B,0xE5,0x1B,0xAA,0xE3,0xA7,0x47,0xD8,
	0x9B,0xE5,0x1B,0xAA,0xE3,0xF2,0x3A,0xEA,0xB8,0xBC,0x8E,
	0x3A,0x2E,0xAF,0xA3,0x8E,0xCB,0xEB,0xA8,0xE3,0xF2,0x3A,
	0xC6,0x8F,0x19,0x1E,0x3E,0xD4,0x06,0x90,0x5B,0x48,0xF6,
	0x9A,0x91,0xEF,0x69,0x05,0x7B,0x17,0x8E,0xF2,0xEC,0xFB,
	0xC6,0x99,0xEF,0xA7,0xD5,0xB1,0x63,0x66,0xAF,0xE7,0x16,
	0x92,0x91,0x76,0x24,0xB1,0x7E,0x86,0x64,0xAF,0x35,0x72,
	0x3F,0xBA,0xC9,0xB0,0x8D,0xDC,0x64,0x03,0x6B,0x9B,0x3A,
	0x76,0xCC,0x8C,0xF6,0x7C,0x33,0xD2,0x8E,0x24,0xD6,0xCF,
	0x90,0xEC,0xB5,0x46,0xEE,0x47,0x37,0x84,0x7B,0x96,0x58,
	0xCF,0x06,0xD6,0x36,0x6D,0xAC,0x32,0xFB,0x2E,0xC8,0xEF,
	0x47,0xBF,0x31,0xFB,0x2E,0xE0,0xFB,0x8A,0x64,0xAF,0x55,
	0xE9,0xBD,0xE7,0x9E,0x25,0xD6,0xC3,0x1E,0x5F,0x6E,0xBF,
	0x0C,0x07,0x12,0xEB,0x47,0x12,0xEB,0x7B,0x66,0x7A,0x8D,
	0x7B,0x96,0x58,0xA7,0x3D,0x8E,0x6E,0xAD,0x87,0xA4,0xB7,
	0x57,0xE1,0xFB,0x6C,0x8F,0x2F,0xB7,0x5F,0x86,0x03,0x89,
	0xF5,0x23,0x89,0xF5,0x23,0x49,0x65,0xCF,0x12,0xEB,0x21,
	0xB1,0x9E,0x25,0xD6,0x43,0x62,0xFD,0x48,0x62,0x3D,0x1B,
	0x58,0xDB,0xD4,0x71,0x47,0x62,0xFD,0x48,0x62,0x7D,0xCF,
	0x4C,0xAF,0x71,0xCF,0x12,0xEB,0x21,0xB1,0x9E,0x25,0xD6,
	0x43,0x62,0xFD,0x48,0x62,0x3D,0x1B,0x58,0xDB,0xE4,0x1F,
	0x46,0xE0,0xBB,0x11,0xC9,0x5E,0xAB,0xF0,0xCC,0xDB,0x06,
	0xDF,0x67,0x89,0x75,0x73,0x14,0xFB,0x46,0x78,0x84,0xBD,
	0x99,0x52,0xC7,0xE5,0x75,0xD4,0x71,0x79,0x1D,0x75,0x5C,
	0x5E,0x47,0x1D,0x97,0xD7,0x51,0xC7,0xE5,0x75,0xD4,0x71,
	0x79,0x1D,0x75,0x5C,0x5E,0x47,0x1D,0x6F,0x12,0xEB,0x7B,
	0x06,0xF9,0xF7,0x3B,0x9B,0xB1,0x1B,0x6A,0xD8,0x5D,0x4F,
	0xC3,0xEE,0x9E,0x52,0xC7,0x9B,0xC4,0xFA,0x9E,0x41,0xFE,
	0xFD,0xAE,0x1A,0x76,0x17,0x12,0xEB,0xA3,0x12,0xEB,0xD3,
	0xEA,0x78,0x93,0x58,0xDF,0x33,0xC8,0xBF,0xDF,0x51,0xC3,
	0xEE,0x28,0xB1,0x3E,0x2A,0xB1,0x3E,0xAD,0x8E,0x37,0x89,
	0xF5,0x2B,0x68,0xD8,0x5D,0x96,0x58,0x1F,0x95,0x58,0x9F,
	0x56,0xC7,0x9B,0xC4,0xFA,0x6F,0xD7,0xB0,0x3B,0x93,0x58,
	0x1F,0x95,0x58,0xA7,0x47,0x3C,0xDC,0x3F,0xFC,0x21,0x49,
	0xAC,0xFF,0x76,0x89,0xF5,0x3D,0x89,0xF5,0x51,0x89,0x75,
	0x7A,0xC4,0xC3,0xFD,0xC3,0x1F,0x92,0xC4,0xFA,0x6F,0x37,
	0xB0,0x76,0x24,0xB1,0x3E,0x2A,0xB1,0x3E,0xAD,0x8E,0x37,
	0x89,0xF5,0xDF,0x2A,0xB1,0x5E,0x91,0x58,0x1F,0x95,0x58,
	0x9F,0x56,0xC7,0x8B,0x6A,0xD8,0x5D,0x45,0x62,0x7D,0x54,
	0x62,0x7D,0x5A,0x1D,0x6F,0x12,0xEB,0xAF,0x6C,0x60,0xAD,
	0x67,0xC6,0x6E,0xAA,0xF6,0xB0,0xDB,0x9E,0x3D,0xEC,0x76,
	0x5A,0x1D,0x6F,0x12,0xEB,0xAF,0x6C,0x60,0x6D,0x09,0x75,
	0x5C,0x5E,0x47,0x1D,0x97,0x57,0xF1,0xE3,0xCF,0x7F,0x08,
	0x22,0xD6,0x56,0x18,0xC4,0x33,0x7E,0x00,0x00,0x00,0x00,
	0x49,0x45,0x4E,0x44,0xAE,0x42,0x60,0x82,
};


typedef struct
{
	int texwidth, texheight;
	int font_size;
	int letter;
	int numrows;
	int numcolumns;
	int numletters;
	GLuint texture;
	shader_id program;
	GLuint font_vbo, vao;
	float rcol, gcol, bcol, acol;
}font_t;


void init_font(font_t * fon)
{
	float	cx;											// Holds Our X Character Coord
	float	cy;											// Holds Our Y Character Coord
	int width, height, comp;
	unsigned char *data = LoadImageMemory(font, font_len, &width, &height);
	GLuint fonttexture;
	glGenTextures(1, &fon->texture);
	glBindTexture(GL_TEXTURE_2D, fon->texture);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, fon->texwidth, fon->texheight, 0,
		GL_RGBA, GL_UNSIGNED_BYTE, data);
	glBindTexture(GL_TEXTURE_2D, 0);


	const char vertex_source[] =
		"#version 430\n"
		"layout(location = 0) in vec4 v_coord;\n"
		"layout(location = 1)in vec2 v_texcoord;\n"
		"out gl_PerVertex"
		"{"
		"	vec4 gl_Position;"
		"};"
		"out vec2 ftexcoord;\n"
		"layout(location = 2)uniform mat4 mvp;\n"
		"void main() {\n"
		"   ftexcoord = v_texcoord;\n"
		"   gl_Position = mvp * v_coord;\n"
		"}\n";

	const char  fragment_source[] =
		"#version 430\n"
		"in vec2 ftexcoord;\n"
		"layout(location = 0) out vec4 FragColor;\n"
		"layout(location = 1) uniform sampler2D mytexture;\n"
		"layout(location = 2) uniform vec4  color;\n"
		"void main()"
		"{"
		"vec2 coords=ftexcoord;\n"
		"FragColor=texture2D(mytexture,coords)*color;"
		"}";

	glGenVertexArrays(1, &fon->vao);
	glBindVertexArray(fon->vao);
	glGenBuffers(1, &fon->font_vbo);
	glBindVertexArray(0);

	fon->program = initShader(vertex_source, (const char*)fragment_source);
}


void draw_font(font_t* fon, int x, int y)
{
	glBindProgramPipeline(fon->program.pid);
	gbMat4 projection;
	gbMat4 m_transform;
	gbMat4 model;
	gbMat4 mvp;
	gb_mat4_ortho2d(&projection, 0.0, (float)asset_xr, (float)asset_yr, 0.0);
	gb_mat4_translate(&m_transform, gb_vec3((float)x, (float)y, 0.0));
	gb_mat4_scale(&model, gb_vec3(2.0, 2.0, 2.0));
	gb_mat4_mul(&mvp, &m_transform, &model);
	gb_mat4_mul(&mvp, &projection, &mvp);
	glProgramUniformMatrix4fv(fon->program.vsid, 2, 1, GL_FALSE, (float*)gb_float44_m(&mvp));
	glActiveTexture(GL_TEXTURE0);
	glBindTexture(GL_TEXTURE_2D, fon->texture);
	glProgramUniform1i(fon->program.fsid, 1,0);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	float fontcol[4] = { fon->rcol / 255.0, fon->gcol / 255.0, fon->bcol / 255.0, fon->acol / 255.0 };
	glProgramUniform4fv(fon->program.fsid,2,1,fontcol);
	
	float m_nCurrentRow = fon->numrows - 1;
	float m_nCurrentColumn = 0;

	for (int frame = 0; frame != fon->letter; frame++)
	{
		++m_nCurrentColumn;
		if (m_nCurrentColumn >= fon->numcolumns)
		{
			m_nCurrentColumn = 0;
			--m_nCurrentRow;
		}

	}


	float m_nFrameWidth = fon->font_size;
	float m_nFrameHeight = fon->font_size;

	float m_nTextureWidth = fon->texwidth;
	float m_nTextureHeight = fon->texheight;
	float fSubRange_s = (1.0f / m_nTextureWidth) *
		(m_nFrameWidth  * fon->numcolumns);

	float fSubRange_t = (1.0f / m_nTextureHeight) *
		(m_nFrameHeight * fon->numrows);



	float fFrame_s = fSubRange_s / fon->numcolumns;
	float fFrame_t = fSubRange_t / fon->numrows;
	float fLowerLeft_s = m_nCurrentColumn * fFrame_s;
	float fLowerLeft_t = 1.0f - (m_nCurrentRow * fFrame_t) - fFrame_t;

	float fLowerRight_s = (m_nCurrentColumn * fFrame_s) + fFrame_s;
	float fLowerRight_t = 1.0f - (m_nCurrentRow * fFrame_t) - fFrame_t;

	float fUpperRight_s = (m_nCurrentColumn * fFrame_s) + fFrame_s;
	float fUpperRight_t = 1.0f - (m_nCurrentRow * fFrame_t);

	float fUpperLeft_s = m_nCurrentColumn * fFrame_s;
	float fUpperLeft_t = 1.0f - (m_nCurrentRow * fFrame_t);

	float fRelativeX = (fon->font_size / 2.0f);
	float fRelativeY = (fon->font_size / 2.0f);

	typedef struct
	{
		float	x;
		float   y;
		float   s;
		float   t;
	} font_data;
	font_data font_coords[] = {
		-fRelativeX, -fRelativeY, fLowerLeft_s, fLowerLeft_t,
		fRelativeX, -fRelativeY, fLowerRight_s, fLowerRight_t,
		fRelativeX, fRelativeY, fUpperRight_s, fUpperRight_t,
		-fRelativeX, fRelativeY, fUpperLeft_s, fUpperLeft_t,
	}; // 6 vertices with 5 components (floats) each


	glBindVertexArray(fon->vao);

	glEnableVertexAttribArray(0);
	glEnableVertexAttribArray(1);

	glBindBuffer(GL_ARRAY_BUFFER, fon->font_vbo);
	glBufferData(GL_ARRAY_BUFFER, sizeof(font_data)*4, font_coords, GL_STATIC_DRAW);
	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(font_data), (void*)offsetof(font_data, x));
	glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, sizeof(font_data), (void*)offsetof(font_data, s));

	glDrawArrays(GL_TRIANGLE_FAN, 0, 4);
	glDisableVertexAttribArray(0);
	glDisableVertexAttribArray(1);
	glBindVertexArray(0);
	glBindBuffer(GL_ARRAY_BUFFER,0);
	glDisable(GL_BLEND);
	glBindProgramPipeline(0);
}



font_t textwriter;
font_t textwriter_bw;



void init_fonts()
{
	textwriter.texheight = 96;
	textwriter.texwidth = 128;
	textwriter.font_size = 16;
	textwriter.numletters = 64;
	textwriter.numcolumns = 8;
	textwriter.numrows = 6;
	textwriter.rcol = 1. / 1.0 * 255;
	textwriter.gcol = 1. / 1.0 * 255;
	textwriter.bcol = 1. / 1.0 * 255;
	textwriter.acol = 255;
	init_font(&textwriter);

	textwriter_bw.texheight = 96;
	textwriter_bw.texwidth = 128;
	textwriter_bw.font_size = 16;
	textwriter_bw.numletters = 64;
	textwriter_bw.numcolumns = 8;
	textwriter_bw.numrows = 6;
	textwriter_bw.rcol = 0. / 1.0 * 255;
	textwriter_bw.gcol = 0. / 1.0 * 255;
	textwriter_bw.bcol = 0. / 1.0 * 255;
	textwriter_bw.acol = 255;
	init_font(&textwriter_bw);

}



//Customize according to each prod/typeface as needed
int gettablepos(char c)
{
	int pos;
	if (c >= 'A' && c <= 'Z')
		pos = c - 'A';
	//space
	if (c == 0x20)pos = 49;

	if (c >= '0' && c <= '9')
	{
		pos = c - '0';
		pos += 29;
	}
	//space
	if (c == ' ')pos = 42;
	//.
	if (c == '.')pos = 43;
	//~ - funkenstort!
	if (c == '!') pos == 24;
	//if (c == '!') pos == 47;
	return pos;
}



void draw_font(int positionx, int positiony, char* buffer)
{
	int l = strlen((char*)buffer);

	int positionx2 = positionx + 7;
	int positiony2 = positiony + 7;
	int letpos = positionx;
	int letpos2 = positionx2;
	for (int a = 0; a < l; a++)
	{
		unsigned char c = buffer[a];
		int pos = gettablepos(c);
		textwriter.letter = gettablepos(c);
		textwriter_bw.letter = gettablepos(c);

		draw_font(&textwriter_bw, letpos2, positiony2);
		draw_font(&textwriter, letpos, positiony);

		switch (c)
		{
		case 'R':
			letpos += 25;
			letpos2 += 25;
			break;
		case 'F':
			letpos += 20;
			letpos2 += 20;
			break;
		case 'I':
			letpos += 20;
			letpos2 += 20;
			break;
		case 'N':
			if (buffer[a + 1] == 'T')
			{
				letpos += 20;
				letpos2 += 20;
			}
			else
			{
				letpos += 32;
				letpos2 += 32;
			}
			
			break;
		case 'L':
			if (buffer[a + 1] == 'I' || buffer[a + 1] == 'L' || buffer[a + 1] == 'D')
			{
				letpos += 10;
				letpos2 += 10;
			}
			else
			{
				letpos += 20;
				letpos2 += 20;
			}
			break;
		default:
			if (buffer[a + 1] == 'I' || buffer[a + 1] == 'L')
			{
				letpos += 20;
				letpos2 += 20;
				break;
			}
			else
			{
				letpos += 32;
				letpos2 += 32;
			}
			break;
		}

	}
}