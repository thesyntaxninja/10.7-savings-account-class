// 10.7 savingsAccount.cpp
// Description: Problem 1 of 2 due week 3
// Programmer: Parker Esmay
// Date: 02/09/2015

#include "savingsAccount.h"
#include <iostream>
#include <iomanip>


using namespace std;
// copy constructor to initialize the value
SavingsAccount::SavingsAccount(double value)
{
	savingsBalance = value;
}

// Use a static data member annualInterestRate to store the annual interest
// rate for each of the savers. 
double SavingsAccount::annualInterestRate(0);

// Provide member function calculateMonthlyInterest that calculates the 
// monthly interest by multiplying the savingsBalance by annualInterestRate
// divided by 12; this interest should be added to savingsBalance.
void SavingsAccount::calculateMonthlyInterest()
{
	savingsBalance += ((savingsBalance * annualInterestRate) / 12);
}

//Provide a static member function modifyIntererestRate that sets the 
// static annualInterestRate to a new value. 
void SavingsAccount::modifyIntererestRate(double value)
{
	annualInterestRate = value;
}
