#include "Timer.h"
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>

using namespace std;

void Timer::PrintTimer()
{
    cout << seconds << endl;
}

void Timer::SetInterval(int seconds)
{
    interval = seconds;
}

void Timer::Start()
{
    while (true) {
        PrintTimer();
        if (interval == seconds) {
            cout << "Timer elapsed!" << endl;
            Elapsed();
            break;
        }
        this_thread::sleep_for(chrono::seconds(1));
        seconds++;
    }
}

void Timer::Elapsed()
{
    cout << "Your func" << endl;
}
