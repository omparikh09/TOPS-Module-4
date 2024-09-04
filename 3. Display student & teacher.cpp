/*
3. Create a class person having members name and age. Derive a class student
having member percentage. Derive another class teacher having member
salary. Write necessary member function to initialize, read and write data.
Write also Main function (Multiple Inheritance)
*/

#include<iostream>
#include<string>
using namespace std;

class Person
{
	protected :
		string name;
		int age;
	
	public :	
		void read_data()
		{
			cout << "\nEnter a Name :- ";
			cin >> name;
			cout << "\nEnter a Age :- ";
			cin >> age;
		}	
		
		void display_data()
		{
			cout << "\nName :- " << name;
			cout << "\nAge :- " << age;
		}
};

class Student : public Person
{
	private :
		float percentage;
		
	public :
		void read_student_data()
		{
			read_data();
			
			cout << "Enter the Student Percentage :- ";
			cin >> percentage;
		}
		
		void display_student_data()
		{
			display_data();
			
			cout << "\nPercentage :- " << percentage << "%";
		}
};

class Teacher : public Person
{
	private :
		double salary;
		
	public :
		void read_teacher_data()
		{
			read_data();
			
			cout << "\nEnter Teacher Salary :- ";
			cin >> salary;
		}
		
		void display_teacher_data()
		{
			display_data();
			
			cout << "\nSalary :- $" << salary;
		}
};

int main()
{
	Student student;
	Teacher teacher;
	
	cout << "\nEnter Student Details :- ";
	student.read_student_data();
	cout << "\nEnter Teacher Details :- ";
	teacher.read_teacher_data();
	
	cout << "\nStudent Information :- ";
	student.display_student_data();
	cout << "\nTeacher Information :- ";	
	teacher.display_teacher_data();
	
	return 0;
}
