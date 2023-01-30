#include <iostream>
#include "DynamicIntArray.h"

DynamicIntArray::DynamicIntArray() {
    this->size = 0;
    data = new int[size];
}

DynamicIntArray::DynamicIntArray(const int arr[], const int size) {
    this->size = size;
    data = new int[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

DynamicIntArray::DynamicIntArray(const DynamicIntArray &o) {
    this->size = o.size;
    data = new int[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
}

DynamicIntArray::~DynamicIntArray() {
    delete[] data;
}


int DynamicIntArray::getSize() const {
    return size;
}

void DynamicIntArray::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size; i++)
        std::cout << data[i] << " ";
    std::cout << "]" << std::endl;
}


void DynamicIntArray::push_back(int val) {
    int *tmp = new int[size+1];
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    delete[] data;
    data = tmp;
    size++;
    data[size-1] = val;
}

void DynamicIntArray::insert( int position,int elemento){
    int * tmp = new int[size +1];
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

void DynamicIntArray::remove(int position){
    int *tmp =new int[size-1];
    if(position>size){
        std::cout<<"posicion fuera de rango"<<std::endl;

    }
    else{
        for(int i=0,j=0;i<size;i++,j++){
            if(i!=position){
                tmp[j]=data[i];
            }
            else{
                j--;
            }
        }
    size--;
    delete[]data;
    data=tmp;
    }
}

void DynamicIntArray::clear(){
    int *tmp = new int[size];
    delete[]data;
    data = tmp;
}