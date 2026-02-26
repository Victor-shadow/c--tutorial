#include <iostream>
using namespace std;

int add(int x, int y){
  return x + y;
}
int multiply(int x, int y){
  return x * y;
}
int invoke(int x, int y, func<int(int, int)> f){
  return f(x, y);
}

int main(){
  //pass address of add, multiply
  cout <<invoke(100, 200, &add);
  cout << invoke(20, 50, &multiply);

}