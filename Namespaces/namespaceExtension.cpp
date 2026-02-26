#include <iostream>
using namespace std;

namespace nmsp{
    void func(){
        cout << "Namespace.md A: " << endl;
    }
}

namespace nmsp{
    void function(){
        cout << "Namespace.md B: " << endl;
    }
};

int main(){
    nmsp::function();
    nmsp::func();
    return 0;
}