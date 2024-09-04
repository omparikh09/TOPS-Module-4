/*
8. Write a C++ program to implement a class called Student that has private
member variables for name, class, roll number, and marks. Include
member functions to calculate the grade based on the marks and display
the student's information. Accept address from each student implement
using of aggregation
*/

#include<iostream>
#include<string>
using namespace std;

class Address
{
	public :
		string street;
		string city;
		string state;
		string zipcode;
	
		Address(const string& street, const string& city, const string& state, 
		const string& zipcode)
		:street(street), city(city), state(state), zipcode(zipcode) {}
	
};

class Student
{
	private :
		string name;
		string studentclass;
		int rollnumber;
		double marks;
		Address address;
		
	public :
		Student(const string& name, const string& studentclass, int rollnumber, double marks,
		const Address& address)
		:name(name), studentclass(studentclass), rollnumber(rollnumber), marks(marks),
		address(address) {}
		
		string calculateGrade() const 
		{
        	if (marks >= 90) 
			return "A+";
        	else if (marks >= 80) 
			return "A";
        	else if (marks >= 70) 
			return "B";
        	else if (marks >= 60) 
			return "C";
        	else 
			return "D";
    	}
    	
    	void displayInformation() const
    	{
    		cout << "\nName :- " << name ;
    		cout << "\nClass :- " << studentclass ;
    		cout << "\nRoll Number :- " << rollnumber ;
    		cout << "\nMarks :- " << marks ;
    		cout << "\nGrade :- " << calculateGrade() ;
    		cout << "\nAddress :- " << address.street << "," << address.city << "," << address.state << "-" << address.zipcode;  		
		}
};

int main()
{
	Address address("Suthar Fali","Ahmedabad","Gujrat","382150");
	
	Student student("Om Parikh", "BCA Grade", 20, 70.4, address);
	
	student.displayInformation();
	
	return 0;
}
