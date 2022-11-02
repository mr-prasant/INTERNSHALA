/* =======================================================================================================
                                                                                               @prasant.cp
Statement: 
Define a Macro preprocessor directive that contains the code to find the area of a rectangle.

The Macro should accept two parameters: length and breadth of the rectangle.
========================================================================================================== */

#include <iostream>

using namespace std;

//macro
#define AREA(l, b) (l * b)

int main() {
    //given array
    float len = 5;
    float wid = 2;

    cout << "area of rect: " << AREA(len, wid) << endl;

    return 0;
}