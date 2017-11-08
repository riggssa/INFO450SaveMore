#include "stdafx.h"
#include <string>
#include "bankAccount.h"
using namespace std;
//basic instance formulas
bankAccount::bankAccount()
{
	accountNumber = 0;
	balance = 0;
	interestRate = 0;
}
bankAccount::setValues(int a, double b, double i)
{
	accountNumber = a;
	balance = b;
	interestRate = i;
}
//withdraws a inserted double from the account
int bankAccount::withdraw(double x)
{
	if (balance >= x )
	{
		balance -= x;
		return 0;
	}
	if else(balance < x)
	{
		cout << "You have insufficient funds." << endl;
		return -1;
	}
}
//deposits a double into the account
int bankAccount::deposit(double y)
{
	balance += y;
	return 0;
}