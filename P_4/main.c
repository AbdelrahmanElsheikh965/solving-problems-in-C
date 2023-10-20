#include <stdio.h>
#include <stdlib.h>
// constant
#define PI 3.14

int main()
{
    /*
        Write a program that reads the radius of a circle and
        calculates the area and circumference then prints the
        results
    */

    float radius;
    printf("Enter the radius of the circle \n", radius);

    // if scanf returned 0 means incorrect input.
    if(0 != scanf("%f", &radius))
    {
        float area          = PI * (radius*radius);
        float circumference = 2  * PI * radius;
        printf("Results: Area= %.2f, Circumference= %.2f \n", area, circumference);
    }else
    {
        printf("Only numbers allowed \n");
    }

    return 0;
}
