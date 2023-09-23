#include <iostream>
using namespace std;

int *SelectionSort(int *a, const int n){
    int *sort_arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        int j = i;
        for (int k = i + 1; k < n; k++)
            if (a[k] < a[j]) j = k;
        if(j != i){
            swap(sort_arr[i],sort_arr[j]);
        }
    }

    return sort_arr;
}

int main(){
    int test[3] = {20, 30 ,10};
    int *index = SelectionSort(test, 3);
    for (int i = 0; i < 3; i++) {
        cout << index[i] << endl;
    }
}