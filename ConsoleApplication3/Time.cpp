#pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
#include "Time.h"
using namespace std;

void Time::NowTime() 
{
	cout << "Hour: " << dt1->tm_hour << " Min: " << dt1->tm_min << " Sec: " << dt1->tm_sec << endl;
}


