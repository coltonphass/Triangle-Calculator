// IF NOT, THEN DEFINE
#ifndef TRIANGLE_H
#define TRIANGLE_H

// TRIANGLE CLASS
class Triangle {
public:
    // INITALIZE
    Triangle();

    // SETTERS TO DEFINE
    void setOppositeSide(double opposite);
    void setAdjacentSide(double adjacent);

    // GETTERS TO RETRIEVE
    double getOppositeSide() const;     // GRAB THE LENGTH OF OPPOSITE SIDE
    double getAdjacentSide() const;     // GRAB THE LENGTH OF ADJACENT SIDE
    double getHypotenuseSide() const;   // GRAB LENGTH OF HYPOTENUSE SIDE

    // CALCULATE THE PROPERTIES
    double getArea() const;             // CALCULATE AND RETURN AREA
    double getPerimeter() const;        // CALCULATE AND RETURN PERIMETER

    // DISPLAY THE TRIANGLE
    void display() const;

private:
    // STORE THE LENGTHS
    double oppositeSide;
    double adjacentSide;
    double hypotenuseSide;

    // INTERNAL CALCULATION
    void calculateHypotenuse(); // MATH FOR HYPOTENUSE
    void drawTriangle() const;  // DRAW TRIANGLE TO CONSOLE
};

// END SCRIPT
#endif