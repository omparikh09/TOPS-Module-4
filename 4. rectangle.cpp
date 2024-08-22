/*
4. Write a C++ program to create a class called Rectangle that has private
member variables for length and width. Implement member functions to
calculate the rectangle's area and perimeter.
*/
#include<iostream>
using namespace std;

class Rectangle{
	private :
		double length;
		double width;
		
	public :
		Rectangle(double l,double w)
		{
			length = l;
			width = w;
		}	
		
		double calculateArea() 
		{
			return length * width;
		}
		
		double calculatePerimeter()
		{
			return 2 * (length + width);
		}
		
		void display()
		{
			cout << "Length :- " << length << endl;
			cout << "Width :- " << width << endl;
			cout << "Area :- " << calculateArea() << endl;
			cout << "Perimeter :- " << calculatePerimeter() << endl;
		}
		
};

int main()
{
	double l, w;
	cout << "Enter the length of the rectangle :- ";
	cin >> l;
	cout << "Enter the width of the rectangle :- ";
	cin >> w;
	
	Rectangle rectangle(l, w);
	
	rectangle.display();
	
	return 0;
}
