//
// Created by Thomas Damiani on 7/5/22.
//
#include "Sieve.h"
#include <iostream>

Sieve::Sieve(int numPrimes)
{
    goal = numPrimes;
};

int Sieve::numPrimesOut()
{
    return goal;
}

int* Sieve::computePrimes(){

    int* primesList = new int[goal];
    primesList[0] = 2;
    int curNum = 3;
    int index = 1;
    while (primesList[goal] == 0)
    {
        bool isPrime = true;
        int testNum = curNum - 2;
        while (testNum > 1){
            if (curNum % testNum == 0)
            {
                isPrime = false;
                break;
            }
            testNum-=2;
        }
        if (isPrime)
        {
            primesList[index] = curNum;
            index++;
        }
        curNum+=2;
    }
    return primesList;
}