#include <iostream>
using namespace std;

namespace Namespace{
    //variable with namespace scope
    int namespaceVar = 1000;
}

int main(){
    //Access variable with namespace scope / scope resolution operator
    cout << "Variable with namespace scope: " << Namespace::namespaceVar;
    return 0;
}