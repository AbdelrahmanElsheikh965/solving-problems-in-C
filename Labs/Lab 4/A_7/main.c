#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        C Program to Find the Frequency of Characters in a String
    */

    char text[8];
    char needle;

    printf("Enter string with spaces to search in: \n");
    scanf("%[^\n]", text);

    printf("Enter character to search for: \n");
    scanf(" %c", &needle);

    int count = 0;

    for(int j =0; j < 8; j++)
    {
        if(needle == text[j])
        {
            count++;
        }
    }

    printf("Frequencies: %d \n", count);

    return 0;
}
