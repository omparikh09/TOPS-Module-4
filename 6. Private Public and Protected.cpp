/*
6. Write a C++ Program to show access to Private Public and Protected using
Inheritance
*/

#include <iostream>
using namespace std;

class Base 
{
	private:
    	int privateVar;
    	privateVar = 1;
	protected:
    	int protectedVar = 2;
	public:
    	int publicVar = 3;

    	// Function to access private member
    	int getPrivateVar() 
		{
        	return privateVar;
    	}
};

class PublicDerived : public Base 
{
	public:
    	// Function to access protected member from Base
    	int getProtectedVar() 
		{
        	return protectedVar;
    	}
};

class ProtectedDerived : protected Base 
{
	public:
    	// Function to access protected member from Base
    	int getProtectedVar() 
		{
    	    return protectedVar;
    	}

    	// Function to access public member from Base
    	int getPublicVar() 
		{
        	return publicVar;
    	}
};

class PrivateDerived : private Base 
{
	public:
    	// Function to access protected member from Base
    	int getProtectedVar() 
		{
        	return protectedVar;
    	}

    	// Function to access public member from Base
    	int getPublicVar() 
		{
        	return publicVar;
    	}
};

int main() 
{
    PublicDerived publicObj;
    cout << "Public Derived Class:" << endl;
    cout << "Private = " << publicObj.getPrivateVar() << endl;
    cout << "Protected = " << publicObj.getProtectedVar() << endl;
    cout << "Public = " << publicObj.publicVar << endl;

    ProtectedDerived protectedObj;
    cout << "\nProtected Derived Class:" << endl;
    cout << "Protected = " << protectedObj.getProtectedVar() << endl;
    cout << "Public = " << protectedObj.getPublicVar() << endl;

    PrivateDerived privateObj;
    cout << "\nPrivate Derived Class:" << endl;
    cout << "Protected = " << privateObj.getProtectedVar() << endl;
    cout << "Public = " << privateObj.getPublicVar() << endl;

    return 0;
}

