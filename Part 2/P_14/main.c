#include <stdio.h>
#include <stdlib.h>

getFibonacci(int termsNo);

int main()
{
    /*
        Write a C Function that calculate the Fibonacci series using function.
        The Fibonacci Series : 0,1,1,2,3,5,8,13,21,...
    */

    int num;
    printf("Enter an integer number of terms: \n");

    if(1 == scanf("%i", &num) && num > 0)
    {
        getFibonacci(num);
    }
    else{
        printf("Only positive numbers are allowed. \n");
    }

    return 0;
}

getFibonacci(int termsNo)
{
    int x = 0, y = 1, k = 0, z = 0, b;

    for(int i = 1; i <= termsNo; i++)
    {

        if(i == 1)
        {
          printf("%d ", x);
          continue;
        }
        if (i == 2)
        {
          printf("%d ", y);
          continue;
        }
        if (i == 3)
        {
          z = x+y;
          k = y;
          printf("%d ", z);
          continue;
        }
        b = k;
        k = z;
        z = b + k;
        printf("%d ", z);
    }
}





