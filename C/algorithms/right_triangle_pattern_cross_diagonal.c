#include <stdio.h>
const int n = 4;

/**
* @def {
    Write a function to draw a standard right triangle along the
    cross diagonal on a n*n coordinate plane.
    Let n = 4.
}

* @example {
    n = 4 // =>
       0  1  2  3
    0           *
    1        *  *
    2     *  *  *
    3  *  *  *  *
}
*/

int main()
{
    /**
     * @brief
     * 1.FOR 0 in range of n ->
     *      FOR 0 in range of n ->
     *           IF i+j is more or equal to n-1 =>
     *                PRINT "*";
     *           ELSE =>
     *                PRINT " ";
     *      PRINT new line;
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + j >= n - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}