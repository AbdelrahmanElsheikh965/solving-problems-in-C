#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C Program to find the minimum & maximum value of array elements. (Min_Max Array)
    int numbers[5], flag = 1;

    for(int i = 0; i < 5; i++)
    {
        if(0 == scanf("%i", &numbers[i]))
        {
            i = 6;
            printf("Error, Unknown input - only numbers allowed \n");
            flag = 0;
        }
    }

    if(flag == 1){
        int min = numbers[0];
        int max = numbers[0];
        for(int i = 0; i < 5; i++)
        {
            if (numbers[i] > max)
            {
                max = numbers[i];
            }
            if (numbers[i] < min)
            {
                min = numbers[i];
            }
        }
        printf("Minimum: %i, Maximum: %i", min, max);
    }
    return 0;
}
