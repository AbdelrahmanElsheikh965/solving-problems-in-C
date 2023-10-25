#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define SIZE 10
#define X_AXIS 0

void gotoxy(int x,int y);

int main()
{
    int character;
    char text[SIZE] = {0};

    int i = 0, x = 0, y = 0;

    while (1)
    {
        gotoxy(X_AXIS, y);
        character = getch();

			if (character == 0xE0 || character == 0x00)
			{
                character = getch();
                if(character == 77)
                {
                    if(y < SIZE)
                    {
                        gotoxy(X_AXIS, y++);
                    }else
                    {
                        y = 0;
                        gotoxy(X_AXIS, y);
                    }
                }else if ( character == 75)
                {
                   if(y > 0)
                    {
                        gotoxy(X_AXIS, y--);
                    }else
                    {
                        y = SIZE;
                        gotoxy(X_AXIS, y);
                    }

                }
			}else
			{
			    if (character == 8)
                {
                    printf("%c", text[i-1]);
                    gotoxy(X_AXIS, y--);
                    text[i] = text[i-1];
                    break;
                }

                printf("%c", character);
                gotoxy(X_AXIS, y++);
                text[i++] = character;

                if (character == 13)
                {
                    printf("\n %s", text);
                    break;
                }

			}

		}
}

void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=y;
   coord.Y=x;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
