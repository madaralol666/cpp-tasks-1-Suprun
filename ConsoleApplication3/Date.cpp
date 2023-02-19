#pragma warning(disable : 4996)
#include "Date.h"
#include <iostream>
using namespace std;

void Date::printToday()
{
	if (dt1->tm_mday ==1)
		cout << "Month: " << 1 + dt1->tm_mon - 1 << endl;
	else
		cout << "Month: " << 1 + dt1->tm_mon << endl;
	if (dt1->tm_wday == 0)
		cout << "Day: " << 7 << endl;
	else
		cout << "Day: " << dt1->tm_wday << endl;
}

void Date::printYesterday()
{
	if (dt1->tm_mday == 1)
		cout << "Month: " << 1 + dt1->tm_mon - 1 << endl;
	else
		cout << "Month: " << 1 + dt1->tm_mon << endl;
	if (dt1->tm_wday == 0)
		cout << "Day: " << 7-1 << endl;
	else
		cout << "Day: " << dt1->tm_wday-1 << endl;
}

void Date::printTomorrow() 
{
	if (dt1->tm_mday == 1)
		cout << "Month: " << 1 + dt1->tm_mon - 1 << endl;
	else
		cout << "Month: " << 1 + dt1->tm_mon << endl;
	if (dt1->tm_wday == 0)
		cout << "Day: " << 7 + 1 << endl;
	else
		cout << "Day: " << dt1->tm_wday + 1 << endl;
}
