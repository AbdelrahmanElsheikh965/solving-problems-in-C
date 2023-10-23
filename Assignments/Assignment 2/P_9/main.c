#include <stdio.h>
#include <stdlib.h>

void swapNumbers();

int main()
{
    /*
        Write a C Function that swaps the value of two integer numbers.
    */

    swapNumbers();
    return 0;

}

void swapNumbers()
{
    float temp, number1, number2;
    printf("Enter 2 numbers to see Prime Numbers between them. \n");

    if(2 == scanf("%f %f", &number1, &number2))
    {
        printf("Before: num1 = %f, num2 = %f \n", number1, number2);
        temp    = number2;
        number2 = number1;
        number1 = temp;
        printf("After: num1  = %f, num2 = %f \n", number1, number2);
    }
    else{
        printf("Only numbers are allowed. \n");
    }
}







