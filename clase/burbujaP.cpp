#include <iostream>
using namespace std;

void burbuja(int *arr, int tam){
    for(int i=0;i<tam;i++){
        for(int j=0;j<tam;j++){
            if(*(arr+j)>*(arr+j+1)){//c 
                int a =*(arr+j);//v
                *(arr+j)=*(arr+j+1);
                *(arr+j+1)=a;
            }
        }
    }
}


void printarrayr(const int array[], int tam, int x){      
    if (tam==0);   
    else{
    cout<<" "<<array[x];
    printarrayr(array,tam-1,++x);
    }
}

int main (){
    int arr[]={5,10,1,8,9};
    
    cout<<"\n";

    burbuja(arr,5);
    printarrayr(arr,5,0);
}

