/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to input a number and check if it is a palindrome or not using do while loop.

A palindrome is a number that is the same if read from left to right or right to left.
Examples of palindromes: 121, 1331, 4987894, 2002, 98789, 989.
========================================================================================================== */

#include <stdio.h>

int main() {
    //variables
    int num = 0, rev = 0;

    //user input
    printf("Enter a number: ");
    fflush(stdout);
    scanf("%d", &num);

    int cnum = num;

    //getting reverse of num
    do {
        rev = (rev * 10) + (num % 10);
        num /= 10;
    } while (num > 0);

    //output condition
    if (cnum == rev) {
        printf("%d is a palindrome number!", cnum);
    } else {
        printf("%d is not a palindrome number!", cnum);
    }

    return 0;
}