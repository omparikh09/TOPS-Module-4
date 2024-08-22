/*
1. Write a programto find the multiplication values and the cubic values using
inline function
*/

#include<iostream>
using namespace std;

inline float mul(float a, float b)
{
	return a * b;
}

inline float cube(int s)
{
	return s * s * s;
}

int main()
{
	float x, y;
	
	cout << "Enter the value of x :- ";
	cin >> x;
	
	cout << "Enter the value of y :- ";
	cin >> y;
	
	cout << "Product of x and y :- " << mul(x, y) << endl;
	
	cout << "Cube of x :- " << cube(x) << endl;
	
	cout << "Cube of y :- " << cube(y) << endl;
	
	return 0;
}
