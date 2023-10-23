#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int subtract(int, int);
int multiply(int, int);
float divide(int, int);

int main()
{
        // write a C Program to make simple calculations (add, sub, multiply, divide) on two numbers.

        int firstNum, secondNum;
        char operation;

        printf("Type the first number and, press enter: \n");

        // check if it's taken as expected from user (as integer), if not return 0.
        if(0 != scanf("%d", &firstNum))
        {
            printf("Type the second number and, press enter: \n");

            if(0 != scanf("%d", &secondNum))
            {
                printf("Choose the operation symbol you want to perform (+, -, *, /) and, press enter: \n");
                while(getchar() != '\n');
                if(0 != scanf("%c", &operation))
                    {
                        switch(operation){
                            case '+':
                                printf("Result of Add Operation is =  %i \n\n", add(firstNum, secondNum));
                                break;

                            case '-':
                                printf("Result of Add Operation is =  %i \n\n", subtract(firstNum, secondNum));
                                break;

                            case '*':
                                printf("Result of Add Operation is =  %i \n\n", multiply(firstNum, secondNum));
                                break;

                            case '/':
                                if (divide(firstNum, secondNum) == -1){
                                    printf("Division by Zero Error \n\n");
                                }else{
                                    printf("Result of division Operation is =  %f \n\n", divide(firstNum, secondNum));
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

// Default return type is int
add(int firstNum, int secondNum)
{
    return firstNum + secondNum;
}

int subtract(int firstNum, int secondNum)
{
    return firstNum - secondNum;
}
int multiply(int firstNum, int secondNum)
{
    return firstNum * secondNum;
}
float divide(int firstNum, int secondNum)
{
    if (secondNum == 0)
        return -1;
    else
        return (double)firstNum / (double)secondNum;
}
