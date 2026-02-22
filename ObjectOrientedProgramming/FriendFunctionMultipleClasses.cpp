#include <iostream>
using namespace std;

class ABC;

class XYZ{
    int x;
public: void set_data(int a){
    x = a;
}
    friend void max(XYZ, ABC);
};

class ABC{
    int y;
public: void set_data(int a){
    y = a;
}
    friend void max(XYZ, ABC);
};

void max(XYZ obj1, ABC obj2){
    if (obj1.x > obj2.y){
        cout << obj1.x << endl;
    } else{
        cout << obj2.y << endl;
    }
}

void max(ABC abc, XYZ xyz);

int main(){
    ABC abc;
    XYZ xyz;
    abc.set_data(200);
    xyz.set_data(300);

    //call friend function
    max(abc, xyz);
    return 0;
}
