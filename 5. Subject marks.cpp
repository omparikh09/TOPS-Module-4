/*
5. Assume that the test results of a batch of students are stored in three different
classes. Class Students are storing the roll number. Class Test stores the
marks obtained in two subjects and class result contains the total marks
obtained in the test. The class result can inherit the details of the marks
obtained in the test and roll number of students. (Multilevel Inheritance)
*/

#include <iostream>
using namespace std;

class Student 
{
	public:
    	int rollNumber;
    	void setRollNumber(int roll) 
		{
    	    rollNumber = roll;
    	}
    	
    	void displayRollNumber() 
		{
        	cout << "\nRoll Number :- " << rollNumber ;
    	}
};

class Test : public Student 
{
	public:
    	int subject1, subject2;
    	void setMarks(int s1, int s2) 
		{
        	subject1 = s1;
        	subject2 = s2;
    	}
    	void displayMarks() 
		{
        	cout << "\nMarks in Subject 1 :- " << subject1;
        	cout << "\nMarks in Subject 2 :- " << subject2;
    	}
};


class Result : public Test 
{
	public:
    	int totalMarks;
    	void calculateTotal() 
		{
        	totalMarks = subject1 + subject2;
    	}
    	void displayResult() 
		{
        	displayRollNumber();
        	displayMarks();
        	cout << "\nTotal Marks :- " << totalMarks;
    	}
};

int main() 
{
    Result student;
    student.setRollNumber(101);
    student.setMarks(85, 90);
    student.calculateTotal();
    student.displayResult();
    return 0;
}

