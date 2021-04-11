/*
 * Tiny4kOLED - Drivers for SSD1306 controlled dot matrix OLED/PLED 128x32 displays
 *
 * Based on ssd1306xled, re-written and extended by Stephen Denne
 * from 2017-04-25 at https://github.com/datacute/Tiny4kOLED
 *
 */
/*
 * SSD1306xLED - Drivers for SSD1306 controlled dot matrix OLED/PLED 128x64 displays
 *
 * @created: 2014-08-12
 * @author: Neven Boyanov
 *
 * Source code available at: https://bitbucket.org/tinusaur/ssd1306xled
 *
 */

// ----------------------------------------------------------------------------

#include <avr/pgmspace.h>

// ----------------------------------------------------------------------------

/* Symbol  8x8 font */
const uint8_t ssd1306xled_fontsymb8x8 [] PROGMEM = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  empty
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, //  one bar
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, //  2  bars
  0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, //  3 bars
  0x0F, 0x0F, 0x0F, 0x0f, 0x0F, 0x0F, 0x0F, 0x0F, //  4 bars
  0x1F, 0x1F, 0x1F, 0x1f, 0x1F, 0x1F, 0x1F, 0x1F, //  5 bars
  0x3F, 0x3F, 0x3F, 0x3f, 0x3F, 0x3F, 0x3F, 0x3F, //  6 bars
  0x7F, 0x7F, 0x7F, 0x7f, 0x7F, 0x7F, 0x7F, 0x7F, //  7 bars
  0xfF, 0xFF, 0xFF, 0xFf, 0xFF, 0xFF, 0xFF, 0xFF, //  8 bars
  0x3c, 0x42, 0x00, 0x18, 0x18, 0x00, 0x42, 0x3c, // stereo
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ) 9 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // * 10
};

// ----------------------------------------------------------------------------

const DCfont TinyOLED4ksymbolfont8x8 = {
  (uint8_t *)ssd1306xled_fontsymb8x8,
  8, // character width in pixels
  1, // character height in pages (8 pixels)
  0,10 // ASCII extents
  };

// for backwards compatibility
