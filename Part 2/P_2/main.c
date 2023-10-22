#include <stdio.h>
#include <stdlib.h>

isAlphabet(int);

int main()
{
    /*
        Write a C Function that takes one character and checks if it alphabet or not.
    */

    char character;

    printf("Enter one character \n");
    scanf("%c", &character);

    printf(isAlphabet(character) ? "This is an alphabet" : "This is NOT an alphabet");

    return 0;
}

isAlphabet(int character)
{
    return (character >= 97 && character <= 122) || (character >= 65 && character <= 90);
}


