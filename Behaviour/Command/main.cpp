#include <memory>
#include "Switch.h"

using namespace std;

int main()
{
	enum class SwitchCommand
	{
		ON,
		OFF
	};

	SwitchCommand sc = SwitchCommand::ON;

	std::shared_ptr<ISwitchable> lamp = std::make_shared<Light>();

	std::shared_ptr<ICommand> switchClose = std::make_shared<CloseSwitchCommand>(lamp);
	std::shared_ptr<ICommand> switchOpen = std::make_shared<OpenSwitchCommand>(lamp);

	Switch _switch(switchClose, switchOpen);

	switch(sc)
	{
		case SwitchCommand::ON :
		{
			_switch.open();
			break;
		}
		case SwitchCommand::OFF :
		{
			_switch.close();
			break;
		}
	}

	return 0;
}
