#include <iostream>
#include "EventLogger.h"

void verifySingletonPattern() {
	EventLogger& firstLogger = EventLogger::getGlobalInstance();
	EventLogger& secondLogger = EventLogger::getGlobalInstance();
	
	if (&firstLogger == &secondLogger) {
		std::cout << "Verification: firstLogger and secondLogger reference the same instance." << std::endl;
	} else {
		std::cout << "Verification: firstLogger and secondLogger are different instances." << std::endl;
	}
	
	firstLogger.writeLog("Log entry from firstLogger.");
	secondLogger.writeLog("Log entry from secondLogger.");
	
	std::cout << "\nMemory address of firstLogger: " << &firstLogger << std::endl;
	std::cout << "Memory address of secondLogger: " << &secondLogger << std::endl;
}

void executeTask() {
	EventLogger::getGlobalInstance().writeLog("Executing task...");
}

void handleUserInput() {
	EventLogger::getGlobalInstance().writeLog("Handling user input...");
}

int main() {
	verifySingletonPattern();
	executeTask();
	handleUserInput();
	return 0;
}
