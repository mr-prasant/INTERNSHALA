/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to input 10 numbers in an array,
print the array and then find out the largest number present in the array.
========================================================================================================== */

#include <stdio.h>

int main() {
    //variables
    int arr[10];
    int max = 0;

    //user input for array
    puts("Enter the values for the array!");
    for (int i = 0; i < 10; i++) {
        printf("Enter the number %d: ", (i + 1));
        fflush(stdout);
        scanf("%d", &arr[i]);

        //getting the largest number
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    //array output
    printf("\nThe generated array is:");
    for (int i = 0; i < 10; i++) {
        printf(" %d", arr[i]);
    }

    //largest number output
    printf("\nAnd the largest number present in the array is %d", max);

    return 0;
}