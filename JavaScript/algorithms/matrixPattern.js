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
function matrixPattern() {
    var count = 1;
    for (var i = 0; i < 4; i++) {
        for (var j = 0; j < 4; j++) {
            process.stdout.write("".concat(count++, " "));
        }
        process.stdout.write("\n");
    }
};

console.log(matrixPattern());