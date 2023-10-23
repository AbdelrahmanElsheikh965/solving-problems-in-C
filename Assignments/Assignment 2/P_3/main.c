#include <stdio.h>
#include <stdlib.h>

void checkNumber(int);

int main()
{
    // Write a C Function that check if the number if positive or negative.

    int number;
    printf("Enter a number: \n");

    if(1 == scanf("%i", &number))
    {
        checkNumber(number);
    }
    else{
        printf("Only numbers are allowed. \n");
    }

    return 0;
}

void checkNumber(int number)
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
