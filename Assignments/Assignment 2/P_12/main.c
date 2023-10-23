#include <stdio.h>
#include <stdlib.h>

calculateTime();

int main()
{
    /*
        Write a C function that calculates the required heater activation time
        according to the input temperature of water.
        - if input temperature is from 0 to 30, then required heating time = 7 minutes.
        - if input temperature is from 30 to 60, then required heating time = 5 minutes.
        - if input temperature is from 60 to 90, then required heating time = 3 minutes.
        - if input temperature is more than 90, then required heating time = 1 minutes.
        - if temperature is invalid (more than 100), return 0
        Example:
        Input = 10  output = 7
        Input = 35  output = 5
    */

    calculateTime();
    return 0;
}

calculateTime()
{
    int number;
    printf("Enter the temperature of water \n");

    if(1 == scanf("%d", &number)  && number >= 0)
    {
        if(number >= 0 && number <= 29)
            printf("%d", 7);        else if(number >= 30 && number <= 59)
            printf("%d", 5);        else if(number >= 60 && number <= 89)
            printf("%d", 3);
        else if(number >= 90 && number <= 99)
            printf("%d", 3);        else if(number > 100)
            printf("%d", 1);
    }
    else{
        printf("Only positive numbers are allowed. \n");
    }

}
