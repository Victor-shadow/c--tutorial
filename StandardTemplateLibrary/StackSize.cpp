#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    cout << "The size of the stack: " << st.size() << endl;
    st.pop();
    cout << "Size of the stack: " << st.size() << endl;
    return 0;
}