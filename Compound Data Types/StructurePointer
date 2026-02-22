//A structure pointer stores the address of another structure
//Its members can be accessed using the -> operator
#include <iostream>
using namespace std;

struct Pointer{
    int variable;
    void displayCount(){
        cout << variable << endl;
    }
};

int main(){
    Pointer point = {100};
    //Create pointer
    Pointer *sptr = &point;

    //Use of Arrow Operator
    sptr -> displayCount();
    return 0;
}