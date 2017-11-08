#pragma once
#include "bankAccount.h"
class certD : public bankAccount
{
	//create header file with all accounts and necessary formulas for CD
public:
	int term;
public:
	certD();
	certD(int a, double b, double i);
	void GetData();
	void Display();
	void checkTerm();
	void updateInterest();
	void earlyFee();

};