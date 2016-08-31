#include <string>
#include "../../inc/product/toy.hpp"

using namespace bootcamp;

toy::toy()
{

}

toy::~toy()
{

}

void toy::setName(std::string name)
{
	myName = name;
}

std::string toy::getName()
{
	return myName;
}
