/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to input two integers and find the sum of those two numbers by using pointers.

Define two integer variables and get user input.
Define two pointers for each integer variable.
Find the sum and print the result.
========================================================================================================== */

#include <stdio.h>

int main() {
    int num1, num2;
    printf("enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int * ptr1 = &num1;
    int * ptr2 = &num2;

    int sum = *ptr1 + *ptr2;
    printf("sum of %d and %d is: %d", *ptr1, *ptr2, sum);

    return 0;
}