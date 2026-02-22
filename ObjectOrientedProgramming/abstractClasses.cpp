#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Abstract class
class Shape{
    //define an access specifier
protected:
    //define variable
    double height;

public:
    //define a constructor with an access specifier
    Shape(double height){
        this->height = height;
    }

    //Abstract or pure virtual method
    virtual double volume() = 0;
    //concrete method
    double getHeight(){
        return height;
    }
    virtual ~Shape(){}
};

class Cuboid: public Shape{
private:
   double length;
    double width;

public:
    Cuboid(double height, double length, double width): Shape(height){
        this->length = length;
        this->width = width;
    }

    double volume() override{
         return length * width * height;
    }
};

int main(){
    Shape* pointer= new Cuboid(10.0, 30.0, 50.0);
    cout << "The height of the cuboid is determined as: " << pointer-> getHeight() << endl;
    cout << "The volume of the cuboid is: " << pointer -> volume() << endl;

    delete pointer;
    return 0;

}
