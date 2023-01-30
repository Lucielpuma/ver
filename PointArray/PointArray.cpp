#include <iostream>
#include <stdexcept>
#include "PointArray.h"
using namespace std;

PointArray::PointArray(int size) {
    data = new Point[size];
    this->size = size;
}

PointArray::PointArray(const PointArray &o) {
    data = new Point[o.size];
    this->size = o.size;
    for(int i = 0; i < size; ++i)
        data[i] = o.data[i];
}

PointArray::~PointArray() {
    delete[] data;
}

void PointArray::setData(int index, Point val) {
    if (index >= size){
        throw out_of_range ("el indice se pasa del limite");
    }
    data[index] = val;
}

Point PointArray::getData(int index) const {
    if (index<0 || index>=size)
        throw  out_of_range ( "El indice no es el correcto" );
    return data[index];
}

int PointArray::getSize() const {
    return size;
}

void PointArray::print() const {
    cout << "[ ";
    for(int i = 0; i < size; i++)
        data[i].print();
    cout << " ]" << endl;
}



void  PointArray::remove(int position){
    Point *tmp =new Point[size-1];
    if(position>size){
        std::cout<<"posicion fuera de rango"<<std::endl;

    }
    else{
    for(int i=0,j=0;i<size;i++,j++){
        if(j!=position){
            tmp[j]=data[i];
        }
        else{
            j++;
        }
    }
    size--;
    delete[]data;
    data=tmp;
}
}

void PointArray::insert( int position,Point elemento){
    Point * tmp = new Point[size +1];
    if(position>size){
        std::cout << "fuera de rango"<< std::endl;   
        }
        else{
        for(int i=0,j=0; i<size; i++, j++){
            if(j!=position){
                tmp[j]=data[i];
            }
            else{ 
                tmp[position]=elemento;
                i--;
            }
        }
        size++;
        delete[]data;
        data = tmp;
    }
}

void  PointArray::clear(){
    Point *tmp =new Point[size];
    delete[]data;
    data = tmp;
  
}