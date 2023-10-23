#include "students.h"
#include "global_variables.h"

// store students
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
