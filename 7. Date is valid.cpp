/*
7. Write a C++ program to implement a class called Date that has private
member variables for day, month, and year. Include member functions to
set and get these variables, as well as to validate if the date is valid
*/

#include<iostream>
using namespace std;
class Date 
{
	private:
    	int day;
    	int month;
    	int year;

	public:
	
    	Date(int d, int m, int y) : day(d), month(m), year(y) {}

    	void setDate(int d, int m, int y) 
		{
    	    day = d;
    	    month = m;
    	    year = y;
    	}

    	int getDay() const 
		{
			return day; 
		}
	    int getMonth() const 
		{ 
			return month; 
		}
    	int getYear() const 
		{ 
			return year; 
		}

    	bool isValidDate() const 
		{
    	    if (month < 1 || month > 12) 
			{
				return false;
    		}
			if (day < 1 || day > 31)
			{
				return false;
			}
			
    	    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) 
			{
				return false;
			}
			
    	    if (month == 2) 
			{
     	    	bool isLeap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    	    	if (isLeap && day > 29) 
				{
					return false;
				}
     	    	if (!isLeap && day > 28) 
				{
					return false;
				}
    	    }
		
    	    return true;
    	}
};

int main()
{
	int day, month, year;
	
	cout << "\nEnter A Day :- ";
	cin >> day;
	cout << "\nEnter A Month :- ";
	cin >> month;
	cout << "\nEnter A Year :- ";
	cin >> year;
	
	Date date(day, month, year);
	
	if(date.isValidDate())
	{
		cout << "\nThe date is valid :- " << date.getDay() << "/" << date.getMonth() 
		<< "/" << date.getYear();
	}
	else
	{
		cout << "\nThe date is invalid ";
	}
	
	return 0;
}
