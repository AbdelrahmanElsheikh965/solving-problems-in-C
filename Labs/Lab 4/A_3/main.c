#include <conio.h>

int main() {

    char text[20];
    int j = 0, i = 0;

    printf("%s", text);

    for(i; i < 20; i++, j++)
    {
        text[j] = getch();

        if ((int)text[j] == 13)
        {
            i = 20;
        }else
        {
            printf("%c", text[j]);
        }

    }

    // Terminate the string at last index.
    text[j] = '\0';

    printf("\n%s\n", text);

    return 0;
}
