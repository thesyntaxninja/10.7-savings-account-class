// 10.7 savingsAccount.h
// Description: Problem 1 of 2 due week 3
// Programmer: Parker Esmay
// Date: 02/09/2015

#ifndef savingsAccount
#define savingsAccount

// Create SavingsAccount class. Use static data member annualInterestRate
// to store the annual interest rate for each of the savers. 


class SavingsAccount
{
	public:
		SavingsAccount(){}
		SavingsAccount(double value);
		~SavingsAccount(){}
		static double annualInterestRate;
		void calculateMonthlyInterest();
		static void modifyIntererestRate(double value);
		double GetBalance() const { return savingsBalance; }
	private:
		// Each member of the class contains a private data member 
		// savingsBalance indicating the amount the saver currently has 
		// on deposit.
		double savingsBalance;
};


#endif
