#include <stdio.h>
#include <stdlib.h>

int main()
{
    // write a C Program to compute Quotient and Remainder.

    // The formula is Dividend ÷ Divisor = Quotient and Remainder
    // 25 / 6  = Quotient = 4 & Remainder = 1

    float dividend = 25;
    float divisor  = 6;
    int quotient   = dividend / divisor;
    float remainder = dividend - (divisor * quotient);

    printf("Quotient: %i \n", quotient);
    printf("Remainder: %f \n", remainder);

    return 0;
}




