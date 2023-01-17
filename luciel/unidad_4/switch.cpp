#include <iostream>
using namespace std;

int main(){
    int x=6;
    switch (x){
        case 1:
            cout <<"x es 1\n";
            break;
        case 2:
        case 3:
            cout<< "x no es 2 o 3";
            break;
        default:
            cout <<"x n es 1,2,3";
    }
    return 0;
    
}