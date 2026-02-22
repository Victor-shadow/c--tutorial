//One do-while loop inside another do-while loop
//The inner loop runs completely for every single iteration of the outer loop

#include <iostream>
using namespace std;

int i = 1, j;
int n = 5; //how many rows will be printed
int main(){
    do{ //counts row numbers
        j = 1; //initialize the loop variable of the inner loop
        do{ //prints stars based on row numbers(Inner loop)
            cout << " *"; //print
            j++; //increment inner loop variable
        } while (j <= i); //condition for inner loop variable
        cout << endl;
        i++;
    } while (i <= n);
    return 0;
}