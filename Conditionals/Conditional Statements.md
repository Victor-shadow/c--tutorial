//They are also called decision-control statements used to execute specific blocks of code
primarily based on given situations

//IF STATEMENT
//It is used to decide whether a certain statement or block of statements will be executed or not
//executed based on a certain condition

//#include <iostream>
//using namespace std;
//int main()
//{
    //int i = 17;
    //If statement
    //if (i < 18)
    //{
        //cout << "You are underage" <<endl;
    //}
    //return 0;
//}

//IF STATEMENT WITHOUT CURLY BRACES
//#include <iostream>
//using namespace std;
//int age = 10;
//int main(){
  //if(age < 18)
   //cout << "You are underage: " << age;
   //return 0;
 //}


//SYNTAX:
//if(condition){
//statement to execute if condition is true
//}

//ROLE OF THE IF STATEMENT
//1: Control falls into the if block
//2: Flow jumps to the condition
//3: Condition is tested
 //If true - the Body of the if statement is executed
 //If false- Statement outside the if is evaluated
//4: The if-block oe the body inside the if is executed
//5: Flow steps outside the block

//IF-ELSE STATEMENT
//The else-statement can be used with the if statement to execute a block of code if the
//condition is false

//Syntax:
if(condition){
//Execute the block if the condition is true
}
else {
//Execute the block if condition turns out false
}

//ROLE OF THE IF-ELSE BLOCK
//1: Control flows into the if block
//2: Condition is tested:
// IF TRUE: The body of the if statement is executed
// IF FALSE: The body of the else statement is executed
//3: Flow exits the if-else block

//EXAMPLE
//#include <iostream>
//using namespace std;
//int main(){
    //int a = 20, b = 15, c = 13;
    //find the largest number using the relational operators with if-else
    //if (a >= b){
        //if (a >= c)
            //cout << a;
        //else
            //cout << c;

    //}
    //else
    //{
        //if (b >= c)
            //cout << b;
        //else
            //cout << c;
   // }
    //return 0;
//}

//#include <iostream>
//using namespace std;

//int main()
//{
    //int a = 1, b = 2, c = 7;
    //Compound expression
    //if (a <= b && a <= c)
        //cout << a;
    //else if (b >= a && b >= c)
        //cout << b;
    //else
        //cout << c;
    //return 0;
//}


//IF-ELSE-IF STATEMENT
//It helps the user to decide from among multiple options
//If statements are executed from the top downwards
//If none of the conditions is true then, the final statement is executed
//If one of the conditions evaluates to true, the statement associated with it is then executed

//SYNTAX
if(condition 1) { //condition to be tested
//Statement 1 //code block responds to condition1
}
else if(condition 2){ //condition to be tested
//Statement 2 //code block responds to condition2
}
else {
Else body
}

//If Condition1 evaluates to true, Statement1 is executed and the rest of the else if and
//else conditions are skipped

//If Condition1 is false, Condition2 is evaluated

//If Condition2 evaluates to true,  Statement 2 is executed, and the else block is skipped

//If Condition2 is false then, the else block is executed

//After Completion of the if-else-if ladder, statements just below the if is executed



//NESTED IF-ELSE STATEMENT
//It contains an if statement inside another if statement(An if statement inside another if else statement)
//Used to implement multilayer conditions(condition inside a condition)
//Allows for more complex selection and used for comparison for multiple options/conditions
//In this type of statement, multiple conditions are checked, and then the body of the last statement is executed

//SYNTAX
 if(condition1){
   if(condition2){
  //statement1
 }
else{
   //Statement2
   }
}
 else{
  if(condition3){
  //Statement3
}
else {
//Statement4
   }
}

//The inner if-else statement is executed only if 'condition1' becomes true otherwise else statement will be executed

//EXAMPLE
//#include <iostream>
//using namespace std;

//int main(){
    //int a = 10, b = 20, c =30;
    //Outermost if-else
    //if (a < b){
        //Nested if-else statement
        //if (c < b){
            //cout << b;
        //}
        //else{
            //cout << c;
        //}
    //}
    //else{
        //Nested if-else
        //if (c < a){
            //cout << a;
        //}
        //else{
            //cout << c;
        //}
    //}
    //return 0;
//}

//SWITCH STATEMENT
//In C++, the switch statement is used when multiple situations need to be evaluated primarily
//based on the value of a variable or an expression
//An alternative to multiple if-else statements/ if-else ladder
//Handles multiple conditions

//#include <iostream>
//using namespace std;

//int main(){
    //char c = 'B';
    //switch (c){
        //If input character is 'A' print 'Kotlin'
        //case 'A':
        //cout << "Kotlin";
        //break;

        //If input character is 'B' print 'C#'
        //case 'B':
        //cout << "C#";
        //break;

        //If input character is 'C' print 'Java'
        //case 'C':
        //cout << "Java";
        //break;
        //default value
        //default:
        //cout << "Invalid input"; //if input character is invalid
    //}
    //return 0;
//}

//TERNARY OPERATOR
//The Conditional operator is also known as the ternary operator
//It is used to write Conditional operations provided by c++
//The '?' operator first checks the given condition, if the condition is true then the first expression is executed
//otherwise the second expression is executed

//SYNTAX:
expression ? statement_1 : statement_2;

