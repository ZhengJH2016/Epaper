#ifndef __Image_H
#define __Image_H

const unsigned char ESL[]={

0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x1F,0x1F,0x1F,0x19,0x19,0x19,0x19,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x07,0x07,0x07,0x02,0x07,0x07,0x03,0x00,0x00,0x03,0x07,0x07,0x06,0x07,0x07,
0x03,0x00,0x00,0x07,0x07,0x07,0x02,0x07,0x07,0x03,0x00,0x00,0x01,0x03,0x07,0x06,
0x07,0x03,0x01,0x00,0x00,0x07,0x07,0x07,0x02,0x06,0x04,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFE,0xFE,0xFE,0xFE,0xFF,0xFF,0xFF,0xFF,0x7F,0x7F,0x3F,0x3F,0x1F,0x07,
0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0x00,0x00,0x00,0x01,0x07,0x0F,0x1F,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,
0xFC,0xF8,0xF0,0xE0,0xC0,0x80,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,0xFE,
0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xF8,0xF8,0x98,0x98,0x98,0x98,0x18,0x00,0xC0,
0xC0,0xC0,0xC0,0x00,0x00,0xFF,0xFF,0xFF,0x10,0xF8,0xF8,0xF0,0x00,0x00,0x30,0x78,
0x78,0x98,0xF8,0xF8,0xF8,0x00,0x00,0xFF,0xFF,0xFF,0x10,0xF8,0xF8,0xF0,0x00,0x00,
0xE0,0xF0,0xF8,0x58,0xD8,0xD8,0xD0,0x00,0x00,0xF8,0xF8,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xEF,0xC3,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,0x3F,
0x3F,0x3F,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0x7F,0x7F,0x66,0x66,0x66,
0x66,0x60,0x00,0x10,0x18,0x1F,0x0F,0x07,0x0F,0x1F,0x18,0x10,0x00,0x1F,0x1F,0x1F,
0x08,0x1F,0x1F,0x0F,0x00,0x00,0x07,0x0F,0x1F,0x19,0x1F,0x0F,0x07,0x00,0x00,0x1F,
0x1F,0x1F,0x08,0x18,0x10,0x5F,0x5F,0x5F,0x00,0x00,0x07,0x0F,0x1F,0x19,0x1F,0x0F,
0x07,0x00,0x00,0x1F,0x1F,0x1F,0x08,0x1F,0x1F,0x0F,0x00,0x00,0x07,0x0F,0x1F,0x18,
0x1C,0x0C,0x04,0x00,0x00,0x07,0x0F,0x1F,0x19,0x1F,0x0F,0x07,0x00,0x00,0x0F,0x1F,
0x1F,0x08,0x7F,0x7F,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x03,0x03,0x03,0x03,0x07,
0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0xF8,0xF0,0xE0,0xC0,0xF0,
0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0x1F,0x07,0x01,0x00,0x00,0x00,0x00,0x00,
0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0x83,0x83,0x83,0x83,0x83,
0x83,0x83,0x83,0x83,0x83,0x83,0x83,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xE1,0xE1,
0xE1,0x61,0x60,0x60,0x60,0x61,0x01,0x21,0x61,0xE0,0xC0,0x00,0xC0,0xE0,0x60,0x20,
0x00,0xFC,0xFC,0xFC,0x40,0xE0,0xE0,0xC0,0x00,0x00,0x80,0xC0,0xE0,0x60,0x60,0x60,
0x40,0x00,0x00,0xE0,0xE0,0xE0,0x00,0x01,0x01,0xE1,0xE1,0xE0,0x00,0x00,0x80,0xC0,
0xE0,0x60,0x60,0x60,0x40,0x00,0x00,0xE0,0xE0,0xE0,0x00,0xE0,0xE0,0xE0,0x00,0x01,
0x80,0xC0,0xE0,0x60,0xE0,0xC0,0x80,0x00,0x00,0x80,0xC0,0xE0,0x60,0x60,0x60,0x40,
0x00,0x00,0xC0,0xE0,0xE0,0x40,0xE0,0xE0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x00,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xF8,0xF0,0xF0,0xF0,0xE0,0xE0,0xC0,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xF0,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x78,
0x38,0x08,0x00,0x00,0x00,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,
0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0xF8,0x00,0x00,0x00,0x00,
0x00,0x00,0xFF,0xFF,0xFF,0xF0,0x7F,0x03,0x7F,0xF0,0xFF,0xFF,0xFF,0x00,0x00,0x33,
0x77,0x77,0x69,0x7F,0x7F,0x3F,0x00,0x00,0x7F,0x7F,0x7F,0x20,0x7F,0x7F,0x3F,0x00,
0x00,0x7F,0x7F,0x7F,0x01,0x7F,0x7F,0x7F,0x00,0x60,0xFF,0xFF,0xFF,0x60,0x00,0x33,
0x77,0x77,0x69,0x7F,0x7F,0x3F,0x00,0x00,0x1E,0x3F,0x7F,0x61,0x73,0x33,0x12,0x00,
0x60,0xFF,0xFF,0xFF,0x61,0x61,0x00,0x7F,0x7F,0x7F,0x01,0x7F,0x7F,0x7F,0x00,0x00,
0x7F,0x7F,0x7F,0x20,0x60,0x40,0x1E,0x3F,0x7F,0x65,0x7D,0x3D,0x1D,0x00,0x00,0x7F,
0x7F,0x7F,0x20,0x60,0x40,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,
0x0F,0x0F,0x0F,0x0F,0x0F,0x0F,0x8F,0x8F,0x8F,0x0F,0x0F,0x8F,0x0F,0x0F,0x8F,0x8F,
0x8F,0x0F,0x0F,0x0F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x0F,0x0F,0x8F,0x8F,0x8F,0x0F,
0x8F,0x8F,0x8F,0x0F,0x0F,0x0F,0x8F,0x8F,0x0F,0x8F,0x8F,0x8F,0x0F,0x0F,0x8F,0x8F,
0x8F,0x0F,0x0F,0x0F,0x8F,0x8F,0x8F,0x8F,0x8F,0x8F,0x0F,0x0F,0x0F,0x0F,0x8F,0x8F,
0x8F,0x0F,0x0F,0x0F,0x0F,0x0F,0x8F,0x8F,0x8F,0x8F,0x0F,0x0F,0x8F,0x8F,0x0F,0x8F,
0x8F,0x8F,0x0F,0x0F,0x8F,0x8F,0x8F,0x0F,0x0F,0x0F,0x0F,0x0F,0x8F,0x8F,0x8F,0x8F,
0x0F,0x0F,0x0F,0x8F,0x8F,0x8F,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xFC,
0xFC,0xFC,0xFC,0xFC,0xFE,0xFF,0xFF,0xFF,0xE0,0xE0,0xE0,0xE0,0xFE,0xFC,0xFC,0xFC,
0xFC,0xFE,0xFF,0xFF,0xE4,0xE4,0xE4,0xE4,0xFF,0xFF,0xFC,0xFC,0xFC,0xFC,0xFE,0xFC,
0xFC,0xFC,0xFC,0xFE,0xFF,0xFF,0xFF,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFE,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,
0xFE,0xFF,0xFF,0xFF,0xFC,0xFC,0xFC,0xFC,0xFE,0xFC,0xFC,0xFC,0xFE,0xFF,0xFF,0xFF,
0xFF,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,0xFE,0xFF,0xFF,0xFF,0xFC,0xFC,0xFC,0xFC,
0xFE,0xFC,0xFC,0xFC,0xFE,0xFF,0xFF,0xFF,0xFF,0xFE,0xFC,0xFC,0xFC,0xFC,0xFC,0xFC,
0xFE,0xFF,0xFF,0xFF,0xFC,0xFC,0xFC,0xFC,0xFE,0xFC,0xFC,0xFC,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0x83,0x01,0x00,0x00,0xFC,0xFC,0x30,0x30,0x79,0x7B,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x7F,0x7F,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFF,0xFF,0x00,0x00,
0x00,0x00,0x7F,0x7F,0x00,0x00,0x00,0x00,0xFF,0xFF,0x61,0x40,0x40,0x40,0xCC,0x9D,
0x00,0x00,0x00,0x00,0xFF,0xC7,0xC7,0xC7,0xC7,0xC7,0xC7,0xFF,0x87,0x01,0x00,0x00,
0xCC,0xCC,0x08,0x08,0x09,0x8B,0xFF,0xFF,0x00,0x00,0x00,0x00,0xFD,0xFC,0x00,0x00,
0x01,0x03,0xFF,0xFF,0x61,0x40,0x40,0x40,0xCC,0x9D,0x00,0x00,0x00,0x00,0xFF,0xFF,
0x00,0x00,0x00,0x00,0xFD,0xFC,0x00,0x00,0x01,0x03,0xFF,0xFF,0x87,0x01,0x00,0x00,
0xCC,0xCC,0x08,0x08,0x09,0x8B,0xFF,0xFF,0x00,0x00,0x00,0x00,0x3F,0x7F,0x7F,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0x0F,0x0F,0x0F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
0xFF,0xFF,0xFF,0xFF,

};

#endif
