#pragma once
#include "bankAccount.h"
class savings : public bankAccount
{
	//create header file with all accounts and necessary formulas for savings
public:
	savings();
	savings(int a, double b, double i);
	void GetData();
	void Display();
	void calculateInterest();
	void updateBalance();
	void withdrawalFee();

};
