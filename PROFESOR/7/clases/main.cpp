#include <iostream>
#include "Account.h"

using namespace std;

void print(Account *arr, int tam) {
    while(tam--) {
        cout << arr->getName() << " " << arr->getBalance() << endl;
        arr++;
    }
    cout << endl;
}


void cambio (Account *a,Account *b){
    Account temp{a->getName(),a->getBalance()};
    *a=*b;
    *b=temp;
}

void BubbleSort(Account *inicio, Account *fin ){
    int i ,j;
    for(i = 0; inicio + i < fin ;i++){
        for(j=0;inicio + j<fin;j++){
            if((inicio+j)->getBalance()>(inicio+j+1)->getBalance())
                cambio(inicio+j,inicio+j+1);

        
    }

}
}

int main () {

    Account a1{"Alvaro", 50};
    Account a2{"Paul", 100};
    Account a3{"Gabriel", 75};
    Account a4{"Alejandra", 500};
    Account a5{"Sebastian", 25};

    Account arr[] = {a1, a2, a3, a4, a5};
    print(arr, 5);

    

    return 0;
}