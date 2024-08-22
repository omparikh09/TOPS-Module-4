// 1. WAP to create simple calculator using class.

#include<iostream>
using namespace std;

class Calculator
{
	public :
		double add(double a,double b)
		{
			return a + b;
		}
		
		double sub(double a,double b)
		{
			return a - b;
		}
		
		double mul(double a,double b)
		{
			return a * b;
		}
		
		double div(double a,double b)
		{
			if(b != 0)
			{
				return a / b;
			}
			else
			{
				cout << "\nError: Division by zero!" << endl;
				return 0;			
			}
		}
};

int main()
{
	Calculator calc;
	double num1, num2;
	char op;
	
	cout << "\nEnter the First number :- ";
	cin >> num1;
	cout << "\nEnter operator (+, -, *, /) :- ";
	cin >> op;
	cout << "\nEnter the Second number :- ";
	cin >> num2;
	
	switch(op)
	{
		case '+':
			cout << "\nResult :- " << calc.add(num1,num2) << endl;
			break;
			
		case '-':
			cout << "\nResult :- " << calc.sub(num1,num2) << endl;
			break;
			
		case '*':
			cout << "\nResult :- " << calc.mul(num1,num2) << endl;
			break;
			
		case '/':
			cout << "\nResult :- " << calc.div(num1,num2) << endl;
			break;			
			
		default :
			cout << "\nInvalid Operator!" << endl;
		
	}
	
	return 0;
}
