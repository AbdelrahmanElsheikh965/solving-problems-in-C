//#include <stdio.h>
//#include <stdlib.h>
//
//// swap with temp
//
//void swap(int* x, int* y);
//
//int main()
//{
//    int x = 12, y = 8;
//// int* ptr1;  // NULL not a good practice.
//
//    int* ptr1 = &x;
//    int* ptr2 = &y;
//
//    printf("Before Swap Temp: X = %d, Y = %d \n", *ptr1, *ptr2 );
//
//    printf("After Swap Temp: ");
//    swap(ptr1, ptr2);
//
//    return 0;
//}
//
//// 2 Addresses
//void swap(int* x, int* y)
//{
//    int temp = 0;
//    temp = *x;
//    *x = *y;
//    *y = temp;
//    printf("X = %d, Y = %d", *x, *y );
//}
//
//
//
