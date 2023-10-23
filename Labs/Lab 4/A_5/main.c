#include <stdio.h>
#include <stdlib.h>

#define LENGTH 50

int main()
{
    /*
        C Program to take firstName and lastName from user, then displays fullName.
    */

    char firstName[LENGTH];
    char lastName[LENGTH];

    char fullName[LENGTH];

    printf("Enter your First Name: \n");
    scanf("%s", firstName);

    printf("Enter your Last Name: \n");
    scanf("%s", lastName);

    int i = 0, j = 0;

    while(firstName[i] != '\0')
    {
        fullName[i] = firstName[i];
        i++;
    }

    while(lastName[j] != '\0')
    {
        fullName[i] = lastName[j];
        j++;
        i++;
    }

    printf("%s", fullName);

    return 0;
}
