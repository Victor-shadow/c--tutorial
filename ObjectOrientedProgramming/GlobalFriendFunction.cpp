#include <iostream>
using namespace std;

class base{
private:int private_variable;
protected: int protected_variable;
public: base(){
    private_variable = 100;
    protected_variable = 200;
    }
    virtual ~base(){}
    friend void friendFunc(base&obj);
};

//Friend function
void friendFunc(base& obj){
    cout << " Private variable: " << obj.private_variable << endl;
    cout << " Protected variable: " << obj.protected_variable << endl;
}
int main(){
    base object;
    friendFunc(object);
    return 0;

}
