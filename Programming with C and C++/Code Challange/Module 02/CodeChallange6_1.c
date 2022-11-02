/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to find the number of odd numbers in the given array.

The array is: int numbers[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
Create a function that accepts an array of integer values.
The function should find out the number of odd numbers in the array and then print the result.
========================================================================================================== */

#include <stdio.h>

int oddNums(int nums[], int len) {
    int odds = 0;

    for (int i = 0; i < len; i++) {
        odds += (nums[i] % 2) ? 1 : 0;
    }
    return odds;
}

int main() {
    int numbers[10] = {2, 98, 99, 27, 31, 53, 88, 92, 11, 12};
    int len = sizeof(numbers) / sizeof(int);
    printf("total number of odds are: %d", oddNums(numbers, len));

    return 0;
}