#include <stdio.h>
#include <stdlib.h>

int add(int , int);
int subtract(int, int);
int multiply(int, int );
double divide(int, int );

int main()
{
    // write a C Program to make simple calculations (add, sub, multiply, divide) on two integers

    int addResult = add(10, 10);
    printf("Result of Add Operation is =  %i \n", addResult);

    int subtractResult = subtract(10, 10);
    printf("Result of Subtract Operation is =  %i \n", subtractResult);

    int multiplyResult = multiply(10, 10);
    printf("Result of Multiply Operation is =  %i \n", multiplyResult);

    double divideResult = divide(10, 10);
    printf("Result of Divide Operation is =  %lf \n", divideResult);


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
double divide(int firstNum, int secondNum)
{
    return firstNum / secondNum;
}




