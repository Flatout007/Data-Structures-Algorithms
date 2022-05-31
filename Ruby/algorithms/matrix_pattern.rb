<<-DOC
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
DOC

=begin
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
=end

def main
    count = 1;
    
    i = 0;
    until i === 4
        j = 0;
        until j === 4
            puts count += 1;
            puts " ";
            j+=1;
        end
        puts "\n";
        i+=1;
    end
    
end