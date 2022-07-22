// 4.19.1 0xb8def119
// Generated by imageconverter. Please, do not edit!

#include <BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_bg_game[]; // BITMAP_BG_GAME_ID = 0, Size: 240x320 pixels
extern const unsigned char image_bg_option[]; // BITMAP_BG_OPTION_ID = 1, Size: 240x320 pixels
extern const unsigned char image_blue_icons_pause_48[]; // BITMAP_BLUE_ICONS_PAUSE_48_ID = 2, Size: 30x42 pixels
extern const unsigned char image_blue_icons_refresh_48[]; // BITMAP_BLUE_ICONS_REFRESH_48_ID = 3, Size: 46x43 pixels
extern const unsigned char image_blue_icons_remove_48[]; // BITMAP_BLUE_ICONS_REMOVE_48_ID = 4, Size: 46x46 pixels
extern const unsigned char image_button_easy[]; // BITMAP_BUTTON_EASY_ID = 5, Size: 139x72 pixels
extern const unsigned char image_button_hard[]; // BITMAP_BUTTON_HARD_ID = 6, Size: 139x72 pixels
extern const unsigned char image_button_normal[]; // BITMAP_BUTTON_NORMAL_ID = 7, Size: 139x72 pixels
extern const unsigned char image_button_play[]; // BITMAP_BUTTON_PLAY_ID = 8, Size: 66x67 pixels
extern const unsigned char image_car_green[]; // BITMAP_CAR_GREEN_ID = 9, Size: 35x73 pixels
extern const unsigned char image_car_red[]; // BITMAP_CAR_RED_ID = 10, Size: 35x73 pixels
extern const unsigned char image_finish[]; // BITMAP_FINISH_ID = 11, Size: 240x40 pixels
extern const unsigned char image_gameover[]; // BITMAP_GAMEOVER_ID = 12, Size: 240x320 pixels
extern const unsigned char image_poster[]; // BITMAP_POSTER_ID = 13, Size: 240x320 pixels
extern const unsigned char image_rock[]; // BITMAP_ROCK_ID = 14, Size: 37x24 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_bg_game, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_bg_option, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_blue_icons_pause_48, 0, 30, 42, 18, 3, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 36, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_refresh_48, 0, 46, 43, 38, 11, 7, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 8, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_blue_icons_remove_48, 0, 46, 46, 42, 17, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 12, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_button_easy, 0, 139, 72, 20, 11, 99, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_button_hard, 0, 139, 72, 20, 11, 99, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_button_normal, 0, 139, 72, 20, 11, 99, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 50, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_button_play, 0, 66, 67, 6, 12, 33, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 44, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_car_green, 0, 35, 73, 2, 11, 31, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 56, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_car_red, 0, 35, 73, 2, 8, 30, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 57, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_finish, 0, 240, 40, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 40, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_gameover, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_poster, 0, 240, 320, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 320, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_rock, 0, 37, 24, 5, 5, 21, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 15, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 }
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
