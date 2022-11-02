/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
WAP to find the largest number in the given array using a pointer.

The array is: float numbers[5] = {983, 2.9, 34, 433, 1000.567};
Create a user-defined function that will accept the pointer as a parameter.
The pointer should point to the array defined in the main function.
Using pointer find the largest number in the user-defined function and
return the largest number to the main function.
========================================================================================================== */

#include <stdio.h>

float findMax(float *, int);

int main() {
    float numbers[5] = {983, 2.9, 34, 433, 1000.567};
    float max = findMax(numbers, 5);
    printf("max: %f\n", max);

    return 0;
}

float findMax(float * ptr, int size) {
    float max = *ptr;
    
    for (int i = 0; i < size; i++, ptr++) {
        max = (*ptr > max) ? *ptr : max;
    }

    return max;
}