#include <stdio.h>
#include <stdlib.h>

#define SIZE 8

int main()
{
    /*
        C Program to Remove all Characters in a String Except Alphabet.
    */

    int i = 0, j = 0;
    char text[SIZE];
    char onlyAlpha[SIZE];

    scanf("%s", &text);

    while(text[i] != '\0')
    {
        if( (text[i] >= 97 && text[i] <= 122) || (text[i] >= 65 && text[i] <= 90) )
        {
            onlyAlpha[j] = text[i];
            j++;
        }
        i++;
    }
    onlyAlpha[j] = '\0';

    printf("%s \n", onlyAlpha);

    return 0;
}
