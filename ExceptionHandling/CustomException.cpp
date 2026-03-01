#include <iostream>
#include <exception>
using namespace std;

//Custom exception class
class NegativeValueException : public exception{
    private: int value;
    public: NegativeValueException(int val): value(val){}
    //override method
    const char* what() const noexcept override {
        return "Negative value error occurred: ";
    }
    //get invalid value
    int getValue() const {
        return value;
    }
};

//function that throws the custom exception
void checkValue(int x){
    if(x  < 0){
        throw NegativeValueException(x);
    } else {
        cout << "Value is: " << x << endl;
    }
}

int main(){
    int numbers[] = {10, -5, 20};
    for(int n: numbers){
        try{
            checkValue(n);
        }
        catch(NegativeValueException &e){
            cout << "Exception caught: " << e.what() << "Value = " << e.getValue() << endl;
        }
    }
    return 0;
}