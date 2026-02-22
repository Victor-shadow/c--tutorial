#include <iostream>
#include <memory>
using namespace std;

class weakPointer
{
    const int length, breadth;

public:
    //declare a constructor after the public access modifier
    weakPointer(const int a, const int b) : length(a), breadth(b) {}
    int area() const{
        return length * breadth;
    }
    int main(){
        const shared_ptr<weakPointer> pointer(new weakPointer(100, 200));
        const weak_ptr<weakPointer> pointer2(pointer);
        //access the method/member in a class using -> operator
        cout << pointer-> area() << endl;
        cout << pointer2.use_count() << endl;

        return 0;
    }
};