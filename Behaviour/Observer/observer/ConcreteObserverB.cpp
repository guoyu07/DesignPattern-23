/*
 * ConcreteObserverB.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#include "ConcreteObserverB.h"

using namespace observer;

ConcreteObserverB::ConcreteObserverB()
{
	// TODO Auto-generated constructor stub

}

ConcreteObserverB::~ConcreteObserverB()
{
	// TODO Auto-generated destructor stub
}

void ConcreteObserverB::notify(const std::string & str)
{
	std::cout << "event message in concrete obs B: " << str << std::endl;
}

