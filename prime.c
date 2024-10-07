// primes.c
#include <math.h>
#include <stdio.h>

int isprime(int p){
    if (p == 0 || p == 1)
        return 0;
    int limit = (int)sqrt(p);
    for(int d=2; d <= limit; d++)
    {
        if (p%d == 0)
            return 0; 
    }

    return 1;
}

int main(){
    int n =0;
    for(int i=0; i < 100000; i++)
    {
        if (isprime(i) == 1)
            n += 1;
    }
    printf("%d\n", n);
    return 0;
}