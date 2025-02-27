// Display Library for SPI e-paper panels from Dalian Good Display and boards from Waveshare.
// Requires HW SPI and Adafruit_GFX. Caution: these e-papers require 3.3V supply AND data lines!
//
// based on Demo Example from Good Display: http://www.e-paper-display.com/download_list/downloadcategoryid=34&isMode=false.html
//
// Author: Jean-Marc Zingg
//
// Version: see library.properties
//
// Library: https://github.com/ZinggJM/GxEPD2

#ifndef _GxEPD2_2IC_H_
#define _GxEPD2_2IC_H_

#include <Arduino.h>
#include <SPI.h>

// color definitions for GxEPD, GxEPD2 and GxEPD_HD, values correspond to RGB565 values for TFTs
#define GxEPD_BLACK     0x0000
#define GxEPD_WHITE     0xFFFF
// some controllers for b/w EPDs support grey levels
#define GxEPD_DARKGREY  0x7BEF // 128, 128, 128
#define GxEPD_LIGHTGREY 0xC618 // 192, 192, 192
// values for 3-color or 7-color EPDs
#define GxEPD_RED       0xF800 // 255,   0,   0
#define GxEPD_YELLOW    0xFFE0 // 255, 255,   0 !!no longer same as GxEPD_RED!!
#define GxEPD_COLORED   GxEPD_RED
// values for 7-color EPDs only
#define GxEPD_BLUE      0x001F //   0,   0, 255
#define GxEPD_GREEN     0x07E0 //   0, 255,   0
#define GxEPD_ORANGE    0xFD20 // 255, 165,   0

class GxEPD2
{
  public:
    enum Panel
    {
      GDEH042A03,
    };
};

#endif
