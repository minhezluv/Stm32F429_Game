#ifndef OPTIONSPRESENTER_HPP
#define OPTIONSPRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class optionsView;

class optionsPresenter : public touchgfx::Presenter, public ModelListener
{
public:
    optionsPresenter(optionsView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();

    virtual ~optionsPresenter() {};

private:
    optionsPresenter();

    optionsView& view;
};

#endif // OPTIONSPRESENTER_HPP
