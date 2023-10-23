#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to check whether a number is even or odd.

    int number;
    printf("Enter a number to check whether it's even or odd. \n");

    if(1 == scanf("%i", &number))
    {
       if(number % 2 == 0)
        printf("This number %i is even." , number);
       else if(number % 2 != 0)
        printf("This number %i is odd." , number);
    }
    else{
        printf("Only numbers are allowed. \n");
    }
    return 0;
}
