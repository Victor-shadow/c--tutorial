#include <iostream>
using namespace std;

template<typename T1, typename T2 = double, typename T3 = string> class DefaultTemplateArguments{
    public: 
    T1 x;
    T2 y;
    T3 z;

    DefaultTemplateArguments(T1 valueA, T2 valueB, T3 valueC) : x(valueA), y(valueB), z(valueC){
    }
    void getValue(){
        cout << x << " "<< y << " " << z;

    }
};

int main(){
    DefaultTemplateArguments<int, float, string> valueTemplateArgument(10, 3.14f, "C++");
    DefaultTemplateArguments<char, bool, float> DefaultTemplateArguments('A', false, 3.14f);
    valueTemplateArgument.getValue();
    cout << endl;
    DefaultTemplateArguments.getValue();
    return 0;
}