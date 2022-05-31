#include <stdio.h>
const int a[6] = {9, 10, 20, 100, 300, 1000};

/**
 * @file binary_search.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-05-29
 *
 * @copyright Copyright (c) 2022
 *
 * @details {
 *    Given array a; write a program that searches for a target.
 *    The program must run in O(log(n)) time;
 * }
 */

int binary_search(int target)
{

    /**
     * @brief
     * 1.SET left, right to corresponding indices of array;
     *
     * 2.WHILE left is less or equal to right ->
     *      SET mid to middle of search interval;
     *      IF mid ∈ A is equal to target =>
     *           RETURN index of target;
     *      ELSE if mid ∈ A is greater than target =>
     *           SET right to mid - 1 to search lower half;
     *      ELSE =>
     *           SET left to mid + 1 to search greater half;
     *
     * RETURN -1 if not found index of target;
     */

    int left = 0, right = 5;

    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (a[mid] == target)
            return mid;
        else if (a[mid] > target)
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main()
{
    
    printf("%d ", binary_search(9));

    return 0;
}