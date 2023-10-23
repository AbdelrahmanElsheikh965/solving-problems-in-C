#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <unistd.h>
#include <time.h>

int calculate(int);

// (row, column)
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if odd or not
    if(num % 2 != 0 && num != 1)
    {
        int Max;
        Max = num * num;

        int row = 0;             // Row
        int column = num/2;      // Column

        for(int i = 1; i <= Max; i++)
        {
            gotoxy(5*column+5, 3*row+5);
            printf("%d", i);

            sleep(1);

            row--;
            column++;

            if(i % num == 0){column--; row+=2;}

            if(column == num)
                column = 0;

            if(row == -1)
                row = num -1;
        }
        printf("\n\n");
    }else{
        printf("Invalid input\n\n");
    }

    return 0;
}
