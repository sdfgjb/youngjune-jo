#include <string>
#include <iostream>
#include "queue.h"
using namespace std;

int main()
{
    Qstack<int> test;
    
    for (int i = 1; i <=15; i++){
        test.Put(i*i);
    }
    cout << test.toString() << endl;

    for (int i = 1; i <= 10; i++) {
        test.Pull();
    }     
    cout << test.toString() << endl;
}