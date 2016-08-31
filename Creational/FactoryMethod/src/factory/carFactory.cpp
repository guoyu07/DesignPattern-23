#include "../../inc/factory/carFactory.hpp"
#include "../../inc/product/car.hpp"

using namespace bootcamp;

carFactory::carFactory()
{

}

carFactory::~carFactory()
{

}

toy* carFactory::createToy()
{
	toy* myToy = new bootcamp::car();

	return myToy;
}
