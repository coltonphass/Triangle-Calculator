// INCLUDES
#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

// STD
using namespace std;

// INITIALIZE TRIANGLE
Triangle::Triangle() {
    oppositeSide = 0.0;
    adjacentSide = 0.0;
    hypotenuseSide = 0.0;
}

// SETTERS
void Triangle::setOppositeSide(double opposite) {
    oppositeSide = opposite;
    calculateHypotenuse();
}

void Triangle::setAdjacentSide(double adjacent) {
    adjacentSide = adjacent;
    calculateHypotenuse();
}
// GETTERS
double Triangle::getOppositeSide() const { return oppositeSide; }
double Triangle::getAdjacentSide() const { return adjacentSide; }
double Triangle::getHypotenuseSide() const { return hypotenuseSide; }

// PERFORM THE MATH OPERATIONS!
double Triangle::getArea() const {
    return (oppositeSide * adjacentSide) / 2.0;
}

double Triangle::getPerimeter() const {
    return oppositeSide + adjacentSide + hypotenuseSide;
}

void Triangle::calculateHypotenuse() {
    hypotenuseSide = sqrt(pow(oppositeSide, 2) + pow(adjacentSide, 2));
}

// DRAW THE TRIANGLE
void Triangle::drawTriangle() const {
    int size = static_cast<int>(adjacentSide); // CONVERT TO INT SINCE WE CANT PRINT HALF AN "*"

    // CALCULATE MIDDLE FOR ASETHETIC REASONS
    int midpoint = size / 2;

    for (int i = 0; i < size; i++) {
        // IF WE HIT THE MIDDLE, LETS PRINT THAT OPPOSITE SIDE TEXT
        if (i == midpoint) {
            cout << "Opposite Side = " << oppositeSide;
            for (int s = 0; s < 10; s++) cout << ' ';
        }
        else {
            for (int s = 0; s < 30; s++) cout << ' ';   // LETS MAKE SPACE FOR AESTHETIC REASONS
        }

        // PRINT THE TRIANGLE
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i || i == size - 1) { // MATH FOR PRINTING STARS
                cout << '*';
            }
            else {
                cout << ' ';
            }
        }
        // RIGHT CENTERED HYPOTENUSE SIDE TEXT
        if (i == midpoint) {
            cout << right << setw(30) << "Hypotenuse Side = " << hypotenuseSide;
        }

        cout << endl;
    }
    // SIMPLE SPACING FOR BOTTOM MESSAGE, DYNAMIC WAS TOO MUCH LOOPING AND MESSY
    cout << right << setw(47) << "Adjacent Side = " << adjacentSide << endl;
}

// DISPLAY TO THE CONSOLE
void Triangle::display() const {
    cout << fixed << setprecision(1);

    // TRIANGLE TO CONSOLE LOGIC
    drawTriangle();

    cout << setprecision(0); // ROUND IT
    cout << "The area of the triangle is      : " << getArea() << endl;
    cout << "The perimeter of the triangle is : " << getPerimeter() << endl;
    cout << "Press any key to continue..." << endl;
}
