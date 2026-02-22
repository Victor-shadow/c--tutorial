#include <iostream>
using namespace std;

typedef struct Pointer{
    int x, y;
    //specify the alias variable
} Structures;

int main(){
    //Use the alias variable
    Structures s = {10, 20};

    cout << s.x << " " << s.y << endl;
    return 0;
}