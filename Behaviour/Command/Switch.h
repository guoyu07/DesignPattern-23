#ifndef INC_SWITCH_H_
#define INC_SWITCH_H_

#include <iostream>

class ICommand
{
public:
	ICommand() {};
	virtual ~ICommand() {};
	virtual void execute() = 0;
};

class ISwitchable
{
public:
	ISwitchable() {};
	virtual ~ISwitchable() {};
	virtual void powerOn() = 0;
	virtual void powerOff() = 0;
};

class Switch
{
private:
	std::shared_ptr<ICommand> _closed;
	std::shared_ptr<ICommand> _open;
public:
	Switch(std::shared_ptr<ICommand> closed_, std::shared_ptr<ICommand> open_): _closed(closed_), _open(open_){}
	virtual ~Switch() {}

	void close() { this->_closed->execute(); }
	void open() { this->_open->execute(); }
};

class Light : public ISwitchable
{
public:
	Light() {};
	virtual ~Light() {};
	void powerOn() override { std::cout << "The light is on" << std::endl; }
	void powerOff() override { std::cout << "The light is off" << std::endl; }
};

class CloseSwitchCommand : public ICommand
{
private:
	std::shared_ptr<ISwitchable> _switchable;
public:
	CloseSwitchCommand(std::shared_ptr<ISwitchable> switchable_) : _switchable(switchable_) {}
	virtual ~CloseSwitchCommand() {}
	void execute() { _switchable->powerOff(); }
};

class OpenSwitchCommand : public ICommand
{
private:
	std::shared_ptr<ISwitchable> _switchable;
public:
	OpenSwitchCommand(std::shared_ptr<ISwitchable> switchable_) : _switchable(switchable_) {}
	virtual ~OpenSwitchCommand() {}
	void execute() { _switchable->powerOn(); }
};






#endif /* INC_SWITCH_H_ */
