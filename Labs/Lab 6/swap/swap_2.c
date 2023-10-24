//#include <stdio.h>
//
//void swap(int* a, int* b)
//{
//    /*
//
//    The result of XOR is 1 if the two bits are different
//        x   = 1100
//        y   = 1001
//        ----------
//        x^y = 0101
//        ----------
//        x   = 0101    ..... New Value of x
//        ------------------------------------------------------------
//        x   = 0101    ..... New Value is taken
//        y   = 1001    ..... Old Value of Y
//        ----------
//        y^x = 1100
//        ----------
//        y   = 1100    ..... New Value of y = Initial x
//        ------------------------------------------------------------
//        x   = 0101    ..... New Value from step 1
//        y   = 1100    ..... New Value of y from Step 2
//        ----------
//        y^x = 1001
//        ----------
//        x   = 1001    ..... New Value of x = Initial y
//
//    */
//    if (a != b)
//    {
//        *a = *a ^ *b;
//        *b = *a ^ *b;
//        *a = *a ^ *b;
//    }
//}
//
//int main() {
//    int x = 5;
//    int y = 10;
//
//    printf("Before swap: x = %d, y = %d\n", x, y);
//
//    swap(&x, &y);
//
//    printf("After swap: x = %d, y = %d\n", x, y);
//
//    return 0;
//}
