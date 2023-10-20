#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program to display a full pyramid using stars pattern.
          Write a program to display cross or X-shape using stars

          *       *
           *     *
            *   *
             * *
             * *
            *   *
           *     *
          *       *

    */

    int number;
    printf("Enter a number to display a half pyramid depending on it\n");

    if(1 == scanf("%i", &number) && number > 0)
    {
        for(int i = 0; i < number; i++)
        {
            for(int j = 0; j < i; j++)
            {
                printf(" ");
            }
            printf("*");
            for(int k = 0; k < 1+(number-i-1)*2; k++)
            {
                printf(" ");
            }
            printf("*\n");
        }

        for(int i = 0; i < number; i++)
        {
            for(int j = 0; j < number-i-1; j++)
            {
                printf(" ");
            }
            printf("*");
            for(int k = 0; k < 1+i*2; k++)
            {
                printf(" ");
            }
            printf("*\n");
        }
    }else
    {
        printf("Only positive numbers are allowed. \n");
    }

    return 0;
}
