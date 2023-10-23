#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program that print the relation between two
        integer number if those numbers are equal, not equal and
        which one contain the higher value
    */

    int number1, number2;
    printf("Enter two integer numbers: \n");

    if(2 == scanf("%i %i", &number1, &number2))
    {
        switch(number1 == number2)
        {
            case 1:
                printf("Those numbers are equal \n");
                break;
            case 0:
                switch(number1 > number2)
                {
                   case 1:
                       printf("%i contains the higher value \n", number1);
                       break;
                   case 0:
                       printf("%i contains the higher value \n", number2);
                       break;
                }
                break;
        }

    }else
    {
        printf("Only numbers allowed \n");
    }

    return 0;
}
