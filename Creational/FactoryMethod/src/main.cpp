#include <iostream>
#include "../inc/factory/toyFactory.hpp"
#include "../inc/factory/carFactory.hpp"
#include "../inc/factory/chessFactory.hpp"
#include "../inc/factory/dollFactory.hpp"
#include "../inc/product/toy.hpp"

using namespace bootcamp;

void displayToyInfo(toy myToy)
{
	std::cout << std::endl << "Your toy name is " << myToy.getName() << std::endl;
}

int main()
{
	std::cout << std::endl << "Welcome to Factory Method design pattern sample." << std::endl << std::endl ;

	std::cout << "The available toys are below:" << std::endl;
	std::cout << "1 - a car" << std::endl;
	std::cout << "2 - a chess" << std::endl;
	std::cout << "3 - a doll" << std::endl;

	std::cout << "Please select your toy (entry the number) : ";
	int toyId = 0;
	std::cin >> toyId;

	//define a toyFactory  variable (the base class).
	toyFactory *myFactory;

	// instantiate the factory variable with a certain factory expected (it can be driven from a user input)
	if(toyId == 1)
	{
		// a car was selected
		carFactory myCarFactory;
		myFactory = &myCarFactory;

	}
	else if(toyId == 2)
	{
		// a chess was selected
		chessFactory myChessFactory;
		myFactory = &myChessFactory;
	}
	else if(toyId == 3)
	{
		// a doll was selected
		dollFactory myDollFactory;
		myFactory = &myDollFactory;
	}
	else
	{
		// incorrect selection.
		std::cout << "Sorry, your selection is unavailable" << std::endl;

		return 1;
	}

	std::cout << std::endl;

	//call the factory object to return the expected product/toy.
	toy* myToy = myFactory->createToy();

	displayToyInfo(*myToy);

	myToy = nullptr;
	myFactory = nullptr;

	return 0;
}
