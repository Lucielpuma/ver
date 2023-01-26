#include <iostream>
#include <string>
#include "Account.h"

using namespace std;

int main(){
    Account myAccount;

    cout<<"nombre inicial es:"<<myAccount.getName();
    cout<<"\ningresar nombre";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout <<"nombre del objeto es: "<<myAccount.getName()<<endl;
    return 0;
}