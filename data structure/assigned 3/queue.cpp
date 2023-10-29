#include <string>
#include <iostream>
#include "queue.h"

template<class T>
Qstack<T>::Qstack(int c){
    capactiy = c;
    if (capactiy < 1)
        throw "capacity must be > 0";
    array = new T[capactiy];
    head = 0;
    tail = 0;
}

template<class T>
bool Qstack<T>::IsEmpty() const{
    if ((tail - head) == 0) {
        return true;
    }
    else { return false; }

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
            ChangeSize1D(array,capactiy,2*capactiy);
            capactiy *=2;
        }
        T *new_array = new T[capactiy];
        copy(array+head, array + tail, new_array);
        array[head] = item;
        for(int i = head+1; i <= tail; i++){
            array[i]=new_array[i-1];
        }
        delete [] new_array;
        tail+=1;
    }else{
        array[--head] = item;
        copy(array+head, array + tail, array);
    }
}

template <class T>
void Qstack<T>::Put(const T& item) {
    if (tail == capactiy) {
        if (2*(tail-head) > capactiy) {  
            ChangeSize1D(array, capactiy, 2*capactiy);
            capactiy *= 2;
        } else {                    
            copy(array+head,array+tail, array);
            tail -= head;
            head = 0;
        }
    }
    array[tail++] = item;
}

template <class T>
T& Qstack<T>::Pop() {
    if (IsEmpty())
        throw "Qstack is empty";
    T& value = array[head++];
    if (head >= capactiy / 2) {
        copy(array + head, array + tail + 1, array);
        tail -= head;
        head = 0;
        if (4 * (tail - head) <= capactiy) {
            ChangeSize1D(array, capactiy, capactiy / 2);
            capactiy /= 2;
        }
    }
    return value;
}
template <class T>
T& Qstack<T>::Pull() {
    if (IsEmpty())
        throw "Qstack is empty";
    T& value = array[tail--];
    if (head >= capactiy / 2) {
        copy(array + head, array + tail, array);
        tail -= head;
        head = 0;
        if (4 * (tail - head) <= capactiy) {
            ChangeSize1D(array, capactiy, capactiy / 2);
            capactiy /= 2;
        }
    }
    return value;
}

template <class T>
T& Qstack<T>::Peek(int index){
    try{
        if (index >= 0 && index < tail) {
            return array[index];
        }
        else if (index < 0 && index >= head - tail) {
            return array[tail + index];
        }
        else {
            throw index;
        }
    }
    catch (T index) {
        cout << index << " can't index number." << endl;
    }
}

template <class T>
string Qstack<T>::toString()
{
    string rval = "capacity = ";
    rval += to_string(capactiy);
    rval += "\nsize = ";
    rval += to_string(tail-head);
    for (int i = 0; i <= capactiy; i++) {
        rval += "\n" + to_string(array[i]); 
        rval += (i == head ? "<-- head" : (i == tail) ? "<-- tail" : "");
    }
    rval += "\n";
    return rval;
}
template class Qstack<int>;    
template class Qstack<float>;  