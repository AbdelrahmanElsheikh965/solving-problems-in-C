#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

int main()
{
    /*
        C Program to Covert all Characters in a String to Capital Case.#
    */

    char text[MAX_SIZE];

    scanf("%s", &text);

    for(int i = 0; i < MAX_SIZE; i++)
    {
        if( text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = text[i]-32;
        }
    }

    printf("%s", text);

    return 0;
}
