/*
 * Text.hpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 */

#ifndef INC_TEXT_HPP_
#define INC_TEXT_HPP_

#include <iostream>
#include "TextMemento.hpp"

class Text
{
public:
	Text(std::string str);
	~Text();
	TextMemento createMemento();
	void reinstateMemento(const TextMemento mem);
	void setText(std::string val);
	std::string getText();
private:
	std::string _value;
};


#endif /* INC_TEXT_HPP_ */
