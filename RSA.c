#include <stdio.h>

void encrypt(unsigned long long N, unsigned long long E, unsigned long long message[], int len)
{
    for(int i = 0; i < len; i++)
        message[i] = optimizedPow(message[i], E) % N;
}


void decrypt(unsigned long long N, unsigned long long D, unsigned long long message[], int len)
{
    for(int i = 0; i < len; i++)
        message[i] = optimizedPow(message[i], D) % N;
}


unsigned long long optimizedPow(unsigned long long base, unsigned long long exp)
{
    if(base == 1 || base == 0 || exp == 1)
        return base;
    if(exp == 0)
        return 1;

    unsigned long long res = 1;

    while(exp)
    {
        if(!(exp & 1))
        {
            exp /= 2;
            res *= res;
        }
        else
        {
            res *= base;
            exp--;
        }
    }

    return res;
}


int main()
{
    printf("%u", optimizedPow(2, 5));
}
