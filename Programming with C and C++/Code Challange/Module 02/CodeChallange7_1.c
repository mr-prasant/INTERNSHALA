/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to display the nth Fibonacci number in the Fibonacci series.

The value ‘n’ will be entered by the user.
The Fibonacci series is a series of numbers in the following sequence:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
Where the 0th Fibonacci number is 0 and the 6th Fibonacci number is 8.

Except for the first two numbers (0 and 1) of the sequence, 
every other number in the sequence is the sum of the previous two numbers.
for example, 8 = 3 + 5 (addition of 3 and 5).
========================================================================================================== */

#include <stdio.h>

long getFib(long num) {
    if (num == 0 || num == 1) {
        return num;
    }else {
        return (getFib(num - 1) + getFib(num - 2));
    }
}

int main() {
    long num;
    printf("enter a number: ");
    scanf("%d", &num);

    long fibNum = getFib(num);
    printf("%d", fibNum);
    return 0;
}