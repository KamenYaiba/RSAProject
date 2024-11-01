#include <stdlib.h>


int checkCoprime(int n, int m)
{
    return gcd(n, m) == 1;
}


int gcd(int n, int m)
{
    int gcd = __min(n, m);
    while(gcd > 1)
    {
        if(n % gcd == 0 && m % gcd == 0)
            return gcd;
        gcd--;
    }
    return 1;
}