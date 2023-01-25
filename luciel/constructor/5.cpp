#include <iostream>
using namespace std;

class Integer{//donde va el explicit
    
    public:
        int val;
        Integer(int val){
            this ->val=val;
        }
};

int  main(){
    Integer i(3);
    Integer j;
    
}