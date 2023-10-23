#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program that takes three integers, and prints
        out the smallest number
    */

    int number1, number2, number3;
    printf("Enter three integer numbers: \n");

    if(3 == scanf("%i %i %i", &number1, &number2, &number3))
    {
        switch(number1 < number2)
        {
            case 1:
                switch(number1 < number3)
                {
                   case 1:
                       printf("%i is the smallest number \n", number1);
                       break;
                   case 0:
                       printf( ((number1 == number2) && (number2 == number3)) ? "equal\n" :"%i is the smallest number \n", number3);
                       break;
                }
                break;

            case 0:
                switch(number2 < number3)
                {
                   case 1:
                       printf("%i is the smallest number \n", number2);
                       break;
                   case 0:
                       printf( (number1 == number2) && (number2 == number3) ? "equal\n" :"%i is the smallest number \n", number3);
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
