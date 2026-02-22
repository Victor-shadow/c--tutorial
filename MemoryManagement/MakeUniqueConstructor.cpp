#include <iostream>
#include <memory>
using namespace std;

class Construct{
public:
    int d;
    Construct(const int c){
        this-> d = c;
        cout << "Object created" << endl;
    }
    //destructor
    ~Construct(){
        cout << "Object destroyed" << endl;
    }
};

void func(){
    //create a unique pointer
    unique_ptr<Construct> ptr = make_unique<Construct>(10);
    cout << ptr -> d << endl;
}

int main(){
    func();
    return 0;
}
