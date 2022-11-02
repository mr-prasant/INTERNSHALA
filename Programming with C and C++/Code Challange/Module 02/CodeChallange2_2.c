/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to input a number and then count the number of digits present in the number using while loop.
========================================================================================================== */

#include <stdio.h>

int main() {
    // variables
    int num, count = 0;

    // user input
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    // while loop
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    // output
    printf("The number of digits: %d", count);

    return 0;
}