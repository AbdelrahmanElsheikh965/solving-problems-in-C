#include <stdio.h>
#include <stdlib.h>

#define ROW 2
#define COLUMN 3

int main()
{
    /*
        C Program to add two matrices and put the result in a third one, then print the result.
    */

    int matrix_1[2][3] = {{4, 5, 6} , {1, 2, 3}};
    int matrix_2[2][3] = {{7, 0, 1} , {9, 4, 12}};
    int sum[2][3];

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            sum[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }

    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COLUMN; j++)
        {
            printf("%d ", sum[i][j]);
        }
    }

    return 0;
}
