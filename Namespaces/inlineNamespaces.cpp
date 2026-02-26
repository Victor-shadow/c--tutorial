#include <iostream>
using namespace std;

namespace nameSp{
    inline namespace nsp{
        int var = 1000;
    }
}

int main(){
    //Members of the inline namespace are treated as if they are members of the enclosing namespace
    //The property is transitive
    cout << nameSp::var << endl;

}