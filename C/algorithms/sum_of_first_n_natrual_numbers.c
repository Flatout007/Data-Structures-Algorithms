#include <stdio.h>

/**
  * @file sum_of_first_n_natural_numbers.c
  * @date 2022-05-21
  * @copyright Copyright (c) 2022

  * @def {
      Write a function to return the sum of the first
      n natural numbers.
  }

  * @example {
      n = 5 // => 1 + 2 + 3 + 4 + 5 = 15
  }

  * @details {
      time: O(n)
      space: O(n)
  }
*/

int sum(int n)
{
    /**
     * @brief => {
          1.IF n is 0 ->
              RETURN 0;

          2.ELSE ->
              RETURN f(n-1) + n;
     }
    */

    if (n == 0)
        return 0;
    else
        return sum(n - 1) + n;
}

int main()
{
    printf("%d ", sum(5));
    
    return 0;
}
