#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <dos.h>
#include <dir.h>
#include "students.h"
#include "global_variables.h"
#include "screen.h"


void pressAndAscii(char button[8], int ascii);

// Initialize here and, declare as extern in global_variables.h header file.
studentsCount = 0,
position = 0,
i = 0,
flag = 1;

struct Student groupOfStudents[];
char c;

int main()
{

    while (1)
    {
        c = getch();
        if(c == -32)
        {
            gotoxy(2, 2);
            printf("position = %d", position);
            c = getch();
            checkButtons();
            printf("\n");
        }
        checkPositions();
    }

    return 0;
}


void pressAndAscii(char button[8], int ascii)
{
    system("cls");
    gotoxy(26, 2);
    printf("%s is pressed \n", button);

    gotoxy(22, 17);
    printf("Extended ASCii: %d", ascii);
}


