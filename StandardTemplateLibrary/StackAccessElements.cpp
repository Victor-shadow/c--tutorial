#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<string> st;
    st.push("JAVA");
    st.push("CUDA");
    st.push("KOTLIN");
    st.push("C++");
    //Access the top element
    cout << st.top();
    return 0;
}