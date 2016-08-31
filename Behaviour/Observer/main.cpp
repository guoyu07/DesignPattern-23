#include <iostream>
#include "subject/Subject.h"
#include "observer/Observer.h"
#include "observer/ConcreteObserverA.h"
#include "observer/ConcreteObserverB.h"

using namespace subject;
using namespace observer;

int main(int argc, char* argv[])
{
	Subject s;
	ConcreteObserverA a;
	ConcreteObserverB b;

	s.registerObserver(&a);
	s.registerObserver(&b);

	s.notify("hello event");
	s.notify("more message");

	s.unregisterObserver(&a);
	s.unregisterObserver(&b);

	return 0;
}
