#include <iostream>
#include <memory>
using namespace std;

class uniqueObject{
    int length,width;
public:
    uniqueObject(const int a,const int b) : length(a), width(b){}
        int area() const{
            return length * width;
    };
};

int main(){
    unique_ptr<uniqueObject> pointer(new uniqueObject(1000, 2000));
    cout << pointer -> area() << endl;

    const unique_ptr<uniqueObject> pointer1 = move(pointer); //transfer ownership from pointer - pointer1
    cout << pointer1 -> area() << endl;
    return 0;
}

