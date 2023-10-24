#include <stdio.h>

int main() {
    char arr[10] = "Hello";
    char *ptr = arr; // Assign the pointer to the array

    *(ptr + 0) = 'd'; // Assign 'd' to the first element of the array

    while(*ptr != '/0')
    {
        printf("%c\n", *ptr);
        ptr++;
    }

    return 0;
}
