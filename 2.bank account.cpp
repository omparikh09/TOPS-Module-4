/*
2. Define a class to represent a bank account. Include the following members:
Data Member:
	-Name of the depositor
	-Account Number
	-Type of Account
	-Balance amount in the account
Member Functions
	-To assign values
	-To deposited an amount
	-To withdraw an amount after checking balance
	-To display name and balance
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
	private:
    	string depositorName;
    	int accountNumber;
    	string accountType;
    	double balance;

	public:
    
    	void assignValues(string name, int accNum, string accType, double bal) 
		{
        	depositorName = name;
        	accountNumber = accNum;
        	accountType = accType;
        	balance = bal;
    	}

	    void deposit(double amount) 
		{
    	    balance += amount;
    	    cout << "\nAmount deposited successfully. Current balance: " << balance << endl;
    	}

    	void withdraw(double amount) 
		{
        	if (amount > balance) 
			{
            	cout << "\nInsufficient balance!" << endl;
        	} 
			else
			{
          		balance -= amount;
            	cout << "\nAmount withdraw successfully. Current balance: " << balance << endl;
        	}
    	}

    	void display() const 
		{
        	cout << "\nDepositor Name: " << depositorName << endl;
        	cout << "\nAccount Number: " << accountNumber << endl;
        	cout << "\nAccount Type: " << accountType << endl;
        	cout << "\nBalance: " << balance << endl;
    	}
};

int main() 
{
    BankAccount account;

    account.assignValues("Om Parikh", 51561, "Savings", 50000.00);

    account.display();

    account.deposit(15000.00);

    account.withdraw(20000.00);

    account.display();

    return 0;
}
