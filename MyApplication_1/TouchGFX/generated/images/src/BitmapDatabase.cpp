// 4.19.1 0x6879f38e
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_bg_game[]; // BITMAP_BG_GAME_ID = 0, Size: 240x320 pixels
extern const unsigned char image_blue_buttons_round_icon_button[]; // BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID = 1, Size: 60x60 pixels
extern const unsigned char image_blue_buttons_round_icon_button_pressed[]; // BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID = 2, Size: 60x60 pixels
extern const unsigned char image_blue_icons_pause_48[]; // BITMAP_BLUE_ICONS_PAUSE_48_ID = 3, Size: 30x42 pixels
extern const unsigned char image_blue_icons_refresh_48[]; // BITMAP_BLUE_ICONS_REFRESH_48_ID = 4, Size: 46x43 pixels
extern const unsigned char image_blue_icons_remove_48[]; // BITMAP_BLUE_ICONS_REMOVE_48_ID = 5, Size: 46x46 pixels
extern const unsigned char image_button_play[]; // BITMAP_BUTTON_PLAY_ID = 6, Size: 66x67 pixels
extern const unsigned char image_car_green[]; // BITMAP_CAR_GREEN_ID = 7, Size: 35x73 pixels
extern const unsigned char image_car_red[]; // BITMAP_CAR_RED_ID = 8, Size: 35x73 pixels
extern const unsigned char image_gameover[]; // BITMAP_GAMEOVER_ID = 9, Size: 240x320 pixels
extern const unsigned char image_poster[]; // BITMAP_POSTER_ID = 10, Size: 240x320 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_bg_game, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_blue_buttons_round_icon_button, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_buttons_round_icon_button_pressed, 0, 60, 60, 13, 11, 34, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_pause_48, 0, 30, 42, 18, 3, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_refresh_48, 0, 46, 43, 38, 11, 7, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_remove_48, 0, 46, 46, 42, 17, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_button_play, 0, 66, 67, 6, 12, 33, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_car_green, 0, 35, 73, 2, 11, 31, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 56, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_car_red, 0, 35, 73, 2, 8, 30, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 57, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_gameover, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_poster, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
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
