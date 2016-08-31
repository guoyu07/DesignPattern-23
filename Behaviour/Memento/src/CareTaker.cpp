/*
 * CareTaker.cpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 */

#include "../inc/CareTaker.hpp"

CareTaker* CareTaker::m_instance = 0;

CareTaker::CareTaker()
	:_textMemento("")
{}

CareTaker::~CareTaker()
{
	delete m_instance;
}

CareTaker* CareTaker::getInstance()
{
	if(!m_instance)
		m_instance = new CareTaker();

	return m_instance;
}
