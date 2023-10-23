#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        C Program to Copy String Without Using strcpy().
    */

    char text[8];
    char copied[8];

    scanf("%s", &text);

    for(int i =0; i < 8; i++)
    {
        copied[i] = text[i];
    }

    printf("Copied: %s", copied);

    return 0;
}
