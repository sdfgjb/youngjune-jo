#include <string>
#include "queue.h"

template<class T>
Qstack<T>::Qstack(int c){
    capactiy = c;
    T array = new T[capactiy];
    head = 0;
    tail = 0;
}

template<class T>
bool Qstack<T>::IsEmpty() const{
    if(tail == 0) return true;

}

template <class T>
void Qstack<T>::ChangeSize1D(T*&a, const int oldsize, const int newSize){
    if (newSize < 0)
        throw "New length must be >=0";
    T *new_a = new T[newSize];
    copy(a, a+min(oldsize,newSize),new_a);
    delete [] a;
    a=new_a;
    
}

template <class T>
void Qstack<T>::Push(const T& item){
    if(head == 0){
        if(tail == capactiy){
            ChangeSize1D(araay,capactiy,capactiy+1);
            
        }
        T &new_araay = new T[capactiy];
        copy(araay, araay + tail, new_araay);
        araay[head]= item;
        for(int i = 1; i =< tail; i++){
            araay[i]=new_araay[i-1];
        }
        tail+=1;
        capactiy+=1;
        delete new_araay[];
    }else{
        araay[--head] == item;
    }
    
}

template <class T>
void Qstack<T>::Put(const T& item){
    if(tail == capactiy){
        if(2*size > capactiy){
            ChangeSize1D(araay,capactiy,2*capactiy);
            capactiy *= 2;
        }else{
            copy(araay+head,araay+tail,araay);
            
        }
    }
    size+=1;
}

template <class T>
T& Qstack<T>::Pop() const{

}
template <class T>
T& Qstack<T>::Pull() const{

}

template <class T>
T& Qstack<T>::Peek(int index){

}


template class Qstack<int>;    // a Queue for ints
template class Qstack<float>;  // a Queue for floats