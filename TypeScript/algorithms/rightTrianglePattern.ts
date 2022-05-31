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

function rTriPattern(): void {
    for (let i: number = 0; i < 4; i++) {

        for (let j: number = 0; j < 4; j++) {
            if (j > i)
                continue;
            else
                console.log("*");
        }

        console.log("\n");
    }
}

rTriPattern();