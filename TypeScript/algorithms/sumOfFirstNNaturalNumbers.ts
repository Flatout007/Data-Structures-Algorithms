/**
  * @description {
      Write a function to return the sum of the first
      n natural numbers.
  }
  
  * @example {
      n = 5 // => 1 + 2 + 3 + 4 + 5 = 15
  }

  * @complexity {
      time: O(n)
      space: O(n)
  }
*/

function sum(n: number): number {
    /**
     * @algorithm => {
          1.IF n is 0 ->
              RETURN 0;

          2.ELSE ->
              RETURN f(n-1) + n;    
     }   
    */

    if (n === 0)
        return 0;
    else return sum(n - 1) + n;
}

console.log(sum(5));