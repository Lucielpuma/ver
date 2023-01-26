#include <iostream>
using namespace std;

void printArray(const int arr[],const int tam){
    for(int i = 0; i <tam;i++)
    
        cout<<arr[i]<<" ";
    cout <<endl;
}
void sort(int arr[],int tamx){
    int tam = sizeof(arr)/ sizeof(arr[0]);
    cout<<tam<<endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int tam = sizeof(arr) / sizeof(arr[0]);
    cout<<tam<<endl;
    printArray(arr,tam);
    sort(arr,tam);
    

    sort(arr, 7) ;
    return 0;
    }

