//2. Write a program of Addition, Subtraction, Division, Multiplication using constructor.

#include<iostream>
using namespace std;

class Calculator{
	private :
		double num1;
		double num2;
		
	public :
		Calculator(double n1, double n2)
		{
			num1 = n1;
			num2 = n2;
		}
		
		double add()
		{
			return num1 + num2;
		}
		
		double sub()
		{
			return num1 - num2;
		}
		
		double mul()
		{
			return num1 * num2;
		}
		
		double div()
		{
			if(num2 != 0)
			{
				return num1 / num2;
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
	double x, y;
	
	cout << "\nEnter the value of x :- ";
	cin >> x;
	
	cout << "\nEnter the value of y :- ";
	cin >> y;
	
	Calculator calc(x, y);
	
	cout << "\nAddition of two numbers :- " << calc.add() << endl;
	cout << "\nSubtraction of two numbers :- " << calc.sub() << endl;
	cout << "\nMultiplication of two numbers :- " << calc.mul() << endl;
	cout << "\nDivition of two numbers :- " << calc.div() << endl;
	
	return 0;
}
