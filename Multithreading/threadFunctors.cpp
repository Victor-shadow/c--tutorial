#include <iostream>
#include <thread>
using namespace std;

//define a functor
class SumFunctor{
public: int n;
    SumFunctor(int a) : n(a) {}; //functor
    //overload operator ()
    void operator()() const{
        cout << n;
    }
};

int main(){
    //create a thread using Functor object
    thread t(SumFunctor(3));
    //wait for the thread to complete
    t.join();
    return 0;

}
