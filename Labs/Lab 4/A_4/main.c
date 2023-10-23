#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
         C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
    */

    char c = getch();

    if(-32 == c)
    {
        printf("Extended Key | ASCII: %d", c);
    }else
    {
        printf("Normal Key: %c | ASCII: %d \n", c, c);
    }

    return 0;
}
