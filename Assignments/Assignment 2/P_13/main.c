#include <stdio.h>
#include <stdlib.h>

addFloats();

int main()
{
    /*
        In this challenge write a function to add two floating numbers.
        Determine the integer floor of the sum. The floor is the truncated float value,
        anything after the decimal point is dropped.
        For instance floor(1.1+3.05)=floor(4.15)=4
    */

    addFloats();
    return 0;
}

addFloats()
{
    float number1, number2;
    printf("Enter two float numbers \n");

    if(2 == scanf("%f %f", &number1, &number2))
    {
        printf("%i", (int) number1 + (int) number2);
    }
    else{
        printf("Only numbers are allowed. \n");
    }

}
