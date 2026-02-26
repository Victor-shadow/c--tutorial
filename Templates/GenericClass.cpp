#include <iostream>
using namespace std;

template<typename T> class Array{
    private: 
    T* ptr;
    int size;

    public:
    Array(T arr[], int s);
    void print();
};
//methods outside class body

template<typename T> Array<T>::Array(T arr[], int s){
    ptr = new T[s];
    size = s;
    for(int i = 0; i < size; i++)
    ptr[i] = arr[i];
}

template<typename T> void Array<T>::print(){
    for(int i = 0; i < size; i++)
    cout << " " << *(ptr + i);
    cout<< endl;
}

int main(){
    int arr[5] = {100, 200, 300, 400, 500};
    Array<int> a(arr, 5);
    a.print();
    return 0;
}

