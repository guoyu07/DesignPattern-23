/*
 * ConcreteObserverA.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#include "ConcreteObserverA.h"

using namespace observer;

ConcreteObserverA::~ConcreteObserverA()
{
	// TODO Auto-generated destructor stub
}

ConcreteObserverA::ConcreteObserverA()
{
	// TODO Auto-generated constructor stub

}

void ConcreteObserverA::notify(const std::string & str)
{
	std::cout << "event message concrete obs A: " << str << std::endl;
}
