#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define X_AXIS 0

void gotoxy(int x,int y);

int main()
{
    int character;
    int size = 0, i = 0;
    char text[20];

    while (1)
    {
        gotoxy(X_AXIS, i);
        character = getch();

			if (character == 0xE0 || character == 0x00)
			{
                character = getch();
                if(character == 77)
                {
                    if(i < size-1)
                    {
                        gotoxy(X_AXIS, ++i);
                    }else
                    {
                        i = 0;
                        gotoxy(X_AXIS, i);
                    }
                }else if (character == 75)
                {
                   if(i > 0)
                    {
                        gotoxy(X_AXIS, --i);
                    }else
                    {
                        i = size-1;
                        gotoxy(X_AXIS, i);
                    }
                }
			}else
			{
			    if (character == 8)
                {
                    if(i > 0)
                    {
                        gotoxy(X_AXIS, --i);
                        for(i=i-1; i < size-1; i++)
                        {
                            text[i] = text[i+1];
                        }
                        --size;
                    }

                }else if (character == 13)
                {
                    printf("\n%s", text);
                    break;
                }
                else
                {
                    printf("%c", character);
                    gotoxy(X_AXIS, i);
                    text[i] = character;
                    i++;
                    size++;
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
