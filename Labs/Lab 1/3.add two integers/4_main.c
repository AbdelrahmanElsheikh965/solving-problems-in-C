#include <stdio.h>
#include <stdlib.h>

// Method Prototype = Method Signature
int add();

int main()
{
    // write a C Program to add two integers.

    int result = add(4, 85);
    printf("%i \n", result);

    return 0;
}

// We did not type int as the default return value from a function is int
add(int x, int y){
    return x + y;
}
