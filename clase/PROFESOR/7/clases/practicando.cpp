#include <iostream>
using namespace std;

#include "Account.h"

int main(){
    Account a("luciel",30);
    Account *ptr(&a);
    cout<<a.getBalance()<<endl;// si ponemos solo balance es inaccesible porque es privado de la clase 
    cout<<ptr->getBalance()<<endl;
    cout<<(*ptr).getBalance()<<endl;
    


return 0;
}