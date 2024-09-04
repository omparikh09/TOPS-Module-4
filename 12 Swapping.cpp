//12.Write a programto swap the two numbers using friend function without using third variable.

#include<iostream>
using namespace std;

class Swap
{
	private :
		int a,b;
	public :
		// Constructor to initialize the numbers
		Swap(int x, int y) : a(x), b(y) {}
		
		// Friend function to swap the numbers
		friend void swap(Swap& s);
		
		// Function to display the numbers
		void display() const
		{
			cout << "\na = " << a << "\nb = " << b << endl;
		}
};

void swap(Swap& s) 
{
    s.a = s.a + s.b;
    s.b = s.a - s.b;
    s.a = s.a - s.b;
}

int main() 
{
    int x, y;
    cout << "\nEnter first numbers :- ";
    cin >> x;
	cout << "\nEnter second numbers :- "; 
	cin >> y;

    Swap s(x, y);

    cout << "\nBefore swapping :- ";
    s.display();

    swap(s);

    cout << "\nAfter swapping :- ";
    s.display();

    return 0;
}
