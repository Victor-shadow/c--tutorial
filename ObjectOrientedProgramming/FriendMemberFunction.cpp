#include <iostream>
using namespace std;

class base;

class Function{
public: void outputFunc(base &obj);
};

class base{
private: int private_variable;
protected: int protected_variable;
public: base(){
    private_variable = 20;
    protected_variable = 40;
}
    //friend function
    friend void Function::outputFunc(base &obj);
};

void Function::outputFunc(base& obj){
    cout << "Private variables: " << obj.private_variable << endl;
    cout << "Protected variables: " << obj.protected_variable << endl;

}

int main(){
    base object1;
    Function object2;
    object2.outputFunc(object1);
    return 0;

}
