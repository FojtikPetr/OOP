#include "Account.h"

Account::Account(int n, Client* o)
{
	this->number = n;
	this->owner = o;
	this->balance = 0;
	this->interestRate = 0;
}

Account::Account(int n, Client* o, double ir)
{
	this->number = n;
	this->owner = o;
	this->balance = 0;
	this->interestRate = ir;
}

int Account::GetNumber()
{
	return this->number;
}

double Account::GetBalance()
{
	return this->balance;
}

double Account::GetInterestRate()
{
	return this->interestRate;
}

Client* Account::GetOwner()
{
	return this->owner;
}

bool Account::CanWithdraw(double a)
{
	return (this->balance >= a);
}

void Account::Deposit(double a)
{
	this->balance = this->balance + a;
}

bool Account::Withdraw(double a)
{
	bool success = false;
	if (this->CanWithdraw(a))
	{
		this->balance = this->balance - a;
		success = true;
	}

	return success;
}

void Account::AddInterest()
{
	this->interestRate++;
}
