
#include <iostream>
#include <chrono>

//create StopWatch class
class StopWatch {
private:
    //time in second sand milliseconds as doubles
    double seconds;
    double milliseconds;

    //data members created
    std::chrono::time_point<std::chrono::system_clock> _start, _end;

public:

    StopWatch() {
        //begins the stopwatch
        _start = std::chrono::system_clock::now();
    }

    ~StopWatch() {
        _end = std::chrono::system_clock::now();
        //measures the time between start and finish as a double
        std::chrono::duration<double> elapsed_seconds = _end - _start;

    }

    //start stop constructor
    //two additional methods for seconds and milliseconds.


};

