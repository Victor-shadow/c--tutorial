#include <bits/stdc++.h>
using namespace std;

//function to be run by thread
void func(){
    cout << "Function run by the main thread: " << endl;
}
int main(){
    //Create the thread
    thread t(func); //callable function passed to thread
    //Main thread waits for t to finish
    t.join();
    cout << "Main thread finished: " << endl;
    return 0;


}