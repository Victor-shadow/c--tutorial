// A Loop allows users to execute a block of statements repeatedly any
// number of times

// TYPES OF LOOPS
// 1: For Loop
// - The for loop is an entry-controlled loop, which means that it checks whether the test condition
// is true before executing the statements inside the loop

// Syntax:
// for(variable initialization; test condition; increment/decrement/update){
//     // statements to be executed
// }

// The variable is set to some initial value
// If the test condition evaluates to true, the body of the loop is executed, if evaluated to false
// the loop is terminated
// After the execution of the body of the loop, the expression increments/decrements the variable in the loop by some value

// #include <iostream>
// #using namespace std;

// #int main(){
// #   for(int i = 0; i < 5; i++){
// #     cout << i << " ";
// #   }
// #   return 0;
// # }

// A ranged based for loop is only used for iterable objects such as vectors and requires
// no condition or update statement


// 2: While Loop
// - It is also an entry-controlled loop which is used when the exact number of iterations is unknown
// (The number of times the body of the loop is executed and the condition is created on the basis of it)
// While Loop execution is solely based on condition provided

// Syntax:
// while(condition){
//     // statements to be executed
// }

// 3: Do-While Loop
// - It is an exit-controlled loop, the condition is checked after executing the body of the loop
// - The body of the loop is only executed once irrespective of the test condition

// Syntax:
// do{
//   //Body of the loop
//   //update expression
// } while(condition);

// 4: For Each Loop
// - It is used to iterate over/through elements of a container or an array
// using begin() and end() function internally

// By value
// -for(auto it: arr), works on a copy of an array, modifications do not affect the original

// By reference
// -for(auto &it: arr), Elements can be modified directly

// Infinite loop
// //Piece of code that lacks a functional exit, it repeats infinitely
// //Condition is always evaluated to true

// Nesting of Loops
// //A loop is placed inside another loop
// //The inner loop is executed completely for each iteration of the outer loop
// //Useful in performance of multiple iterations within each iteration of a larger loop

// Break Out of a Loop
// //The break statement when encountered inside a loop, terminates a loop regardless of its test condition
// //The execution of the loop is dependent on multiple condition

// Continue the loop
// //The continue statement is used to skip the current iteration(remaining code inside the current iteration of the loop and proceeds to the next iteration proceeds to the next iteration)