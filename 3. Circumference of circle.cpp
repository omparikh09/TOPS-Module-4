/*
3. Write a C++ program to implement a class called Circle that has private
member variables for radius. Include member functions to calculate the
circle's area and circumference.
*/

#include<iostream>
#include<cmath>
using namespace std;

class Circle
{
	private :
		double redius;
		
	public :
		Circle(double r)
		{
			redius = r;
		}	
		
		double calculateArea()
		{
			return M_PI * redius * redius;
		}
		
		double calculatecircumference()
		{
			return 2 * M_PI * redius;
		}
		
		void display()
		{
			cout << "Redius :- " << redius << endl;
			cout << "Area :- " << calculateArea() << endl;
			cout << "Circumference :- " << calculatecircumference() << endl;
		}
};

int main()
{
	double r;
	cout << "Enter the redius of the circle :- ";
	cin >> r;
	
	Circle circle(r);
	
	circle.display();
	
	return 0;
}
