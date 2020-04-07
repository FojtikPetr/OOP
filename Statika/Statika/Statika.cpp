#include <iostream>
#include "Client.h"
#include "Account.h"
#include "Bank.h"

int main()
{
    printf("%d\n", Client::GetObjectsCount());
    Client* cl1 = new Client(1, "Petr");
    printf("%d\n", Client::GetObjectsCount());

    printf("%d\n",Account::GetObjectsCount());
    Account* acc1 = new Account(1, cl1); 
    printf("%d\n", Account::GetObjectsCount());

    printf("%f\n", Account::GetDefaultIr());
}