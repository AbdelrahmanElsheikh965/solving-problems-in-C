#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a C program that take two integers from the user
        and print the results of this equation:
        Result = ((num1 + num2) * 3) – 10
    */

    int number1, number2;
    printf("Enter two integers: \n");

    // scanf successfully returned 2 means correct input.
    if(2 == scanf("%i %i", &number1, &number2))
    {
        printf("Result = %i \n", ((number1 + number2) * 3) - 10);
    }else
    {
        printf("Only numbers allowed \n");
    }

    return 0;
}
