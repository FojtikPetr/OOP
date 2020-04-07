#include <iostream>
#include <string>

#include "Account.h"
#include "Client.h"
#include "PartnerAccount.h"
#include "Bank.h"

#include "NakladniVozidlo.h"

using namespace std;

int main()
{
    Account* a;
    PartnerAccount* pa;

    Bank* b = new Bank(100, 1000);
    Client* o = b->CreateClient(0, "Petr");
    Client* p = b->CreateClient(1, "Jan");
    a = b->CreateAccount(0, o);
    pa = b->CreateAccount(1, o, p);

    printf("%s\n", a->GetOwner()->GetName().c_str());
    printf("%s\n", pa->GetPartner()->GetName().c_str());

    printf("%s\n", b->GetClient(1)->GetName().c_str());

    printf("\n");

    NakladniVozidlo* v1 = new NakladniVozidlo("nakladniVozidlo", 120, 4, 1000);
    printf("name:%s maxSpeed:%f  tiresCount:%d loadCapacity:%d \n", v1->GetName().c_str(),v1->GetMaxSpeed(),v1->GetTiresCount(),v1->GetLoadCapacity());       

}
