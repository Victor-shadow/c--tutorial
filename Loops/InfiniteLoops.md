//In C++, a loop is part of a code that is executed repeatedly till the given condition is
//satisfied
//It is a loop that runs indefinitely, without any condition to exit the loop

//INFINITE LOOP IN C++(Endless/Non-Terminating Loop)
//It is any loop in which the condition is always true leading to the given block of code being executed repeatedly
//(Infinite number of times)
//They run till the program's life

//TYPES OF INFINITE LOOPS IN C++
//Infinite While Loop
//The Value is just passed that results true as the condition of the while loop
//Syntax:
//while(1)
//or
//while(true)

#include <iostream>
using namespace std;

int main(){
    for(;;){
        cout << "This is an infinite loop" << endl;
    }
    return 0;
}

//INFINITE FOR LOOP
//The condition is left empty in the for loop, hence it is always true
//Syntax:
 //for(;;)

 #include <iostream>
 using namespace std;

 int main(){
    for(;;){
        cout << "This is an infinite loop" << endl;
    }
    return 0;
 }

//INFINITE DO-WHILE LOOP
//Syntax:
// do{
// while(1);
//}

#include <iostream>
using namespace std;

int main(){
    do{
        cout << "This is an infinite loop" << endl;
    } while(true);
    return 0;
}

//CAUSES OF INFINITE LOOPS IN C++
//1. Missing Update Statement inside the loop

#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i < 5){
        cout << i << endl;
    }
    return 0;
}

//2: INCORRECT LOOP CONDITIONS
#include <iostream>
using namespace std;

int main(){
    int i = 1;
    while(i >= 0){
        cout << "Intro to C Programming" << endl;
    }
    return 0;
}

//LOGICAL ERRORS IN THE LOOP
#include <iostream>
using namespace std;

int main(){
    for (int i = 3; i > 2; i +=2)
    {
     cout << "This is an Infinite loop" << endl;  /* code */
    }
    return 0;
    
}