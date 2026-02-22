#include <iostream>
#include <memory>
using namespace std;

class Shapes{
    int length, breadth;

public:
    //declare a Shapes constructor
    Shapes(const int l, const int b) : length(l), breadth(b) {}

    int area() const{
        return length * breadth;
    }
};

int main(){
    shared_ptr<Shapes> pointer1(new Shapes(100, 200));
    shared_ptr<Shapes> pointer2 = pointer1;

    cout << pointer1-> area() << endl;
    cout << pointer2 -> area() << endl;

}