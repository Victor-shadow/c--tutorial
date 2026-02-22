#include <iostream>
using namespace std;

int main(){
    int n;
    //Do while loop to ensure user enters positive number
    do{
        cout << " Enter a positive number: ";
        cin >> n;
    } while (n <= 0);
    cout << "Entered Number: " << n << endl;
    return 0;
}