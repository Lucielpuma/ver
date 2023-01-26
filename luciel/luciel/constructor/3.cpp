#include <iostream>
using namespace std;

class Integer{//donde va el explicit
    
    public:
        int val;
        Integer(int v){
            val=v, cout <<"constructor with arg"<<v<<endl;
        }
};

int  main(){
    Integer i(3);
    Integer j=5;
    
}