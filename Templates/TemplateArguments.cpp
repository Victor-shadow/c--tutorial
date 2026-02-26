#include <iostream>
using namespace std;

template<typename valueA, typename valueB, typename valueC> class TemplateArguments{
   public:
   valueA x;
   valueB y;
   valueC z;

TemplateArguments(valueA typeA, valueB typeB, valueC typeC) : x(typeA), y(typeB), z(typeC){
    cout << "Multiple template arguments: " << endl;
}
void getValues(){
    cout << x << " " << y << " " << z << " " << endl;
   }
};

int main(){
    TemplateArguments<int, double, string> resultMultipleArguments(10, 50.5, "C++");
    TemplateArguments<char, float, bool> valueMultipleArguments('d', 3.14159f, true);
    resultMultipleArguments.getValues();
    cout << endl;
    valueMultipleArguments.getValues();
    return 0;
}