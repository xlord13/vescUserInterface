// 4.18.0 0x04e12255
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_blue_logo_touchgfx_logo[]; // BITMAP_BLUE_LOGO_TOUCHGFX_LOGO_ID = 0, Size: 128x128 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_blue_logo_touchgfx_logo, 0, 128, 128, 5, 5, 118, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 118, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
