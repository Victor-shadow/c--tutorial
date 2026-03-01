#include <iostream>
using namespace std;

//function throwing exceptions
void func(int n){
    if(n < 10){
        throw 22;
    }
    else{
        throw 'c';
    }
}

int main(){
    try{
        try{
            cout << "Throwing exception from inner try: block\n";
            //func(2)
            func(12);
        }
        catch(int n){
            cout << "Inner catch block caught the exception: " << endl;
        }
    }

    catch(char c){
        cout << "Outer catch block caught the exception: " << endl;
    }
    cout << "Outside the block";
    return 0;
}