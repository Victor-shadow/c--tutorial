#include <iostream>
using namespace std;

inline void displayMessage(){
    for (int i =0; i < 10; i++){
        cout << "Introduction to C++: " << i << endl;
    }
}
int main(){
    displayMessage();
    return 0;
}