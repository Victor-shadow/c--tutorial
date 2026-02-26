#include <iostream>
#include <thread>

using namespace std;

class Static{
public: void functor(const int num) {
    cout << num << endl;
}
    //static member function
    static void func2(const int num){
    cout << num;
   }
};

int main(){
    //Member function requires an Object
    Static object;
    //Pass object and parameter
    thread t1(&Static::functor, &object, 3);
    t1.join();
    //static member function can be called with no object
    thread t2(&Static::func2, 5);
    t2.join();

    return 0;
}