<<-DOC
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
DOC

=begin
* @brief {
        1.IF n is 0 ->
            RETURN 1;

        2.ELSE ->
            RETURN f(m, n-1) * m;
     }
=end
  
def pow m,n
    if n === 0
        return 1;
    else
        return pow(m, n-1) * m;
    end
end

puts pow(5,5);