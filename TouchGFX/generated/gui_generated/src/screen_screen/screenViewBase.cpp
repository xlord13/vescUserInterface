/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <BitmapDatabase.hpp>

screenViewBase::screenViewBase()
{

    __background.setPosition(0, 0, 128, 128);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));

    box1.setPosition(0, 0, 128, 128);
    box1.setColor(touchgfx::Color::getColorFromRGB(95, 178, 178));

    button1.setXY(34, 34);
    button1.setBitmaps(touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_ID), touchgfx::Bitmap(BITMAP_BLUE_BUTTONS_ROUND_EDGE_ICON_BUTTON_PRESSED_ID));

    add(__background);
    add(box1);
    add(button1);
}

void screenViewBase::setupScreen()
{

}