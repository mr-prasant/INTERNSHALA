/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to store details of a book using Union and print the details. The details of the book should contain:

Title
Author
Price
Define the details of any two of your most favourite books that you have read
========================================================================================================== */

#include <stdio.h>
#include <string.h>

union Book {
    char title[50];
    char author[50];
    float price;
};


int main() {
    union Book b1;

    strcpy(b1.title, "Ramayana");
    printf("title:\t%s\n", b1.title);

    strcpy(b1.author, "Valmiki");
    printf("author:\t%s\n", b1.author);

    b1.price = 699;
    printf("price:\t%f\n", b1.price);
   

    return 0;
}