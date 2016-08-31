#include "../../inc/factory/dollFactory.hpp"
#include "../../inc/product/doll.hpp"

using namespace bootcamp;

dollFactory::dollFactory()
{

}

dollFactory::~dollFactory()
{

}

toy* dollFactory::createToy()
{
	toy* myToy = new bootcamp::doll();

	return myToy;
}
