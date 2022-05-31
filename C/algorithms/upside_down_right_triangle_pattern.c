#include <stdio.h>
const int n = 4;
/**
* @def {
    Write a function to print an upside down right triangle across a
    n*n coordinate plane.
    Let n = 4.
}

* @example {
    n = 4 // =>
       0  1  2  3
    0  *  *  *  *
    1     *  *  *
    2        *  *
    3           *
}
*/

int main()
{
    /**
     * @brief
     * 1.FOR 0 in range of 4 ->
     *      FOR 0 in range of 4 ->
     *          IF i is greater than j =>
     *              PRINT " ";
     *          ELSE =>
     *              PRINT "*";
     *     PRINT new line;
     */

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
                printf(" ");
            else
                printf("*");
        }

        printf("\n");
    }

    return 0;
}