#include<iostream>// pedir codigo   
using namespace std;


int main() {
    int numItems;
    cout << "how many items? ";
    cin >> numItems;
    int *arr = new int[numItems];
    for (int i = 0; i < numItems; i++, arr++) {
        cout << "enter item " << i << ": ";
        
        cin >> *arr ;
    }
    arr-=numItems;
    for (int i = 0; i < numItems; i++, arr++) {
    cout <<arr[i]<<endl; ;
    }
    delete[] arr;
}
