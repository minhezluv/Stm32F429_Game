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
    virtual void startGame();
protected:
// Car movemwent

int16_t dx;
int16_t dy;
bool GameState;
int tickCounter;
bool isTouching(int16_t ball_x, int16_t ball_y, int16_t paddle_x, int16_t paddle_y);
};

#endif // MAINVIEW_HPP
