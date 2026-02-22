#include <iostream>
using namespace std;

class Complex{
   private: int real, imaginary;
   public: Complex(int real, int imaginary){
      this->real = real;
      this->imaginary = imaginary;
   }
   void print(){
      cout << real << " + i " << imaginary;
   }
   Complex operator+(Complex c2){
      Complex c3(0, 0);
      c3.real = this-> real + c2.real;
      c3.imaginary = this -> imaginary + c2.imaginary;
      return c3;
   }
};

int main(){
   Complex c(3, 5);
   Complex c2(10, 30);
   Complex c3 = c + c2;

   c3.print();
   return 0;
}