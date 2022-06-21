/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINVIEWBASE_HPP
#define MAINVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/main_screen/MainPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/Button.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/EasingEquations.hpp>
#include <touchgfx/mixins/MoveAnimator.hpp>

class MainViewBase : public touchgfx::View<MainPresenter>
{
public:
    MainViewBase();
    virtual ~MainViewBase() {}
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void leftFunction()
    {
        // Override and implement this function in Main
    }

    virtual void rightFunction()
    {
        // Override and implement this function in Main
    }

    virtual void startGame()
    {
        // Override and implement this function in Main
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Container Background;
    touchgfx::Image road;
    touchgfx::Image road1;
    touchgfx::Image finish;
    touchgfx::MoveAnimator< touchgfx::Image > image1;
    touchgfx::Image rock;
    touchgfx::Image redcar;
    touchgfx::Button rightButton;
    touchgfx::Button leftButton;
    touchgfx::Button GameState;
    touchgfx::Button ExitGame;
    touchgfx::TextAreaWithOneWildcard Score;

    /*
     * Wildcard Buffers
     */
    static const uint16_t SCORE_SIZE = 3;
    touchgfx::Unicode::UnicodeChar ScoreBuffer[SCORE_SIZE];

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // MAINVIEWBASE_HPP
