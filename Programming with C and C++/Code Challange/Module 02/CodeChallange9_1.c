/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to input ‘n’ numbers and then find out their sum.

Use malloc() function to dynamically allocate memory as per the value of ‘n’.
Consider using ‘float’, since the user input could be a floating-pofloat decimal value.
========================================================================================================== */

#include <stdio.h>
#include <stdlib.h>

float main() {
    float *ptr, sum = 0;
    int n;

    printf("enter a number: ");
    fflush(stdout);
    scanf("%d", &n);

    ptr = (float*) malloc(n * sizeof(float));
    printf("enter %d numbers: ", n);
    fflush(stdout);

    for (int i = 0; i < n; i++) {
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < n; i++) {
        sum += ptr[i];
    }

    printf("sum: %f", sum);

    return 0;
}