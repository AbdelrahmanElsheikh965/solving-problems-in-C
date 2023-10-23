#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Write a program that reads a student grade percentage
        and prints
        "Excellent" if his grade is greater than or equal 85 - 100,
        "Very Good" if his grade is greater than or equal 75 - 84,
        "Good" if his grade is greater than or equal 65 - 74,
        "Pass" if his grade is greater than or equal 50 - 64,
        "Fail" if his grade is less than 50
    */

    printf("Enter a grade: \n");
    float grade;

    if(1 == scanf("%f", &grade) && grade >= 0)
    {
        if(grade > 75 && grade <= 85)
        printf("This grade %.2f is very good." , grade);

        else if(grade > 65 && grade <= 75)
            printf("This grade %.2f is good." , grade);

        else if(grade >= 50 && grade <= 65)
            printf("This grade %.2f is pass." , grade);

        else if(grade > 85 && grade <= 100)
            printf("This grade %.2f is excellent." , grade);

        else if(grade < 50)
            printf("This grade %.2f is fail." , grade);
        else
            printf("Out of range input");

    }else
    {
       printf("Only positive grades are allowed \n");
    }

    return 0;
}
