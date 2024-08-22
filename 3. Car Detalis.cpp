/*
3. Write a C++ program to create a class called Car that has private
member variables for company, model, and year. Implement member
functions to get and set these variables.
*/


#include <iostream>
#include <string>

using namespace std;

class Car 
{
	private:
	    string company; 
	    string model;   
	    int year;            

	public:
	    Car(const string& comp, const string& mdl, int yr)
 	       : company(comp), model(mdl), year(yr) {}

	    string getCompany() const 
		{
	        return company;
	    }

	    string getModel() const 
		{
	        return model;
	    }

	    int getYear() const
		{
    	    return year;
    	}

    	void setCompany(const string& comp) 
		{
       		company = comp;
    	}

    	void setModel(const string& mdl) 
		{
        	model = mdl;
    	}

    	void setYear(int yr) 
		{
        	year = yr;
    	}
};

int main() 
{
	
    Car car("AUDI", "A6", 2023);

    cout << "Company: " << car.getCompany() << endl;
    cout << "Model: " << car.getModel() << endl;
    cout << "Year: " << car.getYear() << endl;

    car.setCompany("Lamborgini");
    car.setModel("Huracan Evo");
    car.setYear(2022);

    cout << "\nUpdated Company: " << car.getCompany() << endl;
    cout << "Updated Model: " << car.getModel() << endl;
    cout << "Updated Year: " << car.getYear() << endl;

    return 0;
}

