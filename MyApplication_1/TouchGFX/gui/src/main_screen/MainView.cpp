#include <gui/main_screen/MainView.hpp>
#include "cmsis_os.h"
#include "stdlib.h"
MainView::MainView() : dx(2), dy(-1), tickCounter(0)
{
    // moveCar(redcar.getX(),(int16_t)240);
    //  resetCar();
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::pause()
{
    GameState = GameState ? 0 : 1;
}

void MainView::tearDownScreen()
{
    MainViewBase::tearDownScreen();
}

void MainView::updateScore(int16_t x)
{
    Unicode::snprintf(ScoreBuffer, SCORE_SIZE, "%u", x);
    Score.invalidate();
}

void MainView::rightFunction()
{

    int currX = image1.getX() + 45;
    int currY = image1.getY();

    //  image1.setVisible(true);
    if (GameState && currX < 230)
        image1.moveTo(currX, currY);

    image1.invalidate();
}
void MainView::leftFunction()
{
    int currX = image1.getX() - 45;
    int currY = image1.getY();
    if (GameState && currX > 0)
        image1.moveTo(currX, currY);

    image1.invalidate();
}

void MainView::moveCar(touchgfx::Image &obj, int16_t speed)
{
    int16_t x = obj.getX();
    int16_t y = obj.getY() + speed;
    obj.moveTo(x, y);
    obj.invalidate();
}
void MainView::resetCar(touchgfx::Image &obj)
{
    int k = 2;

    obj.moveTo(Xcar[k], -36);
    obj.invalidate();
}
void MainView::resetRock(touchgfx::Image &obj)
{
    int k = 1;

    obj.moveTo(Xcar[k], -10);
    obj.invalidate();
}

void MainView::updateRoad(int16_t speed)
{
    if (GameState)
    {
        int currX = road.getX();
        int currY = road.getY() + speed;
        if (currY >= 320)
        {
            currY = -320;
            score++;
            tickCounter++;
        }
        road.moveTo(currX, currY);
        int currX1 = road1.getX();
        int currY1 = road1.getY() + speed;
        if (currY1 >= 320)
        {
            currY1 = -320;
            score++;
            tickCounter++;
        }
        road1.moveTo(currX1, currY1);
    }
}
void MainView::handleTickEvent()
{
    updateScore(score);
    if (tickCounter >= 10)
    {
        sprc++;
        tickCounter = 0;
    }
    if (GameState)
    {
        if (redcar.getY() < 320)
        {
            moveCar(redcar, sprc);
        }
        else
        {
            resetCar(redcar);
        }
        if (redcar1.getY() < 320)
        {
            moveCar(redcar1, sprc);
        }
        else
        {
            resetCar(redcar1);
        }
        if (rock.getY() < 320)
        {
            moveCar(rock, 4);
        }
        else
        {
            resetRock(rock);
        }
        // if (isTouching(image1.getX(), image1.getY(), redcar.getX(), redcar.getY(), 35, 73))
        // {
        //     GameState = false;
        //     // Sleep(1000);
        //     application().gotoGameOverScreenNoTransition();
        // }
        // if (isTouching(image1.getX(), image1.getY(), redcar1.getX(), redcar1.getY(), 35, 73))
        // {
        //     GameState = false;
        //     // Sleep(1000);
        //     application().gotoGameOverScreenNoTransition();
        // }
        // if (isTouching(image1.getX(), image1.getY(), rock.getX(), rock.getY(), 10, 34))
        // {
        //     GameState = false;
        //     // Sleep(1000);
        //     application().gotoGameOverScreenNoTransition();
        // }
    }
    updateRoad(4);
}

bool MainView::isTouching(int16_t ball_x, int16_t ball_y, int16_t paddle_x, int16_t paddle_y, int16_t x, int16_t y)
{
    return (abs(ball_x - paddle_x) < x) && (abs(ball_y - paddle_y) < y);
}
void MainView::startGame()
{
    if (GameState)
        this->GameState = false;
    else
        this->GameState = true;
}
void MainView::delay(int16_t x)
{
    while (x>0){x--;}

}
