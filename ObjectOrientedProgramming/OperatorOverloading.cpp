#include <iostream>
using namespace std;

class OperatorOverloading{
public: int realValue, imaginaryValue;
    OperatorOverloading(int r, int i) : realValue(r), imaginaryValue(i){

    }
    //Overlod the operator
    OperatorOverloading operator +(const OperatorOverloading& object){
        return OperatorOverloading(realValue + object.realValue, imaginaryValue + object.imaginaryValue);
    }
};

int main(){
    OperatorOverloading obj(10, 2), obj2(20, 4);
    //add obj + obj2
    OperatorOverloading result = obj  + obj2;
    cout << result.realValue << " + i" << result.imaginaryValue;
    return 0;
}