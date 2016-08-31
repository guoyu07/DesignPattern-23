/*
 * Observer.h
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#ifndef OBSERVER_OBSERVER_H_
#define OBSERVER_OBSERVER_H_

#include <iostream>

namespace observer{

	class Observer
	{
	public:
		Observer();
		virtual ~Observer();

		//Interface
		virtual void notify(const std::string & str);
	};

} // namespace oberver;

#endif /* OBSERVER_OBSERVER_H_ */
