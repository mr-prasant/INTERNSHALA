/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to input a 2D array of size 2 * 3,
print all the elements in the form of a matrix and
then find out the sum of all the elements entered in the 2D array.
========================================================================================================== */

#include <stdio.h>

int main() {
    //variables
    int rows = 2, cols = 3, sum = 0;
    int arr[rows][cols];

    //user input
    puts("Enter the values for 2D array!");
    for (int i = 0; i < rows; i++) {
        printf("Enter the value for row %d in: \n", (i + 1));
        for (int j = 0; j < cols; j++) {
            printf("-> the column %d: ", (j + 1));
            fflush(stdout);
            scanf("%d", &arr[i][j]);

            //sum
            sum += arr[i][j];
        }
    }

    //matrix output
    puts("\nThe generated array is: ");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        puts("");
    }

    //sum output
    printf("And the sum of all the elements is: %d", sum);

    return 0;
}