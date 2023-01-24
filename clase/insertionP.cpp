#include <iostream>
using namespace std;

void insertion(int *arr, int tam){
    int a,b;
    for(int i=1;i<tam;i++){
        a=*(arr+i);
        b=i-1;
        while(b>=0 && *(arr+b)>a){
            *(arr+b+1)=*(arr+b);
            b--;
        }
        *(arr+b+1)=a;
    }
}
void printarrayr(const int array[], int tam, int x){      
    if (tam==0){
    }else{
    cout<<" "<<array[x];
    printarrayr(array,tam-1,++x);
    }
}

int main (){
    int arr[]={5,10,1,8,9};
    
    cout<<"\n";

    insertion(arr,5);
    printarrayr(arr,5,0);
}

