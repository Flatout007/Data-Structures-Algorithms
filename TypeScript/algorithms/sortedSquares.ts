/**
    @function =>sortedSquares(nums=>number[]);

    @description => {
        Given an integer array nums sorted in non-decreasing order, 
        return an array of the squares of each number sorted in 
        non-decreasing order.
    }

    @example => {
        Input: nums = [-7,-3,2,3,11] // => [4,9,9,49,121]
    }

    @time => {O(n)}
    @space => {O(1)}
*/

function sortedSquares(nums: number[]) {
    /**
     @algorithm {
        1.FOR traversing of nums -> 
            SET the value in nums of [i] to it's squared version;

        2.SORT nums in non-decreasing order; 
     }
    */
    for (let i: number = 0; i < nums.length; i++) {
        nums[i] = Math.pow(nums[i], 2);
    }

    return nums = nums.sort((a, b) => a - b);
}

sortedSquares([-7,-3,2,3,11]);