#include <stdio.h>
#include <time.h>


int isPrime(int n) 
{
    for (int i = 2; i <= n/2; i++) {
        if (!(n%i))
            return 0;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int limit = 450001;
    int numPrimes = 0;
    clock_t t = clock();
    for (int i = 2; i < limit; i++) {
        numPrimes += isPrime(i);
    }
    t = clock() - t;
    printf("\n%s: primes found : %d in %f sec\n", argv[0], numPrimes, (float)(t) / CLOCKS_PER_SEC);
}


