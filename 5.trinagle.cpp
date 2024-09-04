/*
5. Write a C++ program to create a class called Triangle that has private
member variables for the lengths of its three sides. Implement member
functions to determine if the triangle is equilateral, isosceles, or scalene
*/
#include<iostream>
using namespace std;
class Triangle
{
	private :
		double side1;
		double side2;
		double side3;
	
	public :
		Triangle(double s1, double s2,double s3) : side1(s1), side2(s2), side3(s3) {}
		
		void determine()
		{
			if(side1 == side2 && side2 == side3)
			{
				cout << "Equilateral triangle" << endl;
			}
			else if(side1 == side2 || side1 == side2 || side2 == side3)
			{
				cout << "Isosceles triangle" << endl;
			}
			else
			{
				cout << "Scalene triangle" << endl;
			}
		} 
};

int main()
{
	double s1,s2,s3;
	
	cout << "\nInpute the lengths of the three side of the triangle :- ";
	cout << "\nside1 :- ";
	cin >> s1;
	cout << "\nside2 :- ";
	cin >> s2;
	cout << "\nside3 :- ";
	cin >> s3;
	
	Triangle triangle(s1,s2,s3);
	triangle.determine();
	
	return 0;
}
