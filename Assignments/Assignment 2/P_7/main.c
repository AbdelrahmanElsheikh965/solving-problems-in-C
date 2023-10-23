#include <stdio.h>
#include <stdlib.h>

void checkIfMultiple(int num1, int num2);

int main()
{
    /*
        Write a C Function that reads two integers and checks if the first is
        multiple of the second.
    */

    int number1, number2;
    printf("Enter 2 numbers to check if the first is multiple of the second. \n");

    if(2 == scanf("%i %i", &number1, &number2))
    {
       checkIfMultiple(number1, number2);    }
    else{
        printf("Only numbers are allowed. \n");
    }

    return 0;
}

void checkIfMultiple(int num1, int num2)
{
    if(num2 == 0 || num1 == 0)
        printf("Error");
    else if(num1 % num2 == 0)
        printf("This number %d is multiple of %d" , num1, num2);
    else
        printf("This number %d is NOT multiple of %d" , num1, num2);
}
