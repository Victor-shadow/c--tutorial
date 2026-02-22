using namespace std;
#include <iostream>

//Short For loop
    #define forLoop(len) for (int i = 0; i < len; i++)

int main(){
    string arr[5] = {"Java", "Python", "C++", "JavaScript", "Golang"};

    forLoop(5){
        cout << arr[i] << "\n";
    }
    return 0;


}