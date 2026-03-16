#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    //create a copy
    stack<int> temp(st);
    //the while loop prints and removes elements from temp using top() and pop() till the stack is not empty
    while(!temp.empty()){
        cout << temp.top() << " ";
        temp.pop();
    }
    return 0;
}