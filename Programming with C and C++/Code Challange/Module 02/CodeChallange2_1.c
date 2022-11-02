/* =======================================================================================================
                                                                                               @prasant.cp
Statement: 
Write a program to calculate (1 * 1) + (2 * 2) + (3 * 3) + (4 * 4) + (5 * 5) + ... + (n * n) series,
where 'n' is the user input.
========================================================================================================== */

#include <stdio.h>

int main() {
    // variables
    int n, cal = 0;

    //input
    printf("Enter a number: ");
    fflash(stdout);
    scanf("%d", &n);

    //for loop
    for (int i = 1; i <= n; i++) {
        cal = cal + (i * i);
    }
    
    //output
    printf("The answer is: %d", cal);

    return 0;
}