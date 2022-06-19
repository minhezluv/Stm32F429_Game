#ifndef MAINVIEW_HPP
#define MAINVIEW_HPP

#include <gui_generated/main_screen/MainViewBase.hpp>
#include <gui/main_screen/MainPresenter.hpp>

class MainView : public MainViewBase
{
public:
    MainView();
    virtual ~MainView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    virtual void leftFunction();
    virtual void rightFunction();
    void moveCar(int16_t x, int16_t y);
    void resetCar();
    void updateRoad();
    void updateScore(int16_t x);
    void delay(int16_t x);
    virtual void startGame();
protected:
    // Car movemwent
    Unicode::UnicodeChar ss[3];
    int16_t dx;
    int16_t dy;
    int16_t Xcar[5] = { 11, 58, 103, 150, 196 };
    bool GameState = true;
    int16_t score=0;
    int tickCounter;
    bool isTouching(int16_t ball_x, int16_t ball_y, int16_t paddle_x, int16_t paddle_y);
};

#endif // MAINVIEW_HPP
