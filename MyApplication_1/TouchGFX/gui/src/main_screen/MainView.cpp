#include <gui/main_screen/MainView.hpp>

MainView::MainView() :dx(2), dy(-1), tickCounter(0)
{
    //moveCar(redcar.getX(),(int16_t)240);
      // resetCar();
}

void MainView::setupScreen()
{
    MainViewBase::setupScreen();
}

void MainView::tearDownScreen() {
    MainViewBase::tearDownScreen();
}

void MainView::updateScore(int16_t x) {
    Unicode::snprintf(ScoreBuffer, SCORE_SIZE, "%u", x);
    Score.invalidate();
}

void MainView::rightFunction() {

    int currX = image1.getX() + 45;
    int currY = image1.getY();

    //  image1.setVisible(true);
    if (GameState && currX < 230)
        image1.moveTo(currX, currY);
    // image1.setVisible(true);
   //  Background.invalidate();
    image1.invalidate();
}
void MainView::leftFunction() {
    int currX = image1.getX() - 45;
    int currY = image1.getY();
    if (GameState && currX > 0)
        image1.moveTo(currX, currY);
    // image1.setVisible(true);
   //  Background.invalidate();
    image1.invalidate();
}

void MainView::moveCar(touchgfx::Image &obj,int16_t speed) {
    int16_t x = obj.getX();
    int16_t y = obj.getY() + speed;
    obj.moveTo(x, y);
    obj.invalidate();
}
void MainView::resetCar(touchgfx::Image &obj) {
    int16_t k = rand() % 5;
    obj.moveTo(Xcar[k], -36);
    obj.invalidate();
}

void MainView::updateRoad(int16_t speed) {
    if (GameState) {
        int currX = road.getX();
        int currY = road.getY() + speed;
        if (currY >= 320){currY = -320;score++;}
        road.moveTo(currX, currY);
        int currX1 = road1.getX();
        int currY1 = road1.getY() + speed;
        if (currY1 >= 320){currY1 = -320;score++;}
        road1.moveTo(currX1, currY1);
    }

}
void MainView::handleTickEvent() {
    tickCounter++;
    updateScore(score);
    if(score==10)sprc=5;
    else if(score==20)sprc=6;
    if (GameState) {
        if (redcar.getY() < 320) {
            moveCar(redcar,sprc);
        }
        else {
            resetCar(redcar);
        }
        if (redcar1.getY() < 320) {
            moveCar(redcar1,sprc);
        }
        else {
            resetCar(redcar1);
        }

        if (isTouching()) {
            GameState = false;
            Sleep(1000);
            application().gotoGameOverScreenNoTransition();
        }
    }
    updateRoad(4);
}

bool MainView::isTouching() {



    return 0;
}
void MainView::startGame() {
    if (GameState)
        this->GameState = false;
    else this->GameState = true;
}