// 10. Write a program to concatenate the two strings using Operator Overloading.

#include <iostream>
#include <cstring>
using namespace std;

class String 
{
	private:
    	char str[100];
	public:
    	// Constructor to initialize the string
    	String(const char* s = "") 
		{
        	strcpy(str, s);
    	}

    	// Overloading the + operator to concatenate two strings
    	String operator+(const String& s) 
		{
        	String result;
        	strcpy(result.str, str);
        	strcat(result.str, s.str);
        	return result;
    	}

    	// Function to display the string
    	void display() const 
		{
        	cout << str;
    	}
};

int main() 
{
    String str1("Hello, ");
    String str2("World!");

    String str3 = str1 + str2;

    cout << "Concatenated String :- ";
    str3.display();
    cout << endl;

    return 0;
}

