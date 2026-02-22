#include <iostream>
using namespace std;

//overloaded functions
void test(int var){
    cout << "Integer number: " << var << endl;

};
void test(float var){
    cout << "Float number: " << var << endl;

};
void test(int var1, float var2){
    cout << "Integer number: " << var1 << endl;
    cout << "Float number: " << var2 << endl;

};

int main(){
    int a = 5;
    float b = 100.5;
    //Overloaded functions with different types of parameters
    test(a);
    test(b);
    test(a, b);
    return 0;
}