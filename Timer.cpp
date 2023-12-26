#include "Timer.h"

void Timer::start() {
    start_time = std::chrono::high_resolution_clock::now();
}

void Timer::stop() {
    stop_time = std::chrono::high_resolution_clock::now();
}

void Timer::print(const std::string& label) {
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop_time - start_time);
    std::cout << label << ": " << duration.count() << " ms" << std::endl;
}

