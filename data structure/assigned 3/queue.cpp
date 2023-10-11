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
    for(int i = 0; i < capactiy; i++){
        if(array[i] == NULL)
            retrun true;
    }
}
template class Qstack<int>;    // a Queue for ints
template class Qstack<float>;  // a Queue for floats