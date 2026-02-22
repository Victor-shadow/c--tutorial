#include <iostream>
using namespace std;

class LandVehicle{
public:
  void landInfo(){
    cout << "This is a land type vehicle: "<< endl;
  }

  virtual ~LandVehicle()= default;
};

class WaterVehicle: virtual public LandVehicle{
public:
  void waterInfo(){
    cout << "This is a water type vehicle: " << endl;
  }
  ~WaterVehicle() override{}
};
//Derived class inherits from both classes
class AirVehicle: virtual public LandVehicle, public WaterVehicle{
public: AirVehicle(){
    cout << "This is an air type vehicle: " << endl;
  }
  ~AirVehicle() override{}
};

int main(){
  AirVehicle obj;

  obj.landInfo();
  obj.waterInfo();

  return 0;

}

