#include <iostream>

using namespace std;

int main() {
    int y{5};
    int x{10};
    int *yPtr{nullptr};

    yPtr = &y; // operador de dirección

    cout << yPtr << endl;
    cout << &y << endl;

    cout << *yPtr << endl;
    *yPtr = 1000;

    cout << y << endl;

    yPtr = &x;
    cout << *yPtr << endl;
    
    

    return 0;
    
}