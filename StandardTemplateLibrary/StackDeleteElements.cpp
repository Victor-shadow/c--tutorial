#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);
    st.push(500);

    //delete the top element
    st.pop();
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}