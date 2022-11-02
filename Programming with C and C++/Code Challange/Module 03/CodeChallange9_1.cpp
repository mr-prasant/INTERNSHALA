/* =======================================================================================================
                                                                                               @prasant.cp
Statement:
Complete the given program based on the instructions provided in the comments in each class.
========================================================================================================== */

#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>
#include <new>

#define PI 3.14

using namespace std;

class Shape { 
    public:
    virtual float getArea() = 0; // for area
    virtual float getPerimeter() = 0;  // for perimeter 
};

class Square : public Shape {
    public:
    float size;

    // area
    float getArea() {
        return (size * size);
    }

    // perimeter
    float getPerimeter() {
        return (4 * size);
    } 

    // constructor
    Square (float size) {
        this->size = size;
    }
};

class Rectangle : public Shape {
    public:
    float length;
    float width;

    // area
    float getArea() {
        return (length * width);
    }

    // perimeter
    float getPerimeter() {
        return (2 * (length + width));
    }   

    // constructor
    Rectangle (float length, float width) {
        this->length = length;
        this->width = width;
    } 
};

class Circle : public Shape {
    public:
    float radius;

    // area
    float getArea() {
        return (PI * radius * radius);
    }

    // perimeter
    float getPerimeter() {
        return (2 * PI * radius);
    } 

    // constructor
    Circle (float radius) {
        this->radius = radius;
    }
};

class Triangle : public Shape {
    public:
    float a;
    float b;
    float c;

    // perimeter
    float getPerimeter() {
        return (a + b + c);
    } 

    // area
    float getArea() {
        float s = getPerimeter() / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    // constructor
    Triangle (float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

void display(char shape[], float area, float perimeter) {
    string SHAPE = "";

    for (int i = 0; i < strlen(shape); i++) {
        SHAPE += toupper(shape[i]);
    }

    cout << "SHAPE: " << SHAPE << endl;
    cout << "area: " << area << endl;
    cout << "perimeter: " << perimeter << endl << endl;
}


int main() {
    // square
    Shape *sq = new Square(5);
    display("square", sq->getArea(), sq->getPerimeter());

    // rectangle
    Shape *rect = new Rectangle(2, 5);
    display("rectangle", rect->getArea(), rect->getPerimeter());

    // circle
    Shape *circle = new Circle(5);
    display("circle", circle->getArea(), circle->getPerimeter());

    // triangle
    Shape *triangle = new Triangle(3, 4, 5);
    display("triangle", triangle->getArea(), triangle->getPerimeter());


    return 0;
}