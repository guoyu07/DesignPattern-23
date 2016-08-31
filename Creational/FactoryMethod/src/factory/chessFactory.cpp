#include "../../inc/factory/chessFactory.hpp"
#include "../../inc/product/chess.hpp"

using namespace bootcamp;

chessFactory::chessFactory()
{

}

chessFactory::~chessFactory()
{

}

toy* chessFactory::createToy()
{
	toy* myToy = new bootcamp::chess();

	return myToy;
}
