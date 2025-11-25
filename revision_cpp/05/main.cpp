/*
Statement:
Write a C++ program to calculate the area and diameter of a circle using a constant value PI.
Use arithmetic operators (+, *, /) to perform calculations.    */

// area = PI * radius * radius
// diameter = 2 * radius 
// radius = diameter / 2  ( if not given ) 

#include <iostream>
using namespace std;
 
int main()
 {
    const float PI = 3.14;   // Constant value by const qualifer declaration mehthod

    float radius = 6.0;

    // Arithmetic operators: +, -, *, /
    float area = PI * radius * radius;
    float diameter = 2 * radius;

    cout << "Area: " << area << endl;
    cout << "Diameter: " << diameter << endl;

    return 0;
}



