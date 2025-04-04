// INCLUDES AND PRAGMA 
#pragma warning (disable:6031)
#include "Triangle.h"
#include <iostream>
#include <conio.h>

int main() {
    Triangle triangle;

    // ** FIRST TRIANGLE, ADJUSTING SIZES KEEPS THE SHAPE BUT RAN INTO COMPLICATIONS WITH \
    // DISPLAYING THE TEXT, SO IF YOU MAKE IT MUCH SMALLER OR LARGER, THE MIDDLE ROW WILL SCOOT OFF TRACK. **
    triangle.setOppositeSide(12);
    triangle.setAdjacentSide(15);
    triangle.display();

    _getch(); // INPUT CALL

    // SECOND TRIANGLE
    triangle.setOppositeSide(14.6);
    triangle.setAdjacentSide(18.3);
    triangle.display();

    // EXIT TO OS
    _getch();
    return 0;
}