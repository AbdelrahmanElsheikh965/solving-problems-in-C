#include <stdio.h>
#include <stdlib.h>

int checkNumberEvenOrOdd(int number);

int main()
{
    /*
        Write a C function to check if the input is an even number or an odd
        number, if even number return 0 if odd number return 1.
        Example:
        Input 7, Output = 1 (Odd)
        Input 6, Output = 0 (Even)
    */

    int number;
    printf("Enter a number to check whether it's even or odd. \n");

    if(1 == scanf("%i", &number))
    {
        if (number != 0)
            printf(checkNumberEvenOrOdd(number)? "This number is %i odd" : "This number is %i even" , number);
        else
            printf("Zero entered. \n");
    }
    else{
        printf("Only numbers are allowed. \n");
    }


    return 0;
}

int checkNumberEvenOrOdd(int number)
{
    if(number % 2 == 0)
        return 0;
    else if(number % 2 != 0)
        return 1;
}
