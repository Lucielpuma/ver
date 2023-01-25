#include <iostream>
using namespace std;

class Integer{//donde va el explicit
    
    public:
        int val;
        Integer(int v=0){
            val=v;
        }
};

int  main(){
    Integer i(3);
    Integer j;
    
}