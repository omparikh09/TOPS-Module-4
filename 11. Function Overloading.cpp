/*
11. Write a program to calculate the area of circle, rectangle and triangle
	using Function Overloading
	Rectangle: Area * breadth
	Triangle: ½ *Area* breadth
	Circle: Pi * Area *Area
*/

#include <iostream>
using namespace std;

// Function to calculate the area of a circle
double area(double radius) 
{
    return 3.14 * radius * radius;
}

// Function to calculate the area of a rectangle
double area(double length, double breadth) 
{
    return length * breadth;
}

// Function to calculate the area of a triangle
double area(double base, double height, char type) 
{
    return 0.5 * base * height;
}

int main() 
{
    double radius, length, breadth, base, height;

    cout << "\nEnter the radius of the circle :- ";
    cin >> radius;
    cout << "\nArea of the circle :- " << area(radius) << endl;

    cout << "\nEnter the length of the rectangle :- ";
    cin >> length;
    
	cout << "\nEnter the breadth of the rectangle :- ";
    cin >> breadth;
    cout << "\nArea of the rectangle :- " << area(length, breadth) << endl;

    cout << "\nEnter the base of the triangle :- ";
    cin >> base;
    cout << "\nEnter the height of the triangle :- ";
    cin >> height;
    
    cout << "\nArea of the triangle :- " << area(base, height, 't') << endl;

    return 0;
}

