/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <images/BitmapDatabase.hpp>
#include <texts/TextKeysAndLanguages.hpp>

MainScreenViewBase::MainScreenViewBase()
{
    __background.setPosition(0, 0, 800, 480);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    Main_Wallpaper.setXY(0, 0);
    Main_Wallpaper.setBitmap(touchgfx::Bitmap(BITMAP_LIGHT_THEME_IMAGES_BACKGROUNDS_800X480_SHATTERED_RAIN_ID));
    add(Main_Wallpaper);

    Main_PlantState.setPosition(39, 103, 332, 333);
    Main_PlantState.setColor(touchgfx::Color::getColorFromRGB(197, 224, 198));
    Main_PlantState.setAlpha(188);
    add(Main_PlantState);

    Main_SensorBackground.setPosition(398, 106, 367, 164);
    Main_SensorBackground.setColor(touchgfx::Color::getColorFromRGB(197, 224, 198));
    Main_SensorBackground.setAlpha(188);
    add(Main_SensorBackground);

    Main_Sensor1.setPosition(398, 106, 367, 41);
    Main_Sensor1.setColor(touchgfx::Color::getColorFromRGB(235, 235, 235));
    add(Main_Sensor1);

    Main_TextSensor.setXY(415, 114);
    Main_TextSensor.setColor(touchgfx::Color::getColorFromRGB(74, 102, 75));
    Main_TextSensor.setLinespacing(0);
    Main_TextSensor.setTypedText(touchgfx::TypedText(T___SINGLEUSE_RQCW));
    add(Main_TextSensor);

    Main_Upper_Background.setPosition(31, 23, 734, 52);
    Main_Upper_Background.setColor(touchgfx::Color::getColorFromRGB(193, 222, 194));
    Main_Upper_Background.setAlpha(233);
    add(Main_Upper_Background);

    Main_ClockUpper.setPosition(624, 33, 126, 33);
    Main_ClockUpper.setColor(touchgfx::Color::getColorFromRGB(74, 102, 75));
    Main_ClockUpper.setTypedText(touchgfx::TypedText(T___SINGLEUSE_LWT5));
    Main_ClockUpper.displayLeadingZeroForHourIndicator(true);
    Main_ClockUpper.setDisplayMode(touchgfx::DigitalClock::DISPLAY_24_HOUR);
    Main_ClockUpper.setTime24Hour(10, 10, 0);
    add(Main_ClockUpper);

    Main_TextUpper_Farmbuddy.setXY(293, 31);
    Main_TextUpper_Farmbuddy.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    Main_TextUpper_Farmbuddy.setLinespacing(0);
    Main_TextUpper_Farmbuddy.setTypedText(touchgfx::TypedText(T___SINGLEUSE_H0ZL));
    add(Main_TextUpper_Farmbuddy);

    Main_TextUpper_Quest.setXY(47, 38);
    Main_TextUpper_Quest.setColor(touchgfx::Color::getColorFromRGB(74, 102, 75));
    Main_TextUpper_Quest.setLinespacing(0);
    Main_TextUpper_Quest.setTypedText(touchgfx::TypedText(T___SINGLEUSE_GFTR));
    add(Main_TextUpper_Quest);

    Main_ImageThermo.setXY(421, 158);
    Main_ImageThermo.setBitmap(touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_DEVICE_THERMOSTAT_40_40_C43535_SVG_ID));
    add(Main_ImageThermo);

    Main_TextTemperature.setXY(467, 166);
    Main_TextTemperature.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Main_TextTemperature.setLinespacing(0);
    Main_TextTemperature.setTypedText(touchgfx::TypedText(T___SINGLEUSE_L6QC));
    add(Main_TextTemperature);

    Main_ImageIlluminance.setXY(419, 216);
    Main_ImageIlluminance.setBitmap(touchgfx::Bitmap(BITMAP_ICON_THEME_IMAGES_IMAGE_BRIGHTNESS_6_40_40_F0C14A_SVG_ID));
    add(Main_ImageIlluminance);

    Main_TextIlluminance.setXY(472, 228);
    Main_TextIlluminance.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    Main_TextIlluminance.setLinespacing(0);
    Main_TextIlluminance.setTypedText(touchgfx::TypedText(T___SINGLEUSE_Z61T));
    add(Main_TextIlluminance);

    box1.setPosition(39, 362, 332, 76);
    box1.setColor(touchgfx::Color::getColorFromRGB(235, 235, 235));
    add(box1);

    Main_TextBuddystate.setXY(58, 388);
    Main_TextBuddystate.setColor(touchgfx::Color::getColorFromRGB(74, 102, 75));
    Main_TextBuddystate.setLinespacing(0);
    Main_TextBuddystate.setTypedText(touchgfx::TypedText(T___SINGLEUSE_NJYO));
    add(Main_TextBuddystate);

    boxWithBorder1.setPosition(398, 297, 367, 142);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(235, 235, 235));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(132, 159, 133));
    boxWithBorder1.setBorderSize(3);
    boxWithBorder1.setAlpha(233);
    add(boxWithBorder1);

    happy_flower.setBitmap(touchgfx::Bitmap(BITMAP_HAPPY_FLOWER_ID));
    happy_flower.setPosition(66, 120, 279, 264);
    happy_flower.setScalingAlgorithm(touchgfx::ScalableImage::NEAREST_NEIGHBOR);
    add(happy_flower);
}

MainScreenViewBase::~MainScreenViewBase()
{

}

void MainScreenViewBase::setupScreen()
{

}