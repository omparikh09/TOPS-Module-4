/*
8. Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading
*/

#include <iostream>
using namespace std;

// Function to add two integers
int operate(int a, int b) 
{
    return a + b;
}

// Function to subtract two integers
int operate(int a, int b, char op) 
{
    if (op == '-') 
	{
        return a - b;
    }
    return 0; // Default return value
}

// Function to multiply two doubles
double operate(double a, double b) 
{
    return a * b;
}

// Function to divide two doubles
double operate(double a, double b, char op) 
{
    if (op == '/') 
	{
        return a / b;
    }
    return 0.0; // Default return value
}

int main() 
{
    int a = 10, b = 5;
    double x = 10.5, y = 2.5;

    cout << "Addition of integers: " << operate(a, b) << endl;
    cout << "Subtraction of integers: " << operate(a, b, '-') << endl;
    cout << "Multiplication of doubles: " << operate(x, y) << endl;
    cout << "Division of doubles: " << operate(x, y, '/') << endl;

    return 0;
}

