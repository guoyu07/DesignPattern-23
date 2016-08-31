/*
 * toy.h
 *
 *  Created on: Aug 4, 2016
 *      Author: developer
 */

#ifndef INC_TOY_HPP_
#define INC_TOY_HPP_

#include <string>

namespace bootcamp
{
	class toy
	{
		public:

			toy();

			virtual ~toy();

			std::string getName();

		protected:

			void setName(std::string name);

		private:

			std::string myName;
	};
}

#endif /* INC_TOY_HPP_ */
