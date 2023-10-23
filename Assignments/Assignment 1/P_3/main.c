#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program for converting temperature from
        degrees Celsius to degrees Fahrenheit,
        given the formula:
        F = C x (9/5) + 32
        F = ((C x 9)/5) + 32
        F = C x 1.8 + 32
    */

    float degreesCelsius = 10, degreesFahrenheit = 16;

    printf("Degrees in Fahrenheit: %f \n", ((degreesCelsius * 9)/5) + 32);

    return 0;
}
