/*
 * dollFactory.hpp
 *
 *  Created on: Aug 4, 2016
 *      Author: developer
 */

#ifndef INC_FACTORY_DOLLFACTORY_HPP_
#define INC_FACTORY_DOLLFACTORY_HPP_

#include "toyFactory.hpp"

namespace bootcamp
{
	class dollFactory : public toyFactory
	{
		public:

			dollFactory();

			virtual ~dollFactory();

			toy* createToy();
	};
}

#endif /* INC_FACTORY_DOLLFACTORY_HPP_ */
