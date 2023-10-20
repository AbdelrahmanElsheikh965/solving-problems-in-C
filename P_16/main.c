#include <stdio.h>
#include <stdlib.h>

reverseNumber(int number);

int main()
{
    /*
        Write a program to reverse a number.
    */

    int number;
    printf("Enter a number to be reversed\n");

    if(1 == scanf("%i", &number))
    {
        printf("Reverse of %i is %d \n", number, reverseNumber(number));
    }else
    {
        printf("Only numbers are allowed. \n");
    }

    return 0;
}

reverseNumber(int number)
{
    int result = 0;

    while(number != 0)
    {
        result = result * 10 + number % 10;
        number /= 10;
    }
    return result;
}
