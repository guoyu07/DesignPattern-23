#include <iostream>
#include <functional>
#include "subject/Subject.h"

/**
 * Super basic struct to show the notifications from subject.
 * A owns method foo which is non-static.
 */
struct A
{
	/**
	 * Class-Method, to register and hopefully be called back :)
	 */
	void foo()
	{
		std::cout << "foo()\n";
	}
};

/**
 * Super basic struct to show the notifications from subject.
 * B owns method bar which is static.
 */
struct B
{
	/**
	 * Static Class-Method, to register and hopefully be called back :)
	 */
	static void bar()
	{
		std::cout << "bar()\n";
	}
};

int main(int argc, char* argv[])
{
	Subject s;	 /// our subject

	A a;		/// first class to register
	B b;		/// second class to register

	/// binging
	s.registerObserver(Event::RED, &B::bar);
	s.registerObserver(Event::BLUE, std::bind(&A::foo, &a));
	s.registerObserver(Event::MAGENTA, std::bind(&A::foo, &a));

	///calling
	s.notify(Event::RED);
	s.notify(Event::BLUE);
	s.notify(Event::MAGENTA);


	return 0;
}
