/*
 * TextMemento.hpp
 *
 *  Created on: Aug 3, 2016
 *      Author: developer
 */

#ifndef INC_TEXTMEMENTO_HPP_
#define INC_TEXTMEMENTO_HPP_

#include <iostream>

class TextMemento
{
public:
	TextMemento();
	~TextMemento();
	TextMemento(std::string str);
private:
	friend class Text;
	std::string _state;
};

#endif /* INC_TEXTMEMENTO_HPP_ */
