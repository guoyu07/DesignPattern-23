/*
 * CareTaker.hpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 */

#ifndef INC_CARETAKER_HPP_
#define INC_CARETAKER_HPP_

#include "TextMemento.hpp"
#include <iostream>

class CareTaker
{
public:
	TextMemento _textMemento;
	CareTaker();
	~CareTaker();
	static CareTaker* getInstance();
private:
	static CareTaker* m_instance;
};



#endif /* INC_CARETAKER_HPP_ */
