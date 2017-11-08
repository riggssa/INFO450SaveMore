#include "stdafx.h"
#include <iostream>
#include <string>
#include "bankAccount.h"
#include "certD.h"
using namespace std;
//basic instance formulas
certD::certD(int a, double b, double i, int t) : bankAccount(a, b, i)
{
	term = t;
}

certD::certD() : bankAccount()
{
	term = 0;
}
//displays account attributes
void certD::Display()
{
	cout << " Account Number: " << accountNumber << " Current Balance: " << balance << " Current Interest Rate (Variable!): " << interestRate << " Term: " << term << endl;
	cout << "If funds are withdrawn before the term is over, a 10% fee on the entire pre-withdrawal balance is levied." << endl;
}
//fills in account data
void certD::GetData()
{
	cout << "Enter Account Number?" << endl;
	cin >> accountNumber;
	cout << "Enter Balance?" << endl;
	cin >> balance;
	cout << "Enter Term?" << endl;
	cin >> term;
}
//calculates interest rate
void certD::checkTerm()
{
	if (term >= 5)
	{
		interestRate = .1;
	}
	if else(term < 5)
	{
		interestRate = .05;
	}
}
//updates balance with added interest
void certD::updateInterest()
{
	balance = balance * (1 + interestRate);
	cout << "Your new monthly balance with interest is " << balance << endl;
}
//subtratcts a fee from balance for withdrawing early
void certD::earlyFee()
{
	balance = balance * 0.9;
	cout << "An early withdrawal fee has been deducted. Your new balance is " << balance << endl;
}