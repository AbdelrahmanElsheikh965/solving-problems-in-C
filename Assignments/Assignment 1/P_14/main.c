#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program to display English alphabets from A to Z.
    */

    int i = 64;
    while(i <= 89)
    {
        printf("%c ", ++i);
    }
    return 0;
}
