/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
WAP to print the name of the calendar month using an enum. The enum values should start from 1 for January
and end at 12 for December.

Print the name of the month within the switch case statement.
========================================================================================================== */

#include <stdio.h>

enum Months {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
};

int main() {
    enum Months month;

    month = MAR;

       switch (month) {

        case 1:
            puts("January");
        break;

        case 2:
            puts("February");
        break;

        case 3:
            puts("March");
        break;

        case 4:
            puts("April");
        break;

        case 5:
            puts("May");
        break;

        case 6:
            puts("June");
        break;

        case 7:
            puts("July");
        break;

        case 8:
            puts("August");
        break;

        case 9:
            puts("September");
        break;

        case 10:
            puts("October");
        break;

        case 11:
            puts("November");
        break;

        case 12:
            puts("December");
        break;
    }

    return 0;
}