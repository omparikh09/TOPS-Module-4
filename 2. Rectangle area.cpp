// 2. Write a C++ Program to find Area of Rectangle using inheritance.

#include<iostream>
using namespace std;

class Shape
{
	public :
		int a,b;
	
		void getdata(int n, int m)
		{
			a = n;
			b = m;
		}
};

class Rectangle : public Shape
{
	public :
//		int rectarea;
		
		int rectarea()
		{
			int result;
			result = a * b;
			return result; 
		}
};

int main()
{
	Rectangle r;
	int l,b;
	
	cout << "\nEnter The Length Of Rectangle :- ";
	cin >> l;
	cout << "\nEnter The Breadth Of Rectangle :- ";
	cin >> b;
	
	r.getdata(l,b);
	int area = r.rectarea();
	
	cout << "\nArea Of The Rectangle Is :- " << area;
	
	return 0;
}
