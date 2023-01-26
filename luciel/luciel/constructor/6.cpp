//dangling pointer para final 
#include <iostream>
using namespace std;

int* getPtrToFive(){
    int x=5;
    return &x;
}

int  main(){
    int *p =getPtrToFive();
    cout<< *p << endl; 
    
}
///////////////
// int *x = new int // reserva un espacio en la memoria tipo int para el puntero x
