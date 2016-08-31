#ifndef INC_ATM_H_
#define INC_ATM_H_

#include <iostream>
#include <memory>



class MoneyHandler
{
	protected:
		std::shared_ptr<MoneyHandler> nextHandler;
		virtual int handle(int& amount_) = 0;

	public:
		MoneyHandler(){}
		virtual ~MoneyHandler(){}

	void setNextHandler(std::shared_ptr<MoneyHandler> next_)
	{
		this->nextHandler = next_;
	}

	void calculate(int sum_)
	{
		// gives responsibility back to base if you can't fully handle and call next!
		if( (handle(sum_) != 0) && (nextHandler != nullptr) )
			nextHandler->calculate( sum_);
		else
			std::cout << "sorry bro, rest left: " << sum_ << std::endl;
	}
};

class HundredHandler : public MoneyHandler
{
	public:
		HundredHandler(){}
	protected:
		int handle(int& amount_) override
		{
			int i = amount_ / 100;		//calculate how much notes we give out
			amount_ = amount_ % 100;	//calculate rest amount

			std::cout << "HundredHandler gives out: " << i << " notes!" << std::endl;

			return amount_;
		}
};

class FiftyHandler : public MoneyHandler
{
	public:
		FiftyHandler(){}
	protected:
		int handle(int& amount_) override
		{
			int i = amount_ / 50;		//calculate how much notes we give out
			amount_ = amount_ % 50;		//calculate rest amount

			std::cout << "FiftyHandler gives out: " << i << " notes!" << std::endl;

			return amount_;
		}
};

class TwentyHandler : public MoneyHandler
{
	public:
		TwentyHandler(){}
	protected:
		int handle(int& amount_) override
		{
			int i = amount_ / 20;		//calculate how much notes we give out
			amount_ = amount_ % 20;	//calculate rest amount

			std::cout << "TwentyHandler gives out: " << i << " notes!" << std::endl;

			return amount_;
		}
};

class TenHandler : public MoneyHandler
{
	public:
		TenHandler(){}
	protected:
		int handle(int& amount_) override
		{
			int i = amount_ / 10;		//calculate how much notes we give out
			amount_ = amount_ % 10;	//calculate rest amount

			std::cout << "TenHandler gives out: " << i << " notes!" << std::endl;

			return amount_;
		}
};



#endif /* INC_ATM_H_ */
