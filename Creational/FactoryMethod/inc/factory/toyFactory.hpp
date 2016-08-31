/*
 * toyFactory.hpp
 *
 *  Created on: Aug 4, 2016
 *      Author: developer
 */

#ifndef INC_FACTORY_TOYFACTORY_HPP_
#define INC_FACTORY_TOYFACTORY_HPP_

#include "../product/toy.hpp"

namespace bootcamp
{
	class toyFactory
	{
		public:
			virtual toy* createToy() = 0;
	};
}

#endif /* INC_FACTORY_TOYFACTORY_HPP_ */
