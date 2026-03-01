#include <iostream>
using namespace std;

int main(){
    //code that might throw an exception
    try{
        int choice;
        cout << "Enter 1 for invalid argument, " << "2 for out of range: ";
        cin >> choice;

        if(choice == 1){
        throw invalid_argument("Invalid argument");
        }
        else if(choice == 2){
          throw out_of_range("Out of range.");
        }
        else {
            throw "Unknown Error: ";
        }
    }

    //executed when exception is of type invalid_argument
    catch(invalid_argument e){
        cout << "Caught exception: " <<e.what() << endl;
    }
    catch(out_of_range e){
        cout << "Exception range: " <<e.what() << endl;
    }
    //execute when no matching case is found
    catch(...){
        cout << "Caught an unknown exception: " << endl;
    }
    return 0;
}