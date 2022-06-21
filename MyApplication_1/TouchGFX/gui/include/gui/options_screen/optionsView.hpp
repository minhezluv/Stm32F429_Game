#ifndef OPTIONSVIEW_HPP
#define OPTIONSVIEW_HPP

#include <gui_generated/options_screen/optionsViewBase.hpp>
#include <gui/options_screen/optionsPresenter.hpp>

class optionsView : public optionsViewBase
{
public:
    optionsView();
    virtual ~optionsView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // OPTIONSVIEW_HPP
