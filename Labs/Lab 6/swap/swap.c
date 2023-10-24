#include <stdio.h>
#include <stdlib.h>

// swap without temp

void swap(int* x, int* y);

int main()
{
    int x = 12, y = 8;

    int* ptr1 = &x;
    int* ptr2 = &y;

    printf("Before Swap Temp: X = %d, Y = %d \n", *ptr1, *ptr2 );

    printf("After Swap: ");
    swap(ptr1, ptr2);

    return 0;
}

// 2 Addresses
void swap(int* x, int* y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;

    printf("X = %d, Y = %d",  *x, *y);
}



