#include <stdio.h>
#include <stdlib.h>

isPrime(int n);
void displayPrimes(num1, num2);

int main()
{
    /*
        Write a C Function that display Prime Numbers between Intervals (two
        numbers) by Making Function.

    */

    int number1, number2;
    printf("Enter 2 numbers to see Prime Numbers between them. \n");

    if(2 == scanf("%i %i", &number1, &number2) && number1 > 0 && number2 > 0)
    {
       displayPrimes(number1, number2);
    }
    else{
        printf("Only positive integer numbers are allowed. \n");
    }

    return 0;
}

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

displayPrimes(num1, num2)
{
    switch(num1 < num2)
    {
        case 1:
            for(int i = num1; i <= num2; i++)
            {
                printf( isPrime(i)? "%i " : "", i);
            }
            break;

        case 0:
            switch(num1 == num2)
            {
                case 1:
                    printf("Numbers are equal \n");
                    break;
                case 0:
                    for(int i = num2; i <= num1; i++)
                    {
                        printf( isPrime(i)? "%i " : "", i);
                    }
                    break;
            }
            break;
    }
}
