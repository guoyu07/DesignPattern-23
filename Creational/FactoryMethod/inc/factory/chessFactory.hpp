/*
 * chessFactory.hpp
 *
 *  Created on: Aug 4, 2016
 *      Author: developer
 */

#ifndef INC_FACTORY_CHESSFACTORY_HPP_
#define INC_FACTORY_CHESSFACTORY_HPP_

#include "toyFactory.hpp"

namespace bootcamp
{
	class chessFactory : public toyFactory
	{
		public:

			chessFactory();

			virtual ~chessFactory();

			toy* createToy();
	};
}

#endif /* INC_FACTORY_CHESSFACTORY_HPP_ */
