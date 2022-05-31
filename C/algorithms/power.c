#include <stdio.h>
/**
* @def {
    Write a function to return the value of the exponent m power n;
}

* @example {
    m = 5, n = 5 // => 5 * 5 * 5 * 5 * 5 = 3125
}

* @details {
    time: O(n)
    space: O(n)
}
*/
int power(int m, int n)
{
    /**
     * @brief {
        1.IF n is 0 ->
            RETURN 1;

        2.ELSE ->
            RETURN f(m, n-1) * m;
     }
    */

    if (n == 0)
        return 1;
    else
        return power(m, n - 1) * m; 
}

int main()
{
    printf("%d ", power(5, 5));
    return 0;
}
