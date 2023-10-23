#include <stdio.h>
#include <stdlib.h>

void convertLetter(char c);

int main()
{
    /*
        Write C Function that converts the any letter from lowercase to uppercase.
    */

    char c;
    printf("Enter a character: \n", c);
    scanf("%c", &c);
    convertLetter(c);

    return 0;
}

void convertLetter(char c)
{
    printf( (c >= 97 && c <= 122)? "UpperCase: %c \n" : "Error, enter lower case characters \n", c - 32);
}
