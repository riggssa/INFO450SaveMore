#pragma once
class bankAccount
{
	//create header file with all accounts and necessary formulas for bank accounts in general
public:
	int accountNumber;
	double balance, interestRate;

public:
	void setValues(int a, double b, double i);
	int withdraw(double x);
	int deposit(double y);
};
