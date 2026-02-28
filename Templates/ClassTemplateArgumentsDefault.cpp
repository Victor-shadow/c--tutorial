#include <iostream>
using namespace std;

template<typename T> class TemplateClass{
    public:
    T x;
    T y;
    TemplateClass(T val, T val2): x(val), y(val2){}
    void getValues(){
        cout << x << " " << y;
    }
};
int main(){
    TemplateClass<int> intValues(100, 200);
    TemplateClass<double> doubleValues(500.5, 1000.5);
    intValues.getValues();
    cout << endl;
    doubleValues.getValues();
    return 0;
}
