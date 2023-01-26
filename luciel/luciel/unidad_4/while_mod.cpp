#include <iostream>
using namespace std;

int main(){
    int x=10;
    while(--x<10);
    
    cout <<"x es "<<x<<"\n";

    while(x--<10);
    
    cout <<"x es "<<x<<"\n";

    return 0;
}