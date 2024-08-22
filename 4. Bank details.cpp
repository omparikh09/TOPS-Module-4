/*
4. Write a C++ program to implement a class called Bank Account that has
private member variables for account number and balance. Include
member functions to deposit and withdraw money from the account.
*/

#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
	private :
		string Accountnumber;
		double balance;
		
	public :
		BankAccount(const string& accNum, const double bal)
		: Accountnumber(accNum), balance(bal) {}
		
		void deposit(double amount)
		{
			balance += amount;
			cout << "\nDeposit Successful Current balance :- " << balance << endl;
		}
		
		void withdraw(double amount)
		{
			if (amount <= balance)
			{
				balance -= amount;
				cout << "\nWithdrawal Successful Current balance :- " << balance << endl;
			}
			else
			{
				cout << "\nInsufficient balance Cannot withdraw" << endl;
			}
		}
};

int main() {
    string Accountnumber = "SB-123"; 
    double openingBalance = 100000;        

    cout << "\nAccount No.: " << Accountnumber << " Balance: " << openingBalance << endl;

    BankAccount account(Accountnumber, openingBalance);

    double depositAmount = 150000;
    cout << "\nDeposit Amount: " << depositAmount << endl;
    account.deposit(depositAmount);

    double withdrawalAmount = 75000;
    cout << "\nWithdrawal Amount: " << withdrawalAmount << endl;
    account.withdraw(withdrawalAmount);

    withdrawalAmount = 180000;
    cout << "\nAttempt to withdraw Amount: " << withdrawalAmount << endl;
    account.withdraw(withdrawalAmount);

    return 0;
}
