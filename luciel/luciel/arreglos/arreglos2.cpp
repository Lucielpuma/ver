#include <iostream>
using namespace std;

int sumar(const int array[], const int tam) {// array es un nombre de variable
    long sum = 0;
    for(int i=0; i < tam; sum += array[i++]);
    return sum;
    }

void imprimir(const int arra[],const int tam){
    for(int i = 0; i < tam; i++)
        cout << " " << arra[i];
    
}

void arrayrec(const int arr[], const int tam,int i=0){//pq le quitamos el const al tam
    if (i==tam){
        return;
    }
    else{
        cout<<arr [i]<< " ";
        arrayrec(arr, tam,++i);
    }
        
}



int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    
    arrayrec(arr, 7) ;
    return 0;
    }

