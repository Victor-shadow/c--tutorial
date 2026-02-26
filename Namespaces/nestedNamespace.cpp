#include <iostream>
using namespace std;

//outer namespace
namespace outer{
    void func(){
        cout << "Inside outer namespace: " << endl;
    }

    namespace inner{
        void function(){
            cout << "Inner namespace: " << endl;
        }
    }
}

int main(){
    outer::inner::function();
    return 0;
}