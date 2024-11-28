#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

Model::Model():
		modelListener(0)
{

}


void Model::tick()
{
	/* if (uxQueueMessageWaiting(msgQueueUARTtoUI) > 0)
	{
		xQueueReceive(msgUARTtoUI, &newValue, 0);

		if(modelListener != 0)
		{
			modelListener->setNewValue(newValue);
		}
	}
	*/
}
