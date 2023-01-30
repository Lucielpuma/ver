#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main() {
    Point p1;
    Point p2{4, 5};
    Point p3{5, 6};
    Point p4{2,5};
    Point p5{4,8};

    PointArray pa(3);
    pa.setData(0, p1);
    pa.setData(1, p2);
    pa.setData(2, p3);
    pa.print();
    pa.insert(2,p5);
    pa.print();
    pa.remove(0);
    pa.print();
    pa.clear();
    pa.print();
    cout << endl;

    return 0;
}
