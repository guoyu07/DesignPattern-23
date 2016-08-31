/*
 * carFactory.hpp
 *
 *  Created on: Aug 4, 2016
 *      Author: developer
 */

#ifndef INC_FACTORY_CARFACTORY_HPP_
#define INC_FACTORY_CARFACTORY_HPP_

#include "toyFactory.hpp"

namespace bootcamp
{
	class carFactory : public toyFactory
	{
		public:

			carFactory();

			virtual ~carFactory();

			toy* createToy();
	};
}

#endif /* INC_FACTORY_CARFACTORY_HPP_ */
