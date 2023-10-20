#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Print sum of first 100 integers. (With data validation).
    */
    int sum = 0, i = 1;

    while(i <= 100)
    {
        sum += i++;
    }
    printf("Sum of first 100 integers = %i \n", sum);

    return 0;
}
