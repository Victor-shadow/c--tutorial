#include <iostream>

class Rectangle{
    int _h, _v;
    public:
    //A constexpr constructor
    constexpr Rectangle(int h, int v) : _h(h), _v(v){

    }
    constexpr int getArea() const{
        return _h* _v;
    }
};

int main(){
    //Object is initialized at compile time
    constexpr Rectangle obj(200, 300);
    std::cout << "Area of the rectangle is: " << obj.getArea();
    return 0;
}