#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>

#define DOWN_ARROW 80
#define UP_ARROW 72
#define RIGHT_ARROW 77
#define LEFT_ARROW 75
#define HOME 71
#define END 79
#define ENTER 13

void whiteScreen(int pos);
void setTextColor(char name[10], int posX, int posY);
void pressAndAscii(char button[8], int ascii);

struct Student
{
    char name[50];
    char gender;
    char age;
    int id;
};

int saveStudents(int flag, char c, struct Student groupOfStudents[]);
void displayStudents( struct Student groupOfStudents[]);

int studentsCount = 0, position = 0, i = 0, flag = 1;
char c;
struct Student groupOfStudents[20];

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

            if(c == RIGHT_ARROW)
            {
                system("cls");
                position = 0;
            }
            if(c == LEFT_ARROW)
            {
                system("cls");
                position = 0;
            }

            if(c == UP_ARROW)
            {
                position--;
                if(position < 0)
                {
                    position = 2;
                }

                pressAndAscii("Up Arrow", c);
            }

            if(c == DOWN_ARROW)
            {
                position++;
                if(position > 2)
                {
                    position = 0;
                }

                pressAndAscii("Down Arrow", c);
            }

            if(c == HOME)
            {
                position = 0;
                pressAndAscii("Home", c);
            }

            if(c == END)
            {
                position = 2;
                pressAndAscii("End", c);
            }

            printf("\n");
        }

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

    return 0;
}


//
// // store students
 int saveStudents(int flag, char c, struct Student groupOfStudents[])
 {
        printf("Count: %d \n", studentsCount);

        printf("Enter name \n");
        scanf("%s", groupOfStudents[i].name);

        printf("Enter age \n");
        scanf("%d",&groupOfStudents[i].age);

        printf("Enter ID \n");
        scanf("%d",&groupOfStudents[i].id);

        printf("Enter Gender \n");
        scanf(" %c",&groupOfStudents[i].gender);

        studentsCount++;
        i++;
        printf("Press Enter to Continue | Right Arrow to go to main menu \n");
        return;
 }

 //  view students
 void displayStudents(struct Student groupOfStudents[])
 {

    printf(" ------ ID --- Names --- Gender --- Age ---\n");
    for(int i = 0; i < studentsCount; i++)
    {
        printf("\t %d \t", groupOfStudents[i].id);
        printf("%s \t", groupOfStudents[i].name);
        printf("%c \t", groupOfStudents[i].gender);
        printf("%d \n", groupOfStudents[i].age);
    }
 }

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

void pressAndAscii(char button[8], int ascii)
{
    system("cls");
    gotoxy(26, 2);
    printf("%s is pressed \n", button);

    gotoxy(22, 17);
    printf("Extended ASCii: %d", ascii);
}

void SetColor(int ForgC)
{
    WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

     //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
     //Mask out all but the background attribute, and add in the forgournd color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }

 void gotoxy(int x,int y)
 {
   COORD coord={0,0};
   coord.X=y;
   coord.Y=x;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }
