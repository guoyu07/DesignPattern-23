/*
 * ConcreteObserverA.h
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#ifndef OBSERVER_CONCRETEOBSERVERA_H_
#define OBSERVER_CONCRETEOBSERVERA_H_

#include "Observer.h"

namespace observer
{

	class ConcreteObserverA : public Observer
	{
	public:
		virtual ~ConcreteObserverA();
		ConcreteObserverA();

		void notify(const std::string & str) override;
	};

}

#endif /* OBSERVER_CONCRETEOBSERVERA_H_ */
