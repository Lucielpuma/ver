#include <iostream>
using namespace std;

class Integer{
    public:
        int val;
        Integer(){
            val=0, cout <<"default constructor"<<endl;
        }
};

int  main(){
    Integer a;
    cout<<a.val<<endl;
    Integer arr[3];//?

    for(Integer a:arr){
        cout<<a.val<<endl;}

    cout <<endl;
    
    for(int i=0; i<3;i++)
        cout << arr[i].val<<endl;
}