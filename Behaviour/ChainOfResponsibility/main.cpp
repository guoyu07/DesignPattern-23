#include <memory>
#include "Logger.h"
#include "ATM.h"

using namespace std;

static std::shared_ptr<AbstractLogger> getChainOfLogger()
{
	auto errorLogger = std::make_shared<ErrorLogger>(AbstractLogger::ERROR);
	auto outputLogger = std::make_shared<OutputLogger>(AbstractLogger::INFO);
	auto standardLogger = std::make_shared<StandardLogger>(AbstractLogger::DEBUG);

	errorLogger->setNextLogger(outputLogger);
	outputLogger->setNextLogger(standardLogger);

	return errorLogger;
}

static std::shared_ptr<MoneyHandler> getChainOfATM()
{
	auto hundredHandler = std::make_shared<HundredHandler>();
	auto fiftyHandler = std::make_shared<FiftyHandler>();
	auto twentyHandler = std::make_shared<TwentyHandler>();
	auto tenHandler = std::make_shared<TenHandler>();

	hundredHandler->setNextHandler(fiftyHandler);
	fiftyHandler->setNextHandler(twentyHandler);
	twentyHandler->setNextHandler(tenHandler);

	return hundredHandler;
}

int main()
{
	auto atmChain = getChainOfATM();
	atmChain->calculate(1285);
	return 0;
}
