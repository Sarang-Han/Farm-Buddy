/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/containers/CustomContainer1Base.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>

CustomContainer1Base::CustomContainer1Base()
{
    setWidth(70);
    setHeight(20);
    boxWithBorder1.setPosition(0, 0, 70, 20);
    boxWithBorder1.setColor(touchgfx::Color::getColorFromRGB(237, 252, 250));
    boxWithBorder1.setBorderColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    boxWithBorder1.setBorderSize(1);
    add(boxWithBorder1);

    textArea1.setPosition(0, 0, 70, 20);
    textArea1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea1.setLinespacing(0);
    Unicode::snprintf(textArea1Buffer, TEXTAREA1_SIZE, "%s", touchgfx::TypedText(T_WILDCARD1).getText());
    textArea1.setWildcard(textArea1Buffer);
    textArea1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_YJMX));
    add(textArea1);
}

CustomContainer1Base::~CustomContainer1Base()
{

}

void CustomContainer1Base::initialize()
{

}
