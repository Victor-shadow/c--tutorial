#include <iostream>

namespace first_space{
    void functionFirstSpace(){
        std::cout << "First Namespace.md: " << std::endl;
    }
}
//using namespace  first_space;
using first_space::functionFirstSpace;
int main(){
    functionFirstSpace();
    return 0;
}