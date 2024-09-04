// 1. Write a program of to swap the two values using template

#include<iostream>
using namespace std;
template<typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	
	cout << "Enter the Value of X:- ";
	cin >> x;
	
	cout << "Enter the Value of Y:- ";
	cin >> y;
	
	cout << "\n Values Befor Swapping :- " << x;
	cout << "\n Values Befor Swapping :- " << y;
	
	swapvalues(x,y);
	cout << "\n\n Values After Swapping :- " << x;
	cout << "\n Values After Swapping :- " << y;

	return 0;
}
