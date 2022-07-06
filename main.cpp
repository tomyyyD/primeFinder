#include <iostream>
#include "Sieve.h"
#include <chrono>

int main() {
    const int NUMPRIMES = 10000;

    Sieve mySieve(NUMPRIMES);
    auto start = std::chrono::high_resolution_clock::now();
    int* primesList = mySieve.computePrimes();
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);

    // just printing out the list you know da vibes
//    for (int i = 0; i < NUMPRIMES; i++)
//    {
//        std::cout << primesList[i] << " | ";
//    }
//    std::cout << std::endl;

    std::cout << duration.count() << std::endl;
    std::cout << "Prime Number #" << NUMPRIMES << " is: " << primesList[NUMPRIMES-1] << std::endl;

    return 0;
}
