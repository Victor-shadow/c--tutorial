#include <iostream>
using namespace std;

class Vehicle{
public: Vehicle(){
    cout << "This is a vehicle: "<< endl;
   }
    virtual ~Vehicle(){}
};

class Truck{
public: Truck(){
    cout << "This is a truck: " << endl;
   }
    virtual ~Truck(){}
};

class Car: public Vehicle{
public: Car(){
    cout << "This vehicle is a Car: " << endl;
}
    virtual ~Car(){}
};

class Bus: public Vehicle, public Truck{
public: Bus(){
    cout << "This vehicle is a Bus with Truck: " << endl;
  }
};

int main(){
    Bus object;
    return 0;
}

