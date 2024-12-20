#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>



//the function skips 2
void printPrimes(int limit)
{
    int arrayLen = limit/2;
    bool *isPrime = malloc(arrayLen * sizeof(bool));
    for(int i = 1; i < arrayLen; i++)
        isPrime[i] = true;
    isPrime[0] = false; // 1 is not prime

    double sqrtLimit = sqrt(limit);

    for(int i = 3; i < limit; i+=2)
    {
        int product;
        for(int j = 3; j < sqrtLimit; j+=2)
        {
            if(j > i)
                break;
            if((product = i * j) <= limit)
                isPrime[(product-1)/2] = false;
        }
    }

    for(int i = 0; i < arrayLen; i++)
    {
        if(isPrime[i])
            printf("%d ", 2*i +1);
    }

}