#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>


class MainView : public MainViewBase{
public:
    int16_t score = 0;
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    virtual void leftFunction();
    virtual void rightFunction();
    void moveCar(touchgfx::Image& obj, int16_t speed);
    void resetCar(touchgfx::Image& obj);
    void resetRock(touchgfx::Image& obj);
    void updateRoad(int16_t speed);
    void updateScore(int16_t x);
    void delay(int16_t x);
    virtual void startGame();

protected:
    // Car movemwent
    Unicode::UnicodeChar ss[3];
    int16_t dx;
    int16_t dy;
    int16_t sprc = 4;
    int16_t Xcar[5] = { 11, 58, 103, 150, 196 };
    bool GameState = true;
    int tickCounter = 0;
    bool isTouching(int16_t ball_x, int16_t ball_y, int16_t paddle_x, int16_t paddle_y,int16_t x,int16_t y);
};

#endif // MAINVIEW_HPP
