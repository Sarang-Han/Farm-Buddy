#include <gui/mainscreen_screen/MainScreenView.hpp>
#include <math.h>


MainScreenView::MainScreenView()
{

}

void MainScreenView::setupScreen()
{
    MainScreenViewBase::setupScreen();
    digitalHours = digitalClock.getCurrentHour();
    digitalMinutes = digitalClock.getCurrentMinute();
    digitalSeconds = digitalClock.getCurrentSecond();
}

void MainScreenView::tearDownScreen()
{
    MainScreenViewBase::tearDownScreen();
}


void MainScreenView::handleTickEvent()
{
    tickCounter++;
    
    if (tickCounter % 60 == 0)
    {
        if (++digitalSeconds >= 60)
        {
            digitalSeconds = 0;
            if (++digitalMinutes >= 60)
            {
                digitalMinutes = 0;
                if (++digitalHours >= 24)
                {
                    digitalHours = 0;
                }
            }
        }

        // Update the clock
        digitalClock.setTime24Hour(digitalHours, digitalMinutes, digitalSeconds);
        
        // Calculate and update the temperature
        int currentTemperature = 23 + (tickCounter / 60 % 3); // 23, 24, 25 반복
        Unicode::snprintf(Main_TextTemperatureBuffer, MAIN_TEXTTEMPERATURE_SIZE, "%d", currentTemperature);
        Main_TextTemperature.invalidate();

        // 그래프
        dynamicGraph1.addDataPoint(currentTemperature);
    }
}


void MainScreenView::graph1Clicked(AbstractDataGraph::GraphClickEvent value)
{
    
    if(value.clickEvent.getType() == ClickEvent::PRESSED)
        {
            //touchgfx_printf("Hi %i\n", dynamicGraph1.indexToDataPointYAsInt(value.index)); 필요없는거임

            updateInfoWidgetPosition(value.index);
        }
}

void MainScreenView::graph1Dragged(AbstractDataGraph::GraphDragEvent value)
{
        //touchgfx_printf("Hi2 %i\n", dynamicGraph1.indexToDataPointYAsInt(value.index)); 필요없는거임

        updateInfoWidgetPosition(value.index);
}

void MainScreenView::updateInfoWidgetPosition(int index)
{
    infoWidget1.moveTo(
                dynamicGraph1.getX() + dynamicGraph1.indexToScreenX(index) + dynamicGraph1.getGraphAreaMarginLeft(),
                dynamicGraph1.getY() + dynamicGraph1.indexToScreenY(index) + dynamicGraph1.getGraphAreaMarginTop());

    infoWidget1.updateString(dynamicGraph1.indexToDataPointYAsInt(index));
}