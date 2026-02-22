//The Break in C++ is a loop control statement that is used to terminate the loop
//They stop loop iterations and control returns from the loop immediately to the first statement
//after the loop

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i <= 10; i++){
        if (i == 7) break;
        cout << i << endl;
    }
 return 0;
}

//SYNTAX
for (int variable; condition; operation){
    //code
    if (condition){
        break;
    }
    //code
}

//The for loop starts running and repeats so long condition is true
//When the if condition becomes true, the break statement is executed
//Break immediately stops the loop/ the program moves outside the loop

//BREAK STATEMENT IN A WHILE LOOP
#include <iostream>
using namespace std;

int i = 0;
int main(){
    while (i < 10){
        if (i == 5) break;
        i++;
        cout << i << " ";
    }
    return 0;
}

//BREAK WITH INFINITY LOOPS
//The Break statement can be included in an infinite loop with a condition in order to terminate
//the execution of an infinite loop

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while (1){
        if (i > 10)
            break;
        cout << i << " ";
        i++;
    }
    return 0;

}