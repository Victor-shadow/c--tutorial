#include <iostream>
using namespace std;
template<class A, class B> class Generic{
    A x;
    B y;

public: A(){
    cout << "Constructor invoked: " << endl;
  }
};

int main(){
    return 0;
}