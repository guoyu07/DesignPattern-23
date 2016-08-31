/*
 * Observer.cpp
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#include "Observer.h"

using namespace observer;

Observer::Observer()
{

}

Observer::~Observer()
{

}

void Observer::notify(const std::string & str)
{
	std::cout << "event message in base: " << str << std::endl;
}
