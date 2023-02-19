#pragma once
class Timer
{
private:
    int seconds = 0;
    int interval = 0;
public:
    void PrintTimer();
    void SetInterval(int);
    void Start();
    void Elapsed();
};

