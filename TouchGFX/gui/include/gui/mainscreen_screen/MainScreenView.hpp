#ifndef MAINSCREENVIEW_HPP
#define MAINSCREENVIEW_HPP

#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <gui/mainscreen_screen/MainScreenPresenter.hpp>
#include <touchgfx/widgets/graph/AbstractDataGraph.hpp>

class MainScreenView : public MainScreenViewBase
{
public:
    MainScreenView();
    virtual ~MainScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void handleTickEvent();
    
    virtual void graph1Clicked(AbstractDataGraph::GraphClickEvent value);
    virtual void graph1Dragged(AbstractDataGraph::GraphDragEvent value);
   
protected:
    int tickCounter;
    int digitalHours;
    int digitalMinutes;
    int digitalSeconds;

    virtual void updateInfoWidgetPosition(int index);

};

#endif // MAINSCREENVIEW_HPP
