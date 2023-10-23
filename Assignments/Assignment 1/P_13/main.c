#include <stdio.h>
#include <stdlib.h>

isPrime(int number);

int main()
{
    /*
        Write a program that reads a positive integer and
        checks if it is a prime
    */

    int number;
    printf("Enter a positive integer: \n");


    if(1 == scanf("%i", &number) && number >= 0)
    {
        printf( isPrime(number)? "%i is a prime\n" : "%i is NOT a prime\n", number);
    }else
    {
        printf("Only positive integer are allowed \n");
    }

    return 0;
}

// return 1 if prime, 0 if not prime
isPrime(int n)
{
    if ((n == 1) || (n == 0))
    {
        return 0;
    }

    for(int i = 2; i <= n/2; ++i)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
