#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>

#define RIGHT_ARROW 77
#define LEFT_ARROW 75

void gotoxy(int x,int y);


int main()
{
    char c;
    char text[9] = {'_', '_', '_',  '_', '_',  '_', '_', '\0'};
    char* pointer = text;

    int i = 0, x = 0, y = 0;

    while (1)
    {
        for(i; i <= 8; i++)
        {
            gotoxy(0, i);
            printf("%c", *(pointer+i));
        }

        gotoxy(0, y);

        if (kbhit)
		{
			c = getch();

			if ((int)c == 77)
            {
                if(y < 6)
                {
                    gotoxy(0, y++);
                }else
                {
                    y = 0;
                    gotoxy(0, y);
                }
                continue;
            }
            else if ((int)c == 75)
            {
               if(y > 0)
                {
                    gotoxy(0, y--);
                }else
                {
                    y = 6;
                    gotoxy(0, y);
                }
                continue;
            }else
            {
//                text[y] = c;
                *(pointer+y) = c;
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
