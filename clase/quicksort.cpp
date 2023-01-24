#include <iostream>
using namespace std; 
void Quick_Sort(int L[], int ini, int fin){//{6,5,3,1,8,0,2}; Quick_Sort(L, 0, 6);
    int piv, izq,der,med;

    if(ini<fin){
        piv=L[ini];
        izq=ini;

        der=fin;
        while(izq<der){                   
            while (der>izq && L[der]>piv)
                der--;
            if(der>izq){
                L[izq]=L[der];
                izq++;
            }

            while(izq<der && L[izq]<piv)
            izq++;
            if(izq<der){
                L[der]=L[izq];
                der--;
            }
        }
        L[der]=piv;
        med=der;

        Quick_Sort(L, ini, med-1);
        Quick_Sort(L, med+1, fin);
    }
}

int main(){
    int i, L[7]={6,5,3,1,8,0,2};

    Quick_Sort(L, 0, 6);

    for(i=0; i<7; i++){
        cout<<L[i]<<" ";
        
    }
    return 0;
}
