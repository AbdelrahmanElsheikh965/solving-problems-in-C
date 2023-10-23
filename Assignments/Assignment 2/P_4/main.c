#include <stdio.h>
#include <stdlib.h>

float divide(float firstNum, float secondNum);
float calculate(char operation, float firstNum, float secondNum);
char divisionByZeroError();
char operationError();

int main()
{
    /*
        Write a C Function that return the addition or subtraction or
        multiplication or division for two numbers. The function should take the
        required operation and two numbers as arguments. It also should check
        that the input operation is one of those operation that mentioned before
        and if not it should return error. The function should be implemented
        using switch case.
    */

        float firstNum, secondNum;
        char operation;

        printf("Type the first number and, press enter: \n");

        if(0 != scanf(" %f", &firstNum))
        {
            printf("Type the second number and, press enter: \n");
            while(getchar() != '\n');
            if(0 != scanf("%f", &secondNum))
            {
                printf("Choose the operation symbol you want to perform (+, -, *, /) and, press enter: \n");
                while(getchar() != '\n');
                scanf("%c", &operation);
                if(calculate(operation, firstNum, secondNum) == 'z')
                {
                    printf("Division by zero error." );
                }else if (calculate(operation, firstNum, secondNum) == 'o')
                {
                    printf("Error, Check what your input!" );
                }else
                {
                    printf("Result : %.2f", calculate(operation, firstNum, secondNum));
                }

            }else{
                 printf("Invalid Second Number");
            }
        }else{
            printf("Invalid First Number");
        }

    return 0;
}


float divide(float firstNum, float secondNum)
{
    if (secondNum == 0)
        return -1;
}

float calculate(char operation, float firstNum, float secondNum)
{
    switch(operation)
    {
        case '+':
            return firstNum + secondNum;

        case '-':
            return firstNum - secondNum;

        case '*':
            return firstNum * secondNum;

        case '/':
            if (divide(firstNum, secondNum) == -1)
            {
                return divisionByZeroError();
            }
            else
                return firstNum / secondNum;

        default:
            return operationError();
    }
}

char divisionByZeroError()
{
    return 'z';
}

char operationError()
{
    return 'o';
}
