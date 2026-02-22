#include <iostream>
using namespace std;

int main(){
    //Switch variable
    char c;

    //operands
    int x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Enter the Operator (+, -, / *)\nEnter any other to exit\n";
    cin >> c;

    //switch case with operators
    switch (c){
    case '+':
        cout << x << " + " << y << " = " << x + y << endl;
        break;

    case '-':
        cout << x << " - " << y << " = " << x - y << endl;
        break;

    case '*':
        cout << x << " * " << y << " = " << x * y << endl;
        break;

    case '/':
        cout << x << " / " << y << " = " << x / y << endl;
        break;

    default:
        printf("Exiting\n");
    }
    return 0;
}