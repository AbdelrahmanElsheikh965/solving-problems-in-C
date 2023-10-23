#include <stdio.h>

#define ROWS 3
#define COLS 4

int main() {
    /*
        Calculate average of each column in a 2D Array.
    */

    int arr[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int average[4], sum = 0;

    // Loop over columns first
    for (int col = 0; col < COLS; col++)
    {
        sum = 0;
        // Then, loop over rows.
        for (int row = 0; row < ROWS; row++)
        {
            // Access an element by [row][column].
            sum += arr[row][col];
        }
        average[col] = sum / ROWS;
    }

    for (int i = 0; i < 4; i++)
    {
        printf("Average: ");
        printf("%d \n", average[i]);
    }
    return 0;
}
