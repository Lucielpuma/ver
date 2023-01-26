#include <iostream>
using namespace std;

int fib_it(int n){
    int fib_n;
    int fib_n1=1;
    int fib_n2=1;

    while(--n){
        fib_n = fib_n1 + fib_n2;
        fib_n2 = fib_n1;
        fib_n1 = fib_n;

    }



    return fib_n;
}

int main(){
    
    cout <<fib_it(0)<<endl;

    return 0;
}