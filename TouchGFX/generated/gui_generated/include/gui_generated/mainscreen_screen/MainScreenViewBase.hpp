/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef MAINSCREENVIEWBASE_HPP
#define MAINSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/containers/SwipeContainer.hpp>
#include <touchgfx/containers/Container.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/containers/clock/DigitalClock.hpp>
#include <touchgfx/widgets/TextAreaWithWildcard.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/ScalableImage.hpp>
#include <touchgfx/widgets/graph/GraphWrapAndClear.hpp>
#include <touchgfx/widgets/graph/GraphElements.hpp>
#include <touchgfx/widgets/graph/GraphLabels.hpp>
#include <touchgfx/widgets/canvas/PainterRGB565.hpp>
#include <gui/containers/CustomContainer1.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class MainScreenViewBase : public touchgfx::View<MainScreenPresenter>
{
public:
    MainScreenViewBase();
    virtual ~MainScreenViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void graph1Clicked(AbstractDataGraph::GraphClickEvent value)
    {
        // Override and implement this function in MainScreen
    }
    virtual void graph1Dragged(AbstractDataGraph::GraphDragEvent value)
    {
        // Override and implement this function in MainScreen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box swipe_background2;
    touchgfx::Box swipe_background1;
    touchgfx::SwipeContainer swipeContainer1;
    touchgfx::Container swipeP1_Main;
    touchgfx::Image Main_Wallpaper;
    touchgfx::Box Main_PlantState;
    touchgfx::Box Main_SensorBackground;
    touchgfx::Box Main_Sensor1;
    touchgfx::TextArea Main_TextSensor;
    touchgfx::Box Main_Upper_Background;
    touchgfx::DigitalClock digitalClock;
    touchgfx::TextArea Main_TextUpper_Farmbuddy;
    touchgfx::TextArea Main_TextUpper_Quest;
    touchgfx::Image Main_ImageThermo;
    touchgfx::TextAreaWithOneWildcard Main_TextTemperature;
    touchgfx::Image Main_ImageIlluminance;
    touchgfx::TextAreaWithOneWildcard Main_TextIlluminance;
    touchgfx::Box box1;
    touchgfx::TextArea Main_TextBuddystate;
    touchgfx::BoxWithBorder boxWithBorder1;
    touchgfx::ScalableImage happy_flower;
    touchgfx::ScalableImage sad_flower;
    touchgfx::GraphWrapAndClear<75> dynamicGraph1;
    touchgfx::GraphElementGridY dynamicGraph1MajorYAxisGrid;
    touchgfx::GraphLabelsX dynamicGraph1MajorXAxisLabel;
    touchgfx::GraphLabelsY dynamicGraph1MajorYAxisLabel;
    touchgfx::GraphElementLine dynamicGraph1Line1;
    touchgfx::PainterRGB565 dynamicGraph1Line1Painter;
    CustomContainer1 infoWidget1;
    touchgfx::Container swipeP2_Ctrl;
    touchgfx::Image Control_Wallpaper;
    touchgfx::Box Ctrl_Upper_Background;
    touchgfx::TextArea Ctrl_TextUpper_Farmbuddy;
    touchgfx::ToggleButton Temperature_toggle;
    touchgfx::TextArea Control_temperature;
    touchgfx::ToggleButton Humidity_toggle_1;
    touchgfx::TextArea Control_watersupply;
    touchgfx::TextArea Control_wateramount;
    touchgfx::ButtonWithLabel buttonWithLabel1_1;
    touchgfx::ButtonWithLabel buttonWithLabel1;
    touchgfx::TextArea textArea2;

    /*
     * Wildcard Buffers
     */
    static const uint16_t MAIN_TEXTTEMPERATURE_SIZE = 3;
    touchgfx::Unicode::UnicodeChar Main_TextTemperatureBuffer[MAIN_TEXTTEMPERATURE_SIZE];
    static const uint16_t MAIN_TEXTILLUMINANCE_SIZE = 3;
    touchgfx::Unicode::UnicodeChar Main_TextIlluminanceBuffer[MAIN_TEXTILLUMINANCE_SIZE];

private:

    /*
     * Canvas Buffer Size
     */
    static const uint32_t CANVAS_BUFFER_SIZE = 12000;
    uint8_t canvasBuffer[CANVAS_BUFFER_SIZE];

    /*
     * Callback Declarations
     */
    touchgfx::Callback<MainScreenViewBase, const touchgfx::AbstractDataGraph&, const touchgfx::AbstractDataGraph::GraphClickEvent&> graphClickedCallback;
    touchgfx::Callback<MainScreenViewBase, const touchgfx::AbstractDataGraph&, const touchgfx::AbstractDataGraph::GraphDragEvent&> graphDraggedCallback;

    /*
     * Callback Handler Declarations
     */
    void graphClickedCallbackHandler(const touchgfx::AbstractDataGraph& src, const touchgfx::AbstractDataGraph::GraphClickEvent& value);
    void graphDraggedCallbackHandler(const touchgfx::AbstractDataGraph& src, const touchgfx::AbstractDataGraph::GraphDragEvent& value);

};

#endif // MAINSCREENVIEWBASE_HPP
