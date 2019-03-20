#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <cstdlib>

template <class T>
class Vector {
    private:
        int vector_size;
        T* vector_pointer;
    public:


        Vector(int size) ;
        Vector(const Vector <T> &v);
        T& operator [](std::size_t index);
        void clear();
        unsigned int size();
        //~Vector();
        //void insert(int index, Planet *p);
        //Planet* read(int index);
        //bool remove(int index);

};

template <class T>
Vector<T>::Vector(int size){
  this->vector_size = size;
  this->vector_pointer = new T[size];
  //vector_pointer = NULL;



}
template <class T>
Vector<T>::Vector(const Vector <T> & v){
  this->vector_size = v.vector_size;
  //new_array = new T* [new_size];
  //Vector ** new_array = new T*[new_size];
  this->vector_pointer = new T[vector_size];
  for (int i=0 ; i< vector_size ; i++){
    this->vector_pointer[i]= v.vector_pointer[i];
    //this->vector_pointer[i]=NULL;
    //delete this->vector_pointer[i];
  }
  //delete[] this->vector_pointer;
  //delete[] v.vector_pointer;





}

template <class T>
T& Vector<T>::operator[](std::size_t index){ // index pozitif olsun

  return this->vector_pointer[index];

}

template <class T>
void Vector<T>::clear(){
  for (int i=0 ; i< vector_size ; i++){
    this->vector_pointer[i] = NULL;
    //delete this->vector_pointer[i];

  }
  //delete[] vector_pointer;
  this->vector_size = 0;

}


template <class T>
unsigned int Vector<T>:: size(){

  return this->vector_size;
}

#endif
