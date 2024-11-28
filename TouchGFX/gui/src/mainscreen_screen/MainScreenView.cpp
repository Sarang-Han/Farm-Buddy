#include <gui/mainscreen_screen/MainScreenView.hpp>

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

    Unicode::snprintf(Main_TextTemperatureBuffer, MAIN_TEXTTEMPERATURE_SIZE, "%d", tickCounter);

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
    }
    Main_TextTemperature.invalidate();
}
