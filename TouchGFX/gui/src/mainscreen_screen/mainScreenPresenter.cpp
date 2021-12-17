#include <gui/mainscreen_screen/mainScreenView.hpp>
#include <gui/mainscreen_screen/mainScreenPresenter.hpp>

mainScreenPresenter::mainScreenPresenter(mainScreenView& v)
    : view(v)
{

}

void mainScreenPresenter::activate()
{

}

void mainScreenPresenter::deactivate()
{

}

void mainScreenPresenter::NotifyBatteryLevelChanged(float level)
{
    view.SetBatteryLevel(level);
}

void mainScreenPresenter::NotifySpeedChanged(int speed)
{
    view.SetSpeed(speed);
}
