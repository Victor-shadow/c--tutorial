#include <iostream>
#include <thread>
using namespace std;
#include <chrono>


void taskA(){
    std::cout << "Thread A is running. ID: " <<this_thread::get_id() <<"\n";
}

void taskB(){
    std::cout << "Thread B is running. ID: " << this_thread::get_id() << "\n";
}
int main(){
    thread t1(taskA());
    thread t2(taskB());
    //Get Thread ID
    cout << "ThreadA ID: " << t1.get_id() << "\n";
    cout << "ThreadB ID: " << t2.get_id() << "\n";
    //join threads if joinable
    if (t1.joinable()){
        t1.join();
        cout << "t1 joined: " << endl;
    }
    //detach t2
    if (t2.joinable()){
        t2.detach();
        cout << "t2 detached: " << endl;
    }

    cout << "Main thread sleeps for one second...\n: " << endl;
   this_thread::sleep_for(chrono::seconds(1));
    cout << "Main thread awake: " << endl;
    return 0;
}