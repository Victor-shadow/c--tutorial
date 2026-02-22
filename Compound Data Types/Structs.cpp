#include <iostream>
using namespace std;

struct Point{
    private:
    int x, y;
    public:
    //Constructors
    Point(int a, int b){
        x = a;
        y = b;
    };
    //member function
    void displayOutput(){
        cout << x << " " << y << endl;
    }
    //Destructor
    ~Point(){
        cout <<"Destroyed Point Variable" << endl;
    }
};

int main(){
    //Create Point variables using Constructors
    Point s1(1, 1);
    Point s2(200, 300);

    s1.displayOutput();
    s2.displayOutput();

}