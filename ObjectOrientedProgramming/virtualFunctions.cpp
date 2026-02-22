#include <iostream>
#include <memory>
using namespace std;

//Base class
class Shape{
public: virtual void calculate(){
    cout << "Area of the shape: " << endl;
}
    virtual ~Shape(){
    cout << " Shape destructor called: " << endl;
    }
};

//Derived class
class Square : public Shape{
public: int length, width;
    void calculate() override{
        cout << "Enter length of the square: " << endl;
        cin >> length;
        cout << "Enter the side of the square: " << endl;
        cin >> width;
        cout << "Area of the square is: " << length * width << endl;
    }
    ~Square(){
        cout <<" Square destructor called: " << endl;
    }
};

  class Rectangle: public Shape{
  public: int length, width;
      void calculate() override{
          cout << "Enter length of the rectangle: " << endl;
          cin >> length;
          cout << "Enter width of the rectangle: " << endl;
          cin >> width;
          cout << "Area of the rectangle is: " << length * width << endl;
      }

      ~Rectangle(){
          cout << "Rectangle destructor called: " << endl;
      }
};

int main(){
    //base class pointer
    std::unique_ptr<Shape> ptr = std::make_unique<Square>();
    ptr-> calculate();
    cout << ptr.get() << endl;

    Shape* ptr2;
    Rectangle r;
    ptr2 = &r;
    ptr2-> calculate();
    cout << "Rectangle Object address: " << ptr2 << endl;

    return 0;


}