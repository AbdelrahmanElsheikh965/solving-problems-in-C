#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Write a C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)

    char names[3];

    for(int i = 0; i < 3; i++)
    {
        scanf("%c", &names[i]);
        // Clear the buffer
        while(getchar() != '\n');
    }

    for(int i = 0; i < 3; i++)
    {
        printf("%c", names[i]);
    }
}
