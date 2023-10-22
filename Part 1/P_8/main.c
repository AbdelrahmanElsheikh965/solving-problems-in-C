#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program that reads a positive integer and
        checks if it is a perfect square
    */

    int number;
    printf("Enter a positive integer number: \n");

    if(1 == scanf("%i", &number) && number > 0)
    {
        float fnumber = sqrt(number);
        printf( fnumber == (int)fnumber ? "it is a perfect square \n" : "it is NOT a perfect square \n");
    }else
    {
        printf("Only positive numbers are allowed \n");
    }

    return 0;
}
