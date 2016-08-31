/*
 * ConcreteObserverB.h
 *
 *  Created on: Jul 18, 2016
 *      Author: developer
 */

#ifndef OBSERVER_CONCRETEOBSERVERB_H_
#define OBSERVER_CONCRETEOBSERVERB_H_

#include "Observer.h"

namespace observer
{

	class ConcreteObserverB : public Observer
	{
	public:
		ConcreteObserverB();
		virtual ~ConcreteObserverB();

		void notify(const std::string & str) override;
	};

} /* namespace observer */

#endif /* OBSERVER_CONCRETEOBSERVERB_H_ */
