//In C++, the while loop is an entry-controlled loop that repeatedly executes a block
//of code as long as a condition remains true
//The while loop is used when the exact number of iterations is unknown
// The loop execution is terminated on basis of test condition

#include <iostream>
using namespace std;
int main(){
    //while loop to print numbers from 1 - 5
    int i = 0;
    while (i < 5){
        cout << "C++" << endl;
        i++;
    }
    return 0;
}

//SYNTAX:
//while (condition){
    //Body of the loop
    //update expression
//}
//The Loop variable is declared before hand and updated in the body of the loop
//Parts of the While Loop
//1: Condition: The loop executes its body till the condition remains true
//2: Update Expression: The value of the loop variable is updated to make it closer to the termination
//condition
//3: Body: It is a group of statements that will be executed till the condition remains true

// while(condition){
   //Body of the loop
   //statements to be executed
//}
//statements outside the loop

//Control flows into the while loop
//The flow jumps to the condition
//If the Condition yields true, flow goes into the body
//If false, the flow goes outside the loop
//The statements inside the loop body get executed
//Update/Operation takes place
//The while loops gets terminated, the flow goes outside

//WHILE LOOP TO PRINT NUMBERS FROM 1 -5
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //Declare and initialize loop variable
    int i = 1;
    //while loop
    while (i < 5)
    {
        cout << i << " " << endl;
        //update loop variable
        i++;
    }
    return 0;
}

//Infinite While Loop
#include <iostream>
using namespace std;

int main()
{
    while (true) //A condition that is always true
    {
        cout << "C++ " << endl;
    }
    return 0;
}

//SUM OF NATURAL NUMBERS
#include <iostream>
using namespace std;

int main(){
int n = 10;

int sum = 0;

//while loop to calculate the sum
while(n > 0){
sum += n;
n--;
}
cout << sum << endl;
return 0;
}