#include <iostream>
using namespace std;

class  Exception{
 
};
class ExceptionB : public Exception{

};

int main(){
    for(int i = 1; i <= 2; i++){
        try{
            if(i == 1)
            throw Exception();
            else 
            throw ExceptionB();
        }
        catch(Exception e){
            cout << "Caught Exception of class: \n ";
        }
        catch(ExceptionB eA){
            cout << "Caught Exception B: \n ";
        }
    }
    return 0;

}