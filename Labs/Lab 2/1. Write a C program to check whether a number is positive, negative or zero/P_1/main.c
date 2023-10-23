#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C program to check whether a number is positive, negative or zero

    int number;
    printf("Enter a number: \n");

    if(1 == scanf("%i", &number))
    {
        switch(number > 0)
        {
            case 1:
                    printf("This number %i is Positive." , number);
                    break;
            case 0:
                switch(number == 0)
                {
                    case 1:
                        printf("This number %i is Zero." , number);
                        break;
                    case 0:
                        printf("This number %i is Negative." , number);
                        break;
                }
                break;
        }
    }
    else{
        printf("Only numbers are allowed. \n");
    }
    return 0;
}
