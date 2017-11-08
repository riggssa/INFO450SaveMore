#include "stdafx.h"
#include <iostream>
#include <string>
#include "bankAccount.h"
#include "savings.h"
using namespace std;
//basic instance formulas
savings::savings(int a, double b, double i) : bankAccount(a, b, i)
{
	
}

savings::savings() : bankAccount()
{
	
}
//displays all attributes of account
void savings::Display()
{
	cout << " Account Number: " << accountNumber << " Current Balance: " << balance << " Current Interest Rate (Variable!): " << interestRate << endl;
	cout << "Any withdrawal will incur an automatic fee of $2." << endl;
}
//fills in account info
void savings::GetData()
{
	cout << "Enter Account Number?" << endl;
	cin >> accountNumber;
	cout << "Enter Balance?" << endl;
	cin >> balance;
}
//calculates interest rate
void savings::calculateInterest()
{
	if (balance < 10000)
	{
		interestRate = .01;
	}
	else if (balance >= 10000)
	{
		interestRate = .02;
	}
}
//updates account balance for new interest rate
void savings::updateBalance()
{
	balance = balance * (1 + interestRate);
	cout << "Your new balance after interest is " << balance << endl;
}
//levies a withdrawal fee
void savings::withdrawalFee()
{
	balance -= 2;
	cout << "A withdrawal fee of $2 has been levied from your account balance. Your new balance is " << balance << endl;
}