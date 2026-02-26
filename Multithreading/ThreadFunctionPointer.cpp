#include <bits/stdc++.h>
using namespace std;

//function to be run by the thread
void func(const int n){
    cout << n << endl;;
}

int main(){
    //create a thread that runs function func
    thread t(func, 4);
    //wait for main thread to finish
    t.join();
    return 0;
}