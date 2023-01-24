#include <iostream>

using namespace std;

void cuboPorRef(int *);

int main() {
    
    int num{5};
    int *p = &num;

    cout << num << endl;
    cuboPorRef( p );
    cout << num << endl; 

    return 0;
}

void cuboPorRef(const int *ptr) {
    *ptr = *ptr * *ptr  * *ptr;
}