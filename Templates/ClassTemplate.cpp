#include <iostream>
using namespace std;

template <typename T> class Template{
   public: 
   T x;
   T y;
   //constructor
   Template(T valueA, T valueB) : x(valueA), y(valueB){
   }
   //Getter method
   void getValue(){
    cout << x << " " << y;
   }
};

int main(){
    Template<int> intTemplate(10, 20);
    Template<double> doubleTemplate(150.5, 250.5);
    intTemplate.getValue();
    cout << endl;
    doubleTemplate.getValue();
    return 0;
}