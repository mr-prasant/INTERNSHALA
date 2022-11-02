/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
The following program takes ‘n’ numbers as user input and prints their sum.
Modify the program to allow users to input more numbers and
find the sum of all the numbers stored in the memory block.

Use realloc() to re-allocate memory.
In the end, use free() to free the pointer, therefore, free up memory.
========================================================================================================== */

#include <stdio.h>
#include <stdlib.h>

float main() {
    float *ptr, sum = 0;
    int n1;

    printf("enter a number: ");
    fflush(stdout);
    scanf("%d", &n1);

    ptr = (float*) calloc(n1, sizeof(float));
    printf("enter %d numbers: ", n1);
    fflush(stdout);

    for (int i = 0; i < n1; i++) {
        scanf("%f", &ptr[i]);
    }

    for (int i = 0; i < n1; i++) {
        sum += ptr[i];
    }

    // reallocate
    int n2;
    printf("enter how many more new nums have to add: ");
    fflush(stdout);
    scanf("%d", &n2);

    ptr = (float*) realloc(ptr, (n1 + n2) * sizeof(float));
    printf("enter %d new numbers: ", n2);
    fflush(stdout);

    for (int i = n1; i < (n1 + n2); i++) {
        scanf("%f", &ptr[i]);
    }

    for (int i = n1; i < (n1 + n2); i++) {
        sum += ptr[i];
    }

    printf("sum: %f", sum);

    return 0;
}