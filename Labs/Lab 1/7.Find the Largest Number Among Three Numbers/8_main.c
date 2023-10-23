#include <stdio.h>
#include <stdlib.h>

int findTheLargest(int numbers[]);

int main()
{
    // write a C Program to Find the Largest Number Among Three Numbers.

    int numbers[3] = {65, 80, 9};
    int maximumNumber = findTheLargest(numbers);

    printf("%i \n", maximumNumber);

    return 0;
}

findTheLargest(int numbers[])
{
    int max = 0;

    for(int i = 0; i < 3; i++)
    {
        if(numbers[i] > max)
        {
            max = numbers[i];
        }
    }

    return max;
}


