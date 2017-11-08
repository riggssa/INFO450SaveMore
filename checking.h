#pragma once
#include "bankAccount.h"
class checking : public bankAccount
{
	//create header file with all accounts and necessary formulas for checking
public:
	checking();
	checking(int a, double b, double i);
	void GetData();
	void Display();
	void checkAccount();
	void orderChecks();

};
