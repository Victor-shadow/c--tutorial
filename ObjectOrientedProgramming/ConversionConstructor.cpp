#include <iostream>
using namespace std;

class Point{
  private: int x, y;
  public: Point(int i = 0, int j = 0){
    x = i;
    y = j;
  }

  void print(){
    cout << "x = " << x << "y = " << y <<  "\n" << endl;

  }
};

int main(){
  Point t(200, 200);
  t.print();
  t = 20;
  t.print();
  return 0;

}