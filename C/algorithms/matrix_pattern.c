#include <stdio.h>
/**
* @def {
    Write a function to print all values 1 to n*n in a matrix pattern
    let n equal 4.
}

* @example {
    n = 4 // =>
    // 1   2  3   4
    // 5   6  7   8
    // 9  10  11  12
    // 13 14  15  16
}
*/

int main()
{
    /**
     * @brief
     * 1.SET count to 1 to print values on each iteration;
     *
     * 2.FOR 0 in range of n ->
     *      FOR 0 in range of n ->
     *          PRINT count, then increment;
     *          PRINT space;
     *  PRINT new line;
     */

    int count = 1;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", count++);
        }

        print("\n");
    }

    return 0;
}
