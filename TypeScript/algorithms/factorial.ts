/** 
* @description {
    Write a function to return the factorial of n, 
    a.k.a the product of the first n natural numbers.
}

* @example {
    n = 5 // => 1 * 2 * 3 * 4 * 5 = 120
}

* @details {
    time: O(n)
    space: O(n)
}
*/

function factorial(n: number) {
    /**
     * @algorithm => {
         1.IF n is 0 ->
            RETURN 1;
         
         2.ELSE -> 
            RETURN f(n-1) * n;   
     }
    */

    if (n === 0)
        return 1;
    else return factorial(n - 1) * n;
}