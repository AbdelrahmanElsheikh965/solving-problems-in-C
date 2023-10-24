#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define RIGHT_ARROW 77
#define LEFT_ARROW 75

void gotoxy(int x,int y);


int main()
{
    char c;
    char text[9] = {'_', '_', '_',  '_', '_',  '_', '_', '\0'};
    char* pointer = &text;

    int i = 0, x = 0, y = 0;

    while (1)
    {
        for(i; i < 8; i++)
        {
            gotoxy(0, i);
            printf("%c", *(pointer+i));
        }

        gotoxy(0, y);
        c = getch();

        if(c == -32 && getch() == RIGHT_ARROW)
        {
            if(y < 8)
            {
                gotoxy(0, y++);
            }else
            {
                y = 0;
            }
        }else //if(c == -32 && getch() == LEFT_ARROW)
        {
           if(y > 0)
            {
                gotoxy(0, y--);
            }else
            {
                y = 7;
            }
        }


        if( (c >= 65 && c <= 90) || (c >= 97 && c <= 122) )
        {
            *(pointer + y) = c;
        }

        printf("%s", text);
        if( c == 13 )
        {
           printf("\n%s\n", text);
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
