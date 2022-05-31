<<-DOC
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
DOC

=begin
/**
     * @brief
     * 1.FOR 0 in range of 4 ->
     *      FOR 0 in range of 4 ->
     *          IF i is greater than j ==>
     *              PRINT " ";
     *          ELSE ==>
     *              PRINT "*";
     *     PRINT new line;
     */
=end

def main 
    i = 0;
    until i === 4
        j = 0;
        until j === 4
            if i > j
                print " ";
            else
                print "*";
            end
            j+=1;
        end
        print "\n";
        i+=1;
    end
end

main();
