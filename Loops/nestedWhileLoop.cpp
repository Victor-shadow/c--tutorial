//A while loop inside another while Loop
//The inner while loop executes completely for every single iteration of the outer while loop

#include <iostream>
using namespace std;

int i = 1, j;
int n = 4; //decides how many rows and columns are to be printed
int main()
{
    while (i <= n){ //outer while loop controls the number of rows
        j = 1;
        while (j <= n){ //inner while loop prints "*" in each row
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
