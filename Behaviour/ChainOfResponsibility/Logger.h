#ifndef INC_LOGGERS_H_
#define INC_LOGGERS_H_

#include <iostream>
#include <memory>

class AbstractLogger
{
	protected:
		int level;
		std::shared_ptr<AbstractLogger> nextLogger;
		virtual void write(std::string) = 0;

	public:
		AbstractLogger(int level_) : level(level_){}
		virtual ~AbstractLogger() {}

		static const int INFO 	= 1;
		static const int DEBUG 	= 2;
		static const int ERROR 	= 3;

	void setNextLogger(std::shared_ptr<AbstractLogger> next_)
	{
		this->nextLogger = next_;
	}

	void logMessage(int level_, std::string msg_)
	{
		if(this->level <= level_)
		{
			write(msg_);
		}
		if(nextLogger != nullptr)
		{
			nextLogger->logMessage(level_, msg_);
		}
	}
};

const int AbstractLogger::INFO;
const int AbstractLogger::DEBUG;
const int AbstractLogger::ERROR;

class OutputLogger : public AbstractLogger
{
	public:
		OutputLogger(int level_) : AbstractLogger(level_) {}
	protected:
		void write(std::string msg_) override { std::cout << msg_ << std::endl; }
};

class ErrorLogger : public AbstractLogger
{
	public:
		ErrorLogger(int level_) : AbstractLogger(level_) {}
	protected:
		void write(std::string msg_) override { std::cerr << msg_ << std::endl; }
};

class StandardLogger : public AbstractLogger
{
	public:
		StandardLogger(int level_) : AbstractLogger(level_) {}
	protected:
		void write(std::string msg_) override { std::clog << msg_ << std::endl; }
};			


#endif /* INC_LOGGERS_H_ */
