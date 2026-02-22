#include <iostream>
using namespace std;
//A pure Abstract class that functions as an interface
class Printable{
public:
    virtual void print() = 0; //this method is abstract/no body
    virtual void scan() = 0;
    //virtual destructor to cleanup memory
    virtual ~Printable(){}
};

//Derived class
class Document: public Printable{
public:
    void print() override{
        cout << "Printing document..." << endl;
    }
    void scan() override{
        cout << "Scanning document..." << endl;
    }
};

class Photo: public Printable{
public:
    void print() override{
        cout << "Print photo..." << endl;
    }
    void scan() override{
        cout << "Scanning photo..." << endl;
    }
};

int main(){
    //Base class pointer point to derived objects
    Printable* pointer = new Document(); //objects pointed in memory
    Printable* ptr = new Photo();
    //call interface functions
    //runtime polymorphism
    pointer->print();
    pointer->scan();

    ptr->print();
    ptr->scan();

    //free memory
    delete pointer;
    delete ptr;

    return 0;
}



