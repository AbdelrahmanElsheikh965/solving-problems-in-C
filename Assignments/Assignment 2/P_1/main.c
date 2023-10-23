#include <stdio.h>
#include <stdlib.h>

getCube(int);

int main()
{
    /*
        Write a C Function that prints the cube of any number.
    */

    int number;
    printf("Enter a number to display its cube \n");

    if(1 == scanf("%i", &number))
    {
        printf("cube of %i = %d \n", number, getCube(number));
    }else
    {
        printf("Only numbers are allowed. \n");
    }

    return 0;
}

getCube(int number)
{
    return number * number * number;
}
