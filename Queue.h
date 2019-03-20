#ifndef QUEUE_H
#define QUEUE_H
#include "Vector.h"
#include <stdexcept>
#include<iostream>

template <class T>
class Queue {
    private:

        Vector<T>* queue_pointer;
        int queue_size;
        int front=-1;
        int last=-1;



    public:

        Queue(unsigned int size);
        bool enqueue(T data);
        T dequeue();
        T peek();
        bool empty();
        void clear();
        //~Vector();
        //void insert(int index, Planet *p);
        //Planet* read(int index);m
        //bool remove(int index);
};

template <class T>
Queue<T>::Queue(unsigned int size){
  this->queue_pointer = new Vector<T>(size+1);
  this->queue_size = size;


}
template <class T>
bool Queue<T>:: enqueue(T data){
  //std::cout << last << " SOLA BAK last DEGERI\n" ;
  if (last == queue_size-1){
    return false;
  }else{
    if (front==-1){
      front=0;
      last=0;
      (*queue_pointer)[last] = data;


    }else{
      last++;
      (*queue_pointer)[last] = data;



    }


  }
  return true;
}

template <class T>

T Queue<T>:: dequeue(){

  if (empty()){
   throw "Cannot dequeue!";
 }
 else if (front==last){
    T temp1 = (*queue_pointer)[front];

    //T temp1 = (*queue_pointer)[front];
    //delete queue_pointer[last];
    //queue_pointer[front]=NULL;
    front = -1;
    last = -1;
    return temp1;

  }else{
    T temp1 = (*queue_pointer)[front];
;
  //  T temp1 = queue_pointer[front];
    //delete queue_pointer[front];
    //queue_pointer[front]=NULL;
    front = front+1;
    return temp1;
  }

  //return (*queue_pointer)[temp];
  //delete (*queue_pointer)[temp];
  //return a;
}

template <class T>
T Queue<T>:: peek(){

  return (*queue_pointer)[front];

}

template <class T>  // bitti
bool Queue<T>:: empty(){
  if (front== -1 && last == -1 ) return true;
  else return false;
}
template <class T>
void Queue<T>:: clear() {
  for (int i=0 ; i< 10 ; i++){
    queue_pointer[i] = NULL;
  }
  //delete[] vector_pointer; // ?????
  //this->queue_size = 0;
}
/*template< class T >
bool Queue<T>::isFull()
{
    if((back + 1) %  queue_size == front )
        return 1;
    else
        return 0;
}
*/




  #endif
