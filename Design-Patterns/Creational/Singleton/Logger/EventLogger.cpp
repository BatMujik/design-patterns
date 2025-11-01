#include "EventLogger.h"

EventLogger& EventLogger::getGlobalInstance() {
	static EventLogger singleInstance;
	return singleInstance;
}

void EventLogger::writeLog(const std::string& message) {
	std::cout << "[EVENT] " << message << std::endl;
}

EventLogger::EventLogger() {
	std::cout << "EventLogger has been initialized." << std::endl;
}

EventLogger::~EventLogger() {
	std::cout << "EventLogger has been terminated." << std::endl;
}
