#include <stdio.h>
#include <stdlib.h>

float add(float firstNum, float secondNum);
float subtract(float firstNum, float secondNum);
float multiply(float firstNum, float secondNum);
float divide(float firstNum, float secondNum);

int main()
{
    /*
        Write a program to make a simple calculator using
        switch-case. The calculator takes the operation
        (+ or – or * or /) and takes the two input arguments and
        print the results.
    */

        float firstNum, secondNum;
        char operation;

        printf("Type the first number and, press enter: \n");

        if(0 != scanf("%f", &firstNum))
        {
            printf("Type the second number and, press enter: \n");

            if(0 != scanf("%f", &secondNum))
            {
                printf("Choose the operation symbol you want to perform (+, -, *, /) and, press enter: \n");
                while(getchar() != '\n');
                if(0 != scanf("%c", &operation))
                    {
                        switch(operation){
                            case '+':
                                printf("Result of Add Operation is =  %.2f \n\n", add(firstNum, secondNum));
                                break;

                            case '-':
                                printf("Result of Add Operation is =  %.2f \n\n", subtract(firstNum, secondNum));
                                break;

                            case '*':
                                printf("Result of Add Operation is =  %.2f \n\n", multiply(firstNum, secondNum));
                                break;

                            case '/':
                                if (divide(firstNum, secondNum) == -1){
                                    printf("Division by Zero Error \n\n");
                                }else{
                                    printf("Result of division Operation is =  %.2f \n\n", divide(firstNum, secondNum));
                                }
                                break;

                            default:
                                printf("Error, Invalid Operation . . . \n\n");
                                break;
                            }
                    }
            }else{
                 printf("Invalid Second Number");
            }
        }else{
            printf("Invalid First Number");
        }

    return 0;
}

float add(float firstNum, float secondNum)
{
    return firstNum + secondNum;
}

float subtract(float firstNum, float secondNum)
{
    return firstNum - secondNum;
}
float multiply(float firstNum, float secondNum)
{
    return firstNum * secondNum;
}
float divide(float firstNum, float secondNum)
{
    if (secondNum == 0)
        return -1;
    else
        return firstNum / secondNum;
}
