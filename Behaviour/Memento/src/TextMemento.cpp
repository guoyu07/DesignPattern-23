/*
 * TextMemento.cpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 */

#include "../inc/TextMemento.hpp"

TextMemento::TextMemento()
{}

TextMemento::~TextMemento()
{}

TextMemento::TextMemento(std::string str)
{
	_state = str;
}
