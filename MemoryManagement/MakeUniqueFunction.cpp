#include <iostream>
#include <memory>
using namespace std;

class Name{
public:
    Name(){
        cout << "Object creation\n";
    }
    ~Name(){
        cout << "Object destroyed\n";
    }
};

void pointer(){
    unique_ptr<Name> unique = make_unique<Name>();
}
int main(){
    pointer();
    return 0;
}