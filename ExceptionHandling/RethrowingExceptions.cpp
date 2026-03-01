#include <iostream>
#include <stdexcept>
using namespace std;

//function to perform division
int divide(const int numerator, const int denominator){
    try{
        if(denominator == 0){
            //Throw a runtime-error to attempt to divide by zero
            throw runtime_error("Division by Zero");
        }
        //Perform the division/return results
        return numerator / denominator;
    }
    catch(const exception& e){
        cout << "Caught Exception in Division(): " << e.what() << endl;
        //throw the caught exception
        throw;
    }
}
//function to calculate the sum of two numbers
int calculateSum(const int a, const int b){
    try{
        if(a < 0 || b < 0){
            //Throw an invalid argument exception
            throw invalid_argument("Negative numbers not allowed: ");
        }
        //calculate the sum
        return a + b;
    }
    catch(const exception& e){
        cout << "Caught Exception in calculateSum(): " << e.what() << endl;
        throw;
    }
}

int main(){
    try{
        //calculate the sum of 10 and the result of dividing 20 by 2
        int result = calculateSum(10, divide(20, 2));
        cout << "Result: " << result << endl;
        //Attempt to divide by zero
        int invalidResult = calculateSum(5, divide(10, 0));
        cout << "Invalid Result: " << invalidResult << endl;
    }
    catch(const exception& e){
        cout << "Caught Exception in main(): " << e.what() << endl;
    }
    return 0;
}