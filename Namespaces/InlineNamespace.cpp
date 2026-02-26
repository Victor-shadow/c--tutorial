#include  <iostream>
using namespace std;

inline namespace inline_space{
    void display(){
        cout << "This is an inline namespace: " << endl;
    }
}

int main(){
    display();
    return 0;
}