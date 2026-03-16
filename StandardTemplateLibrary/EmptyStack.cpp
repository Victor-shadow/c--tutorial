#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    if(st.empty()){
        cout << "Stack is empty: ";
    }
    st.push(1000);
    if(!st.empty()){
        cout << "Stack is not empty. Top element: " << st.top();
    }
    return 0;
}
