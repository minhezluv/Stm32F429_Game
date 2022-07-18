/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/main_screen/MainViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainViewBase::MainViewBase() :
    buttonCallback(this, &MainViewBase::buttonCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    Background.setPosition(0, 0, 240, 320);

    road.setXY(0, -320);
    road.setBitmap(touchgfx::Bitmap(BITMAP_BG_GAME_ID));

    road1.setXY(0, 0);
    road1.setBitmap(touchgfx::Bitmap(BITMAP_BG_GAME_ID));

    image1.setXY(103, 187);
    image1.setBitmap(touchgfx::Bitmap(BITMAP_CAR_GREEN_ID));

    rock.setXY(9, -442);
    rock.setBitmap(touchgfx::Bitmap(BITMAP_ROCK_ID));

    redcar.setXY(60, -73);
    redcar.setBitmap(touchgfx::Bitmap(BITMAP_CAR_RED_ID));

    redcar1.setXY(103, -264);
    redcar1.setBitmap(touchgfx::Bitmap(BITMAP_CAR_RED_ID));

    rightButton.setXY(180, 260);
    rightButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    rightButton.setAction(buttonCallback);

    leftButton.setXY(0, 260);
    leftButton.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_ICON_BUTTON_PRESSED_ID));
    leftButton.setAction(buttonCallback);

    GameState.setXY(9, 18);
    GameState.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_ICONS_PAUSE_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_PAUSE_48_ID));
    GameState.setAction(buttonCallback);

    ExitGame.setXY(187, 14);
    ExitGame.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_ICONS_REMOVE_48_ID), touchgfx::Bitmap(BITMAP_BLUE_ICONS_REMOVE_48_ID));
    ExitGame.setAction(buttonCallback);

    Score.setPosition(56, 14, 129, 46);
    Score.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Score.setLinespacing(0);
    Unicode::snprintf(ScoreBuffer, SCORE_SIZE, "%s", touchgfx::TypedText(T___SINGLEUSE_ZQ4I).getText());
    Score.setWildcard(ScoreBuffer);
    Score.setTypedText(touchgfx::TypedText(T___SINGLEUSE_DB3A));

    add(__background);
    add(Background);
    add(road);
    add(road1);
    add(image1);
    add(rock);
    add(redcar);
    add(redcar1);
    add(rightButton);
    add(leftButton);
    add(GameState);
    add(ExitGame);
    add(Score);
}

void MainViewBase::setupScreen()
{

}

void MainViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &rightButton)
    {
        //rightFunction
        //When rightButton clicked call virtual function
        //Call rightFunction
        rightFunction();
    }
    else if (&src == &leftButton)
    {
        //leftFunction
        //When leftButton clicked call virtual function
        //Call leftFunction
        leftFunction();
    }
    else if (&src == &GameState)
    {
        //startGame
        //When GameState clicked call virtual function
        //Call startGame
        startGame();
    }
    else if (&src == &ExitGame)
    {
        //Interaction1
        //When ExitGame clicked change screen to GameOver
        //Go to GameOver with no screen transition
        application().gotoGameOverScreenNoTransition();
    }
}
