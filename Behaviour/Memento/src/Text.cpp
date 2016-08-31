/*
 * Text.cpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 */

#include "../inc/Text.hpp"

Text::Text(std::string str)
{
	_value = str;
}

Text::~Text()
{}

TextMemento Text::createMemento()
{
	return TextMemento(_value);
}

void Text::reinstateMemento(const TextMemento mem)
{
	_value = mem._state;
}

void Text::setText(std::string val)
{
	_value = val;
}

std::string Text::getText()
{
	return _value;
}
