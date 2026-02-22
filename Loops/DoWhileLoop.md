//A do while loop is an exit-controlled loop that repeatedly executes a block of code
//it continues execution so long a condition remains true
//It guarantees that the loop body executes at least once, regardless of whether the condition is true or false

#include <iostream>
using namespace std;

int number = 0;

int main(){
    do{ //executes the body of the loop and then the condition is checked
        cout << " The value of n is: " << number << endl;
        number++;
    } while(number< 6);
    return 0;
}

//SYNTAX OF DO-WHILE LOOP
do{
  //Body of the loop
} while(condition);

//The Loop variable is defined beforehand and manually updated in the body of the
//loop

//PARTS OF THE DO-WHILE LOOP
1)Condition: It is checked after the loop body executes. If the condition evaluates to true, the loop continues
if false it exits

2)The loop variable is updated before termination of the loop

3)Body: A Group of statements that are executed at least once till the condition remains true

1: //Control falls into the do-while loop
2: //The statement inside the body of the loop gets executed
3: //The loop variable is updated
4: The flow jumps to the condition
5: If the condition yields true, the body of the loop is executed
6: If false, flow goes outside the loop
7: The do-while loop is terminated

USER INPUT VALIDATION
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

//INFINITE DO-WHILE LOOP
#include <iostream>
using namespace std;

int main(){
//Infinite loop
do {
  cout << "Infinite loop" << endl;
 } while(true);
  return 0;
}