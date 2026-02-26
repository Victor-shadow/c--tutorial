#include <iostream>

namespace FieldA{
    void functionField(){
        std::cout << "Field in Namespace.md A" << std::endl;
    }
}

namespace  FieldB{
    void functionFieldB(){
        std::cout << "Field in namespace B" << std::endl;
    }
}

int main(){
    FieldA::functionField();
    FieldB::functionFieldB();
    return 0;
}