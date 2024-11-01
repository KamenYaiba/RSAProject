#include "helpingFuncs.c"


void encrypt(unsigned long long N, unsigned long long E, int message[], int len)
{
    for(int i = 0; i < len; i++)
        message[i] = optimizedPow(message[i], E) % N;
}


void decrypt(unsigned long long N, unsigned long long D, int message[], int len)
{
    for(int i = 0; i < len; i++)
        message[i] = optimizedPow(message[i], D) % N;
}