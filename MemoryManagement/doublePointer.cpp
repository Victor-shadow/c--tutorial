#include <iostream>
using namespace std;

int variable = 100;
int main(){
    int* pointer = &variable; //stores address of the variable
    //double pointer
    int** pointer2 = &pointer; //store address of pointer in pointer2
    //Display the value of the variable
    cout << "Value of the variable :- " << variable << "\n";
    cout << "Value from the single pointer variable :- " << *pointer << "\n";
    cout << "Value from the double pointer variable :- " << *pointer2 << "\n";

    return 0;

}
