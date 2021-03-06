#include <ximage.h>

static uint8_t erosion_3s_16x16_data[] =
{
    0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 0x18, 0x18, 0x7C, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x93, 0x0D, 0xFF, 0x16, 0x93, 0x0D, 0xFF, 
    0x00, 0x00, 0x00, 0x00, 
};

static const ximage image_erosion_3s_16x16 =
{
    &erosion_3s_16x16_data[0],
    16, 16,
    64,
    XPixelFormatRGBA32
};
