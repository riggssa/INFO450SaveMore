#include "stdafx.h"
#include <iostream>
#include <string>
#include "bankAccount.h"
#include "checking.h"
using namespace std;
//basic instance formulas
checking::checking(int a, double b, double i) : bankAccount(a, b, i)
{

}

checking::checking() : bankAccount()
{

}
//displays account attributes
void checking::Display()
{
	cout << " Account Number: " << accountNumber << " Current Balance: " << balance << endl;
	cout << "If account balance goes below $500, an automatic fee of $5.00 will be deducted." << endl;
}
//fills in account data
void checking::GetData()
{
	cout << "Enter Account Number?" << endl;
	cin >> accountNumber;
	cout << "Enter Balance?" << endl;
	cin >> balance;
}
//checks account for minimum balance and levies a potential fee
void checking::checkAccount()
{
	if (balance < 500)
	{
		balance -= 5;
	}
}
//allows user to order checks
void checking::orderChecks()
{
	char answer;
	cout << "Would you like to order checks? Please respond Y or N." << endl;
	cin >> answer;
	if (answer = "Y" || "y")
	{
		balance -= 15;
	}
	if else(answer != "Y" || "y")
	{
		return 0;
	}
}