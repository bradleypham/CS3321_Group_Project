#ifndef SALARYANDBENEFITS_H
#define SALARYANDBENEFITS_H
#include <string>
#include <iostream>
using namespace std;

class SalaryAndBenefits {

private:
	//employee weekly payment
	double pay;
	//employee Bank account number
	int BankAccount;
	//employee Bank routing number
	int BankRouting;
	//employee file name to print file in file form
	String BenefitFileName;

public:
	//constructor
	SalaryAndBenefits() {
		pay = 16.00;
		BankAccount = 0;
		BankRouting = 0;
		BenefitFileName = " ";
	}

	//second constructor
	SalaryAndBenefits(double p, int acc, int rout, string filename) {
		pay = p;
		BankAccount = acc;
		BankRouting = rout;
		BenefitFileName = filename;
	}

	//accessors
	//return employee payment
	double getPay() {
		return pay;
	}

	//return employee bankAccount
	int getBankAccount() {
		return BankAccount;
	}
	//return employee BankRouting
	int getBankRoutting() {
		return BankRouting;
	}

	//return File name of employee salary
	String getBenefitFileName() {
		return getBenefitFileName;
	}

	//mutators
	// set employee payment
	void setPay(double p) {
		pay = p;
	}

	//set Bank account and routing from employee
	void setBankAccount(int acc) {
		BankAccount = acc;
	}

	void setBankRouting(int rout) {
		BankRouting = rout;
	}

	//set File name from salary
	void setBankFileName(String n) {
		BenefitFileName = n;
	}

	//just in case for command prompt display
	void DisplaySalaryAndBenefit() {
		cout << "Employee Bank Account: " << BankAccount <<
			"\nEmployee Bank Routing: " << BankRouting <<
			"\nEmployee paycheck: " << pay;

	}

	//Calculate Payment
	void CalculatePayment(double hours) {
		
	}

};

#endif
