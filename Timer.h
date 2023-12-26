#ifndef TIMER_H_
#define TIMER_H_

#include <iostream>
#include <chrono>

class Timer {
public:
    void start();
    void stop();
    void print(const std::string& label);

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> start_time;
    std::chrono::time_point<std::chrono::high_resolution_clock> stop_time;
};


#endif 