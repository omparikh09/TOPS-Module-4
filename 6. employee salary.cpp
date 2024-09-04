/*
6. Write a C++ program to implement a class called Employee that has
private member variables for name, employee ID, and salary. Include
member functions to calculate and set salary based on employee
performance. Using of constructor
*/

#include<iostream>
#include<string>
using namespace std;
class Employee
{
	private :
		string name;
		int emp_id;
		double salary;
		
	public :
		Employee(const string& empName, int empId, double empSalary) : 
		name(empName), emp_id(empId), salary(empSalary) {}
		
		void calculatesalary(double performanceRating)
		{
			if(performanceRating >= 0.0 && performanceRating <= 1.4)
			{
				salary *= performanceRating;
			}
			else
			{
				cout << "\ninvalid performance rating. salary remains unchanged ";
			}
		}
		
		void setSalary(double empSalary)
		{
			salary = empSalary;
		}

		string getName() const
		{
			return name;
		}

		int getemp_id() const
		{
			return emp_id;
		}

		double getsalary() const
		{
			return salary;
		}
};

int main()
{
	string empName;
	int empId;
	double empSalary;
	
	cout << "\nEnter the Employee Name :- ";
	cin >> empName;
	
	cout << "\nEnter the Employee Id :- ";
	cin >> empId;
	
	cout << "\nEnter the Employee Salary :- ";
	cin >> empSalary;
	
	Employee employee(empName, empId, empSalary);
	
	cout << "\nInitial salary :- " << employee.getsalary();
	
	double performanceRating;
	cout << "\nInpute Performance Rating (0.0-1.4) :- ";
	cin >> performanceRating;
	
	employee.calculatesalary(performanceRating);
	
	cout << "\nUpdate Salary :- " << employee.getsalary();
	
	return 0;
	
}
