#include <iostream>
using namespace std;

int main()
{

    /*
    int 4 bytes
    short 2 bytes
    int-long
    lon long
    */

   short a=32767;
   /*int   b=10;
   long  c=10;
   long long d=10;*/

   cout <<sizeof(a) <<endl;
   cout <<a<<endl;
   a=a+1;
   cout <<a<<endl;

   a=a+1;
   cout << a <<endl;
   
   return 0;
}