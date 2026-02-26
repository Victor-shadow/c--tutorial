#include <bits/stdc++.h>
#include <iostream>
#include <thread>
using namespace std;

int n = 100;
int main(){
    //create a thread that runs a lambda expression
    thread t([](const int n){
        cout << n << endl;

    }, n);
    //wait for thread to complete
    t.join();
    return 0;

}