#include <iostream>
using namespace std;

class Point{
public:
    int x,y;
    Point(){
        cout<< "constructor invoked"<<endl;
    }
    //alt 126
    ~Point(){
        cout<<"destructure invoked"<<endl;
    }

};

int main(){// preguntar
    if(true){
        Point p;
    }
    cout<< "a"<<endl;
}