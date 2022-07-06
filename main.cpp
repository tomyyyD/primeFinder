#include <iostream>
#include "Sieve.h"
#include <chrono>

int main() {
    std::cout << "Hello, World!" << std::endl;
    const int NUMPRIMES = 20000;

    Sieve mySieve(NUMPRIMES);
    auto start = std::chrono::high_resolution_clock::now();
    int* primesList = mySieve.computePrimes();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

//    for (int i = 0; i < NUMPRIMES; i++)
//    {
//        std::cout << primesList[i] << " | ";
//    }
//    std::cout << std::endl;
    std::cout << duration.count() << std::endl;
    std::cout << "Last Prime: " << primesList[NUMPRIMES-1] << std::endl;

    return 0;
}
