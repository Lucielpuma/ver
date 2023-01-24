#include <iostream>
using namespace std;


int main(){
    int burbuja []={4,1,2,3,5};
    int i,j,p;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(burbuja[j]>burbuja[j+1]){
                p=burbuja[j];
                burbuja[j]=burbuja[j+1];
                burbuja[j+1]=p;

            }
        }
    }
    cout<<"Metodo burbuja ";
    for(i=0;i<5;i++){
        cout<<burbuja[i]<<" "; 
    }
return 0;

}