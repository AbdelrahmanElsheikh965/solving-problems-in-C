#include <stdio.h>
#include <stdlib.h>

int powerOfTwo();
int splitNumber(int num);

int main()
{
    /*
        Write a C function that returns 1 if the input number is a power of 2
        and return 0 if the input number is power of 2.
        For example: 0, 2 and 16 are power of 2.
                     1, 10 and 30 are not power of 2.
    */

    // 1. Number should be even
    // 1. Number every time it's divided by/ 2 = even. until 4, 2, 1

    switch(powerOfTwo())
    {
        // 1 is be power of 2
        case 0:
            printf("This number is power of 2 \n");
            break;

        // Zero cannot be power of 2
        case -3:
            printf("This number is NOT power of 2 \n");
            break;

        // Odd cannot be power of 2
        case -2:
            printf("This number is NOT power of 2 \n");
            break;

        // Even but not power of 2
        case -1:
            printf("This number is NOT power of 2 \n");
            break;

        default:
            printf("This number is power of 2");
            break;

    }
    return 0;

}

powerOfTwo()
{
    int number;
    printf("Enter a number to check if power of 2 or NOT ? \n");

    if(1 == scanf("%d", &number))
    {
        if (number == 1)
        {
            return 0;
        }
        else if (number % 2 != 0)
        {
            return -2;
        }else if (number == 0)
        {
            return -3;
        }
        else
        {
            int result = splitNumber(number);
        }
    }
    else{
        printf("Only numbers are allowed. \n");
    }
}

int splitNumber(int num)
{
    int exponent = 0;
    for(int i = num; i > 1; i=i/2)
    {
        if(i % 2 != 0 && i != 1)
        {
            return -1;
        }
        exponent++;
    }
    return exponent;
}







