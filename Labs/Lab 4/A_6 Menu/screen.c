#include "screen.h"

void whiteScreen(int pos)
{
    gotoxy(2, 2);
    printf("position = %d", pos);

    gotoxy(6, 17);
    printf("New");

    gotoxy(12, 17);
    printf("Display");

    gotoxy(18, 17);
    printf("Exit");
}

void setTextColor(char name[10], int posX, int posY)
{
    SetColor(12);
    gotoxy(posX, posY);
    printf("%s", name);
    SetColor(7);
}

