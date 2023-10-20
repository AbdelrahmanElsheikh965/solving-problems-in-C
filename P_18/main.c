#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program to display half pyramid using stars pattern.
            *
            * *
            * * *
            * * * *
            * * * * *
    */

    int number;
    printf("Enter a number to display a half pyramid depending on it\n");

    if(1 == scanf("%i", &number) && number > 0)
    {
        for(int i = 0; i < number; i++)
        {
            for(int j = 0; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }else
    {
        printf("Only positive numbers are allowed. \n");
    }

    return 0;
}
