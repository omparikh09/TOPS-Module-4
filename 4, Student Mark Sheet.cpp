// 4. Write a C++ Program display Student Mark sheet using Multiple inheritance
#include<iostream>
#include<string>
using namespace std;

class Person
{
	protected :
		string name;
		int age;
		
	public :
		void read_person()
		{
			cout << "\nEnter Name :- ";
			cin >> name;
			cout << "\nEnter Age :- ";
			cin >> age;
		}
		
		void display_person()
		{
			cout << "\nName :- " << name;
			cout << "\nAge :- " << age;
		}
};

class Student : public Person
{
	private :
		int rollnum;
		
	public :
		void read_student()
		{
			read_person();
			
			cout << "\nEnter Roll Number :- ";
			cin >> rollnum;
		}
		
		void display_student()
		{
			display_person();
			
			cout << "\nRoll Number :- " << rollnum;
		}
};

class Marks : public Student
{
	private :
		int m1,m2,m3;
	
	public :
		void read_marks()
		{
			read_student();
			
			cout << "\nEnter Marks 1 :- ";
			cin >> m1;
			cout << "\nEnter Marks 2 :- ";
			cin >> m2;
			cout << "\nEnter Marks 3 :- ";
			cin >> m3;
		}
		
		void display_marks()
		{
			cout << "\nMarks 1 :- " << m1;
			cout << "\nMarks 2 :- " << m2;
			cout << "\nMarks 3 :- " << m3;
			cout << "\nTotal Marks :- " << (m1 + m2 + m3);
			cout << "\nPercentage :- " << ((m1+m2+m3) / 3.0) << "%";
		}
};

int main()
{
	Marks student;
	student.read_marks();
	
	cout << "\nStudent Mark Sheet :- ";
	student.display_marks();
	
	return 0;
}
