#include <iostream>
#include "IntegerArray.h"

using namespace std;

int main() {
    IntegerArray a(3);// (size)
    
    a.setData(0, 2);//indice,valor
    a.setData(1, 5);//indice, valor
    a.setData(2, 5);//indice, valor

    if(true) {
        IntegerArray b = a;
    }

    a.print();
    return 0;
}
