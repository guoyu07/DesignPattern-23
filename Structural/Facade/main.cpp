#include <iostream>

/*
 * main.cpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 *
 *  Facade pattern: provides a unified - simplified interface to a complex subsystem or set of interfaces.
 *  It provides a higher level interface simultaneously decoupling the client from the complex subsystem.
 *
 *  An example to help you understand .. a cab driver.
 *  You tell the cab driver 'Take me to PointX' (unified simplified high-level interface) who then begins on a sequence of actions (turns the key, changes gears, presses the accelerator, etc...)
 *  to perform the task. He abstracts away the complexity of underlying subsystems (gearbox, engine, etc.) so that you don't have to worry about them.
 *  The driver also decouples you from the actual vehicle used... you do not directly interface with the car.
 *  You could potentially give him a Merc but your interface to the Driver would still be TakeMeTo( X )..
 *  you're not tied down to any specific model/make of the car.
 *
 *  In a real world example, you'll find facades where you interface with third party components or libraries.
 *  You don't want your code to depend on a specific vendor, so you introduce a facade interface to decouple.
 *  Also you'll simplify this interface, e.g. your facade interface would have a method called SendData( string )
 *  but internally the implementation may call n methods on m sub-packages in a specific order to get the task done.
 *
 *  http://stackoverflow.com/questions/249581/explain-facade-pattern-with-c-example
 *  https://sourcemaking.com/design_patterns/facade/cpp/1
 *  https://en.wikipedia.org/wiki/Facade_pattern
 */

class Engine
{
public:
	void start()
	{
		std::cout << "Engine started!" << std::endl;
	}
};


class Headlights
{
public:
	void turnOn()
	{
		std::cout << "Lights turned on!" << std::endl;
	}
};

class Doors
{
public:
	void lockDoors()
	{
		std::cout << "The doors locked!" << std::endl;
	}
};

/**
 * Facade class
 *
 * Makes an existing complex software library easier to use
 * by providing a simpler interface for common tasks.
 */
class Car
{
public:
	void turnIgnitionKeyOn()
	{
		_engine.start();
		_headlights.turnOn();
		_doors.lockDoors();
	}

private:
	Engine _engine;
	Headlights _headlights;
	Doors _doors;
};

int main()
{
	//Consuming facade
	Car car;
	car.turnIgnitionKeyOn();

	return 0;
}

