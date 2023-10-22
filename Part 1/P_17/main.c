#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program to count number of digits in a decimal number.
    */

    int number;
    printf("Enter a number to count its digits \n");

    if(1 == scanf("%i", &number))
    {
        int digits = 0;

        switch(number == 0)
        {
            case 1:
                digits = 1;
                break;
            case 0:
                while(number != 0)
                {
                    digits++;
                    number /= 10;
                }
                break;
        }
        printf("Number of digits is %d \n", digits);
    }else
    {
        printf("Only numbers are allowed. \n");
    }

    return 0;
}
