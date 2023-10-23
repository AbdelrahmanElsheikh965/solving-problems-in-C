#include "students.h"
#include "global_variables.h"
#include "screen.h"

void checkPositions(void)
{
    switch(position)
        {

            // New
            case 0:
                whiteScreen(position);
                setTextColor("New", 6, 17);

                if(c == ENTER)
                {
                    system("cls");
                    saveStudents(flag, c, groupOfStudents);
                }
                break;


            // Display
            case 1:
                whiteScreen(position);
                setTextColor("Display", 12, 17);
                if(c == ENTER)
                {
                    system("cls");
                    gotoxy(2, 2);
                    printf("Students Count = %d \n", studentsCount);
                    displayStudents(groupOfStudents);
                }
                break;


            // Exit
            case 2:
                whiteScreen(position);
                setTextColor("Exit", 18, 17);
                if(c == ENTER)
                {
                    system("cls");
                    position = 0;
                }
                break;
        }
}

void checkButtons(void)
{
    switch(c)
    {
        case RIGHT_ARROW:
            system("cls");
            position = 0;
            break;

        case LEFT_ARROW:
            system("cls");
            position = 0;
            break;

        case UP_ARROW:
            position--;
            if(position < 0)
            {
                position = 2;
            }
            pressAndAscii("Up Arrow", c);
            break;

        case DOWN_ARROW:
            position++;
            if(position > 2)
            {
                position = 0;
            }
            pressAndAscii("Down Arrow", c);
            break;

        case HOME:
            position = 0;
            pressAndAscii("Home", c);
            break;

        case END:
            position = 2;
            pressAndAscii("End", c);
            break;
        }
}
