#include <stdio.h>
#include <stdlib.h>


int main()
{
    // write a C Program to test different format Specifiers with "Printf".
    int number = 98;
    float  total = 2.1;
    double sum = 35.2;

    char firstLetter  = 'A';
    char name []  = "Abdulrhman";

    printf("Hello integer! %i \n", number);         //int
    printf("Hello float! %f \n", total);          // float
    printf("Hello double! %lf  \n", sum);       // double

    printf("Hello char! %c  \n", firstLetter );         // char
    printf("Hello string array of chars! %s  \n", name );         // string = array of char

    return 0;
}
