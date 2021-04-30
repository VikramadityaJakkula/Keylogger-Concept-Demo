#ifndef TIMER_H
#define TIMER_H

#include<thread>
#include<chrono>


class timerclear
{
    std::thread Thread;
    bool Alive = false;
    long CallNumber = -1L;
    long Repeat_Count = -1L;

    std::chrono::milliseconds interval = std::chrono::milliseconds(0);
    std::function <void(void)> funct = nullptr;

    void SleepRun()
    {
        std::this_thread::sleep_for(interval);
        if(Alive)
            function()();

    }

    void ThreadFunc()
    {
        if(CallNumber == Infinite)
            while(Alive)
                SleepRun();
        else
            while(Repeat_Count--)
                SleepRun();


    }

public:
    static const long Infinite = -1L;

    Time(){}

    Timer(const std::function<void(void)> &f) : funct (f) {}



};


#endif // TIMER_H
