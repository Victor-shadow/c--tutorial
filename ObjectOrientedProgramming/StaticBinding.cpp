#include <iostream>
using namespace std;
//Base class
class Shape{
protected: int length, width;
public: Shape(int l, int w) : length(l), width(w){}
    int getArea(){
    cout <<"This is call to parent class area: \n" << endl;
    return 1;
}
    virtual ~Shape() = default;

};

//Derived class
class Square: public Shape{
public: Square(int l, int w) : Shape(l, w){}
    int getArea() {
    cout << "Square area:  " << length * width << endl;
    return length * width;
}
};

class Rectangle: public Shape{
public: Rectangle(int l, int w) : Shape(l, w){}
    int getArea(){
    cout << "Rectangle area:  " << length * width << endl;
    return length * width;
}
};

int main(){
    Shape* ptr;
    Square sqr(5, 5);
    Rectangle rect(1000, 2000);
    ptr = &sqr;
    ptr-> getArea();

    ptr = &rect;
    ptr -> getArea();

    return 0;
}
