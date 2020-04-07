#include "Bank.h"

Bank::Bank(int c, int a)
{
	this->clients = new Client * [c];
	this->clientsCount = 0;

	this->accounts = new Account * [a];
	this->accountsCount = 0;
}

Bank::~Bank()
{
	for (int i = 0; i < this->clientsCount; i++)
	{
		delete this->clients[i];
	}
	delete[] this->clients;

	for (int i = 0; i < this->accountsCount; i++)
	{
		delete this->accounts[i];
	}
	delete[] this->accounts;
}

Client* Bank::GetClient(int c)
{
	for (int i = 0; i < this->clientsCount; i++)
	{
		if (this->clients[i]->GetCode() == c)
		{
			return this->clients[i];
		}
	}

	return nullptr;
}

Account* Bank::GetAccount(int n)
{
	for (int i = 0; i < this->accountsCount; i++)
	{
		if (this->accounts[i]->GetNumber() == n)
		{
			return this->accounts[i];
		}
	}

	return nullptr;
}

Client* Bank::CreateClient(int c, std::string n)
{
	Client* newClient = new Client(c, n);

	this->clients[this->clientsCount] = newClient;
	this->clientsCount = this->clientsCount + 1;

	return newClient;
}

Account* Bank::CreateAccount(int n, Client* c)
{
	Account* newAccount = new Account(n, c);

	this->accounts[this->accountsCount] = newAccount;
	this->accountsCount = this->accountsCount + 1;

	return newAccount;
}

Account* Bank::CreateAccount(int n, Client* c, double ir)
{
	Account* newAccount = new Account(n, c, ir);

	this->accounts[this->accountsCount] = newAccount;
	this->accountsCount = this->accountsCount + 1;

	return newAccount;
}

PartnerAccount* Bank::CreateAccount(int n, Client* o, Client* p)
{
	PartnerAccount* newPartnerAccount = new PartnerAccount(n, o, p);

	this->accounts[this->accountsCount] = newPartnerAccount;
	this->accountsCount = this->accountsCount + 1;

	return newPartnerAccount;
}

PartnerAccount* Bank::CreateAccount(int n, Client* o, Client* p, double ir)
{
	PartnerAccount* newPartnerAccount = new PartnerAccount(n, o, p, ir);

	this->accounts[this->accountsCount] = newPartnerAccount;
	this->accountsCount = this->accountsCount + 1;

	return newPartnerAccount;
}

void Bank::AddInterest()
{
	for (int i = 0; i < this->accountsCount; i++)
	{
		this->accounts[i]->AddInterest();
	}
}
