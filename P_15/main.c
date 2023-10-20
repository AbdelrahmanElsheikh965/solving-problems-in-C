#include <stdio.h>
#include <stdlib.h>

getPower(int number, int power);

int main()
{
    /*
        Write a program to calculate the power of a number.
        The number and its power are input from user.
    */

    int number, power;
    printf("Enter a number and its power\n");

    if(2 == scanf("%i %i", &number, &power))
    {
        printf("%i Power of %i = %d \n", number, power, getPower(number, power));
    }else
    {
        printf("Only numbers are allowed. \n");
    }

    return 0;
}

getPower(int number, int power)
{
    // Base case
    switch(power)
    {
        case 0:
            return 1;
        case 1:
            return number;
    }
    return number * getPower(number, power-1);
}



