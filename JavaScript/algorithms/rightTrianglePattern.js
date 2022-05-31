/**
* @def {
    Write a function to print a standard right triangle across a
    n*n coordinate plane.
    Let n = 4.
}

* @example {
    n = 4 // =>
       0  1  2  3
    0  *
    1  *  *
    2  *  *  *
    3  *  *  *  *
}
*/
function rTriPattern() {
    for (var i = 0; i < 4; i++) {
        for (var j = 0; j < 4; j++) {
            if (j > i)
                continue;
            else
                process.stdout.write("*");
        }

        process.stdout.write("\n");
    }
}

rTriPattern();
