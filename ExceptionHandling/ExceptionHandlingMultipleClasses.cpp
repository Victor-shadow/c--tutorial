#include <iostream>
using namespace std;

class ExceptionA{

};
class ExceptionB{

};
int main(){
    for(int i = 1; i <= 2; i++){
        try{
            if(i == 1)
            throw ExceptionA();
            else
            throw ExceptionB();
        }
        catch(ExceptionA e){
            cout << "Caught Exception of A class:\n ";
        }
        catch(ExceptionB b){
            cout << "Caught Exception of B class: \n";
        }
    }
    return 0;
}