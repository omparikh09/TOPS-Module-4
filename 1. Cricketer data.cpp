/*
1. Assume a class cricketer is declared. Declare a derived class batsman from
cricketer. Data member of batsman. Total runs, Average runs and best
performance. Member functions input data, calculate average runs, Display
data. (Single Inheritance)
*/

#include<iostream>
#include<string>
using namespace std;
class Cricketer
{
	public :
		string name;
		int age;
	
		void inputCricketerData()
		{
			cout << "\nEnter Name :- " ;
			cin >> name;
			cout << "\nEnter Age :- ";
			cin >> age;
		}
	
		void displayCricketerData()
		{
			cout << "\nName :- " << name;
			cout << "\nAge :- " << age;
		}
};

class Batsman:public Cricketer
{
	private:
    	int totalRuns;
    	float averageRuns;
    	int bestPerformance;

	public:
    	void inputBatsmanData() 
		{
    	    inputCricketerData();
    	    cout << "\nEnter total runs :- ";
    	    cin >> totalRuns;
    	    cout << "\nEnter best performance :- ";
    	    cin >> bestPerformance;
    	    calculateAverageRuns();
    	}

    	void calculateAverageRuns() 
		{
        	int matches = 10;
        	averageRuns = static_cast<float>(totalRuns) / matches;
    	}

    	void displayBatsmanData() 
		{
    	    displayCricketerData();
    	    cout << "\nTotal Runs :- " << totalRuns << endl;
    	    cout << "\nAverage Runs :- " << averageRuns << endl;
    	    cout << "\nBest Performance :- " << bestPerformance << endl;
    	}
};

int main()
{
	Batsman b;
	b.inputBatsmanData();
	b.displayBatsmanData();
	return 0;
}
