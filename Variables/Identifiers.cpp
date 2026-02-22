#include <iostream>
using namespace std;

//Class Identifier
class A{
    string name;
    int age;
    string height;
};

//getSum identifier
void getSum(int a, int b){
    int _sum = a + b;
    cout << "The sum is: " << _sum << endl;
}

int main(){
    //Identifiers as variable names
    int studentAge = 20;
    string studentName = "Bjarne Stroustrup";
    double studentHeight = 1.75;

    getSum(10, 20);
    return 0;

}