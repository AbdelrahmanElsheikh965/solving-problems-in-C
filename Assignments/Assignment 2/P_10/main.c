#include <stdio.h>
#include <stdlib.h>

countHoles();
rules(int digit);
loopOverANumber(int num);

int main()
{
    /*
        You are designing a poster which prints out numbers with a unique style applied to each of them.
        The styling is based on the number of (closed paths or holes) present in a giver number.
        The number of holes that each of the digits from 0 to 9 have are equal to
        the number of closed paths in the digit. Their values are:
         1, 2, 3, 5 and 7  = 0 holes.
         0, 4, 6, and 9    = 1 hole.
         8                 = 2 holes.
        Given a number, you must determine the sum of the number of holes for all of its digits.
        For example, the number 819 has 3 holes.
        countHoles: must return an integer denoting the total number of holes in a number.
    */

    // NOTE: Left Zeros will be neglected.

    countHoles();
    return 0;
}

countHoles()
{
    int number = 0;
    printf("Enter a numbers to count its holes. \n");

    if( 1 == scanf("%d", &number))
    {
        printf("Count of holes for %i = %i \n", number, loopOverANumber(number));

    }
    else{
        printf("Only numbers are allowed. \n");
    }
}

rules(int digit)
{
    switch(digit)
    {
        case 0:
            return 1;

        case 4:
            return 1;

        case 6:
            return 1;

        case 9:
            return 1;
        case 8:
            return 2;

        default:
            return 0;
    }
}

loopOverANumber(int num)
{
    int count = 0;

    while( num != 0 )
    {
        count += rules(num % 10);
        num /= 10;
    }

    return count;
}


