// 10.7 main.cpp
// Description: Problem 1 of 2 due week 3
// Programmer: Parker Esmay
// Date: 02/09/2015

#include <cstdlib>
#include <iostream>
#include "savingsAccount.h"
#include <conio.h>

using namespace std;


int main()
{
	// Instantiate two different objects of class SavingsAccount, saver1 
	// and saver2, with balances of $2000.00 and $3000.00, respectively.
	SavingsAccount saver1(2000.00);
	SavingsAccount saver2(3000.00);

	// Set the annualInterestRate to 3%.
	SavingsAccount::modifyIntererestRate(0.03);

	// Then calculate the monthly interest and print the new balances for 
	// each of the savers. 
	cout << "First month with interest balance:\n\n";
	saver1.calculateMonthlyInterest();
	cout << "Saver 1 Savings Balance: $" << saver1.GetBalance() << "\n";
	
	saver2.calculateMonthlyInterest();
	cout << "Saver 2 Savings Balance: $" << saver2.GetBalance() << "\n";

	cout << endl;

	// Then set the annualInterestRate to 4%
	SavingsAccount::modifyIntererestRate(0.04);

	// and calculate the next month's interest and print the new balances 
	// for each of the savers
	cout<< "Second month with interest balance:\n\n";
	saver1.calculateMonthlyInterest();
	cout << "Saver 1 Savings Balance: $" << saver1.GetBalance() << "\n";
	
	saver2.calculateMonthlyInterest();
	cout << "Saver 2 Savings Balance: $" << saver2.GetBalance() << "\n";

	cout << endl;
	getch();
	return 0;
}
