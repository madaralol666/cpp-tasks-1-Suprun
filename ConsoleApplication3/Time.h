#pragma once
class Time
{
time_t now = time(0);
struct tm* dt1 = localtime(&now);
public:
	void NowTime();

};

