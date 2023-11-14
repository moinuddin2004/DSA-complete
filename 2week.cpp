#include <iostream>
#include <ctime>
#include <time.h>
#include <chrono>
using namespace std;

int main()
{

    std::chrono::time_point<std::chrono::system_clock> start, end;

    start = std::chrono::system_clock::now();
    int sum, i, j;
    sum = 0;
    for (int i = 1; i < 5; i=i*2)
    {
       
            sum++;

    }

    end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::time_t end_time = std::chrono::system_clock::to_time_t(end);

    std::cout << "finished computation at " << std::ctime(&end_time)
              << "elapsed time: " << elapsed_seconds.count() << "s\n";

    return 0;
}
