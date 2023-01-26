#include <iostream>
using namespace std;

class Integer{
    public:
        int val;
        Integer(){
            val=0, cout <<"default constructor"<<endl;
        }
};

class Integerwrapper{
    public:
        Integer val;
        Integerwrapper(){
            cout <<"Integer wrapper"<<endl;
        }
};

int  main(){
    Integerwrapper q;
}