#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    //Insert elements in the stack with push() method
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    //delete two elements from the top
    s.pop();
    s.pop();
    //print the stack
    while(!s.empty()){
        cout << ' ' << s.top();
        s.pop();
    }
    return 0;
}