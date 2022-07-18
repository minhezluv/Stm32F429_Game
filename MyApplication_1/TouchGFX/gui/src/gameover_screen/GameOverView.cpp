#include <gui/gameover_screen/GameOverView.hpp>

GameOverView::GameOverView()
{
    
    //update(score);
}

void GameOverView::setupScreen()
{
    GameOverViewBase::setupScreen();
}

void GameOverView::tearDownScreen()
{
    GameOverViewBase::tearDownScreen();
}

// void GameOverView::update(int16_t x) {
//     Unicode::snprintf(Score1Buffer, SCORE1_SIZE, "%u", x);
//     Score1.invalidate();
// }