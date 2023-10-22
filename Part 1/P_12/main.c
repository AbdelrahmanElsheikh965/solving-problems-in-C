#include <stdio.h>
#include <stdlib.h>

factorial(int);

int main()
{
    /*
        Write a C program that reads a positive integer and
        computes the factorial.
    */

    int number;
    printf("Enter a positive integer: \n");

    if(1 == scanf("%i", &number) && number >= 0)
    {
        printf("Factorial of %i = %lld \n", number, factorial(number));

    }else
    {
        printf("Only positive integer are allowed \n");
    }
    return 0;
}

factorial(int number)
{
    if(number == 1 || number == 0)
    {
        // Base case
        return 1;
    }
    return number * factorial(number-1);
}

