//elemento de la izquierda es menor q el actual 
#include <iostream>
using namespace std;


int main(){
    int insertion []={4,1,2,3,5};
    int i,al,camb;

    for(i=0;i<5;i++){
        al=i;
        camb =insertion[i];

        while((al>0) && (insertion[al-1]>camb)){
            insertion[al]=insertion[al-1];
            al--;
          }

          insertion[al]=camb;
    }

    cout<<"Metodo  Inserción ";
    for(i=0;i<5;i++){
        cout<<insertion[i]<<" "; 
    } 
return 0;

}