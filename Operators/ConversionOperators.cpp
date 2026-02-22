#include <iostream>
using namespace std;

class Fraction{
     private: int numerator, denominator;
     public: Fraction(int n, int d){
          numerator = n;
          denominator = d;
     }

     //Conversion Operator
     operator float() const{
          return float(numerator) / float(denominator);
     }
};

int main(){
     Fraction object(1, 3);
     float value = object;
     cout << value << endl;
     return 0;
}