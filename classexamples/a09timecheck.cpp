#include <iostream>
#include <chrono>

int main() {
    // Start the timer
    auto start = std::chrono::high_resolution_clock::now();

    int x[]={2,3,4,5,6};
    // Your code here (the portion you want to measure)
    for(int i=0; i < 1000000; i++);


    // Stop the timer
    auto end = std::chrono::high_resolution_clock::now();

    // Calculate the duration
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start).count();

    std::cout << "Execution time: " << duration << " microseconds" << std::endl;

    return 0;
}

#if 0

#include <iostream>
#include <ctime>

int main() {
    clock_t tStart = clock();

    // Your code here (the portion you want to measure)

    std::cout << "Time taken: " << static_cast<double>(clock() - tStart) / CLOCKS_PER_SEC << " seconds" << std::endl;

    return 0;
}



#endif

#if 0
/usr/bin/time ./YourProgram

#endif
