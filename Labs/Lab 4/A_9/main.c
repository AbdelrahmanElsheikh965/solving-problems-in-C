#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        C Program to Find the Length of a String without Using strlen()
    */

    char text[8];

    // Read string without &
    scanf("%s", text);

    int len = 0;

    for(int i =0; i < 8; i++)
    {
        // Searching for ( Null character terminator = '\0' ).
        if(text[i] == '\0')
        {
            i = 20;
        }else
        {
            len++;
        }
    }

    printf("Length: %d", len);

    return 0;
}
