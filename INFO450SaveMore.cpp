// INFO450SaveMore.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "certD.h"
#include "checking.h"
#include "savings.h"
#include <iostream>
using namespace std;
//announces all those good good header files we created


int main()
{
	//Declare accounts
	savings newSavings(123456, 10000, .02);
	checking newChecking(654321, 6000, 0);
	certD newcertD(543621, 10000, .02, 3);
	//calculate interest for savings and update balance
	newSavings.calculateInterest();
	newSavings.updateBalance();
	//calculate interest and update balance for CD
	newcertD.checkTerm();
	newcertD.updateInterest();
	//order checks
	newChecking.orderChecks();
	//display all accounts
	newSavings.Display();
	newcertD.Display();
	newChecking.Display();
	//withdraw $200 from checking
	newChecking.withdraw(200);
	newChecking.checkAccount();
	//withdraw 1000 from savings and calculate new interest
	newSavings.withdraw(1000);
	newSavings.withdrawalFee();
	newSavings.calculateInterest();
	//withdraw an early 2000 from CD
	newcertD.withdraw(2000);
	newcertD.earlyFee();
	//display all accounts
	newSavings.Display();
	newcertD.Display();
	newChecking.Display();

		return 0;
}

