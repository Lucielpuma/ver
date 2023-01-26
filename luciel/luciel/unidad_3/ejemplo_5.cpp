#include <iostream>
using namespace std;

int main()
{
    char val ;
    cout<<"ingresar";
    cin>>val;

    /*cout << sizeof (val) << endl;*/

    int valor= static_cast<int>(val);

    if(valor>=97 && valor <=122){
        cout<<"si es" <<endl;
    }
    else {
        cout <<"no es "<<endl;
    }
    
    return 0;
}