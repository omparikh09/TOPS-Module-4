//13.Write a program to find the max number from given two numbers using friend function.

#include <iostream>
using namespace std;

class Compare 
{
	private:
    	int num1, num2;
	public:
	    // Constructor to initialize the numbers
    	Compare(int a, int b) : num1(a), num2(b) {}

    	// Friend function to find the maximum number
    	friend int findMax(Compare c);

    	// Function to display the numbers
    	void display() const 
		{
        	cout << "\nNumber 1 :- " << num1 << "\nNumber 2 :- " << num2 << endl;
    	}
};

int findMax(Compare c) 	
{
    return (c.num1 > c.num2) ? c.num1 : c.num2;
}

int main() 
{
    int a, b;
    cout << "\nEnter one numbers :- ";
    cin >> a;
    cout << "\nEnter two numbers :- ";
    cin >> b;

    Compare c(a, b);

    cout << "\nBefore comparison :- ";
    c.display();

    int maxNum = findMax(c);
    cout << "\nThe maximum number is :- " << maxNum << endl;

    return 0;
}

