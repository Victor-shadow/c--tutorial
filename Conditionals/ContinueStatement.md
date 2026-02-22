//The C++ Continue statement is a loop control statement that forces the program control
//to skip to the next iteration of the loop
//The Code inside the loop following the continue statement will be skipped, and the next iteration of the loop
//begins

#include <iostream>
using namespace std;

int main(){
    for (int i = 1; i < 9; i++){
        if (i == 5) continue;
        cout << i << " ";
    }
    return 0;
}

//WORKING OF THE CONTINUE STATEMENT
for (int variable; condition; operation){
    //...
    if (condition){
        continue;
    }
    //
}
//The for loop starts and enters the loop body
//Inside the loop, a condition is checked, if the condition is true, continue statement runs
//continue skips the remaining code of the loop cycle and sends control back to the next iteration
//of the loop

//CONTINUE STATEMENT WITH A WHILE LOOP
//With continue the current iteration is skipped, control flow resumes in the next iteration of
//the while loop

while (condition){
    //
    if (condition){
        continue;
    }
    //
}

//CONTINUE STATEMENT WITH DO-WHILE LOOP
//In a do while loop the condition is checked after the loop body is executed
//When a continue statement is encountered in a do-while loop, control jumps directly to the condition checking
//for the next loop, and the remaining code in the loop body is skipped


do{
    //code
    if (condition){
        continue;
    }
    //code
} while (condition);

#include <iostream>
using namespace std;

int main(){
    int i = 0;
    do{
        i++;
        if (i == 4){
            continue;
        } else{
            cout << i << " ";
        }
    } while ( i < 10);
    return 0;
}

//In the While and do-while loop the loop variable is updated before the continue statement
//or else continue is encountered before updating the loop variable creating an infinite loop

CONTINUE                                                  BREAK
1:Only the current loop iteration                         It stops the loop entirely
is stopped

2:Subsequent Iterations continue                          Remaining iterations are terminated
without iteration                                         by break statements

3:It can be used with the for loop                        The break statement can be used
but cannot be used with switch                            with the switch statement
statements

4:When continue statement is used                         When a break statement is used
control remains inside the loop                           control exits the loop

5:It skips a particular loop                              The Execution of the loop at a specified condition
iteration                                                 condition is stopped with a break statement
