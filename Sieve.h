//
// Created by Thomas Damiani on 7/4/22.
//

#ifndef PRIMEFINDER_SIEVE_H
#define PRIMEFINDER_SIEVE_H

class Sieve
{
public:
    Sieve(int numPrimes);
    int numPrimesOut();
    int* computePrimes();
private:
    int goal;
};

#endif //PRIMEFINDER_SIEVE_H
