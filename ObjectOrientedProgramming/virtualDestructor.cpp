#include <iostream>
using namespace std;

class base{
    public: base(){
        cout << "This is a base constructor" << endl;
    }
    virtual ~base(){ //guarantees that the object of the derived class is destroyed properly
        cout << "This is a destructor\n" << endl;
    }
};

class derived: public base{
    public: derived(){
        cout << "This is a derived constructor" << endl;
    }
    ~derived(){
        cout << "This is a derived destructor\n" << endl;
    }
};

int main(){
    derived* d = new derived();
    base* b = d;
    delete b;
    getchar();
    return 0;
}
