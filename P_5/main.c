#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program to print the ASCII value of a character
        input by the user
    */

    char character;
    printf("Enter a character you want to know ASCII value of it: \n");

    scanf("%c", &character);
    printf("ASCII value of '%c' is %i \n", character, character);


    return 0;
}
