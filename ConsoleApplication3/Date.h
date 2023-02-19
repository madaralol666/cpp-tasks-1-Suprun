#pragma once
#include <ctime>
class Date
{
time_t now = time(0);
struct tm* dt1 = localtime(&now);
public:
	void printToday();
	void printYesterday();
	void printTomorrow();
};

