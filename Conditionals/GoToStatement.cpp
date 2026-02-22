#include <iostream>
using namespace std;

int n = 5;
int main(){
    if (n % 2 == 0){
        //skip to label 1
        goto label1;
    }
    else{
        //skip to label2
        goto label2;
    }

    label1:
    cout << "Even" << endl;
    return 0;

    label2:
    cout << "Odd" << endl;
    return 0;

}