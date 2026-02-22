#include <iostream>
using namespace std;

class Vehicle{
public: Vehicle(){
    cout << "This is a Vehicle constructor: " << endl;
  }
    virtual ~Vehicle(){}
};

class Train: public Vehicle{
public: Train(){
    cout << "This is a train constructor: "<< endl;
   }
    virtual ~Train(){}
};

class Airship:  public Train{
public: Airship(){
    cout << "This is an airship constructor: " << endl;
}
    virtual ~Airship(){}
};

int main(){
    Airship object;
    return 0;
}