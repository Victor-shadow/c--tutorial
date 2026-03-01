#include <iostream>
using namespace std;

class ExceptionHandlingConstructor{
     int num;
    public: ExceptionHandlingConstructor(int x){
        try{
            if(x == 0){
                throw "Zero not allowed";
            }
            num = x;
            show();
        }
        catch(const char* exp){
            cout << "Exception caught: ";
            cout << exp << endl;
        }
    }


    void show(){
        cout << "Num = " << num << endl;
    }
};

int main(){
    ExceptionHandlingConstructor(0);
    cout << "Creation of object: " << endl;
    ExceptionHandlingConstructor(1);
    return 0;
}
