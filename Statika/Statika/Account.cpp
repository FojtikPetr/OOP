#include "Account.h"

int Account::objectsCount = 0;
double Account::defaultIr = 1.5;

int Account::GetObjectsCount()
{
	return Account::objectsCount;
}

double Account::GetDefaultIr()
{
	return Account::defaultIr;
}

Account::Account(int n, Client* c)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->interestRate = Account::GetDefaultIr();
	Account::objectsCount += 1;
}

Account::Account(int n, Client* c, double ir)
{
	this->number = n;
	this->owner = c;
	this->balance = 0;
	this->interestRate = ir;
	Account::objectsCount += 1;
}

Account::Account(int n, Client* c, Client* p)
{
	this->number = n;
	this->owner = c;
	this->partner = p;
	this->balance = 0;
	this->interestRate = Account::GetDefaultIr();
	Account::objectsCount += 1;
}

Account::Account(int n, Client* c, Client* p, double ir)
{
	this->number = n;
	this->owner = c;
	this->partner = p;
	this->balance = 0;
	this->interestRate = ir;
	Account::objectsCount += 1;
}

Account::~Account()
{
	Account::objectsCount -= 1;
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

Client* Account::GetPartner()
{
	return this->partner;
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
