#pragma once

#include <iostream>
#include <string>

class EventLogger {
public:
	static EventLogger& getGlobalInstance();
	void writeLog(const std::string& message);

	EventLogger(const EventLogger&) = delete;
	const EventLogger& operator=(const EventLogger&) = delete;

private:
	EventLogger();
	~EventLogger();
};
