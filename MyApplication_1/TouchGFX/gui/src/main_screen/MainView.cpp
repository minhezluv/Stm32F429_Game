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

void MainView::tearDownScreen()
{
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

void MainView::moveCar(int16_t x, int16_t y) {
    redcar.moveTo(x, y);
    redcar.invalidate();
}
void MainView::resetCar() {
    int16_t k = rand() % 5;
    redcar.moveTo(Xcar[k], -36);
    redcar.invalidate();
}

void MainView::updateRoad() {
    if (GameState) {
        int currX = road.getX();
        int currY = road.getY() + 5;
        if (currY >= 320)currY = -320;
        road.moveTo(currX, currY);
        int currX1 = road1.getX();
        int currY1 = road1.getY() + 5;
        if (currY1 >= 320)currY1 = -320;
        road1.moveTo(currX1, currY1);
    }

}
void MainView::handleTickEvent() {
    tickCounter++;
    if (GameState) {
        if (redcar.getY() < 320) {
            moveCar(redcar.getX(), redcar.getY() + 5);
        }
        else {
            resetCar();
            score++;
            updateScore(score);
        }
        if (isTouching(image1.getX(), image1.getY(), redcar.getX(), redcar.getY())) {
            GameState = false;
            Sleep(1000);
            application().gotoGameOverScreenNoTransition();
        }
    }
    updateRoad();
}

bool MainView::isTouching(int16_t ball_x, int16_t ball_y, int16_t paddle_x, int16_t paddle_y) {
    return (abs(ball_x - paddle_x) < 34) && (abs(ball_y - paddle_y) < 72);
}
void MainView::startGame() {
    if (GameState)
        this->GameState = false;
    else this->GameState = true;
}