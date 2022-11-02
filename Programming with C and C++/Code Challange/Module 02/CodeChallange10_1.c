/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Write a program to store details of a book using Structure. The details of the book should contain:

Title
Author
Price
Define the details of any two of your most favourite books that you have read.
========================================================================================================== */

#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};


int main() {
    struct Book b1;

    strcpy(b1.title, "Ramayana");
    strcpy(b1.author, "Valmiki");
    b1.price = 699;

    printf("title:\t%s\nauthor:\t%s\nprice:\t%.2f", b1.title, b1.author, b1.price);    

    return 0;
}