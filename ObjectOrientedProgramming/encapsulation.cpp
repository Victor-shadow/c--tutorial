#include <iostream>
using namespace std;

class Programmer{
    //use a private modifier for a getter function
private: string name;
    //Use a public access modifier for a setter function
public: string getName(){
        return name;
    }
    //setter method
public: void setName(string newName){
    name = newName;
    }
};

int main(){
    Programmer object;
    object.setName("Bjarne Stroustrup");
    cout << "Name=> " << object.getName() << endl;
    return 0;
}
