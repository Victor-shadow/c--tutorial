-It allows one to define multiple functions with the same name but with different parameters
so that the function can perform different tasks depending on the values
- The compiler evaluates the function signature which consists of the function name and parameter types
and matches it with the passed arguments in the function call

FUNCTION OVERLOADING
#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

//Same function with different arguments
int add(int a, int b, int c){
    return a + b + c;
}

int a = 10, b = 20, c = 30;
int main(){
    //Add function
    cout << add(a, b) << endl;
    cout << add(a, b, c) << endl;
}

A function in C++ can be overloaded in three ways:
1: By having different numbers of parameters
EXAMPLE
#include <iostream>
using namespace  std;

int multiply(int a , int b,  int c){
    return a * b * c;
}

int multiply(int a, int b){
    return a * b;
}

int a = 100, b = 200, c = 300;

int main(){
    cout << multiply(a, b, c)<< endl;
    cout << multiply(a, b) << endl;
    return 0;
}

2: By having different types of parameters
EXAMPLE
#include <iostream>
using namespace std;

int add(double a, double b){
    return a + b;
}

int add(int a, int b){
    return a + b;
}

int a = 100.0, b = 200.0;
int main(){
    cout << add(a, b) << endl;
    return 0;
}

3: By both different number and type of parameters
EXAMPLE
#include <iostream>
using namespace std;

int add(int a, double b){
    return a + b;
}
double add(double a, int b, int c){
    return a + (double)b + (double) c;
}

int main(){
    cout << add(10, 2.5) << endl;
    cout << add (5.5, 6, 12) << endl;
    return 0;
}

FUNCTIONS THAT CANNOT BE OVERLOADED
-Function overloading is primarily based on the function name and the types or number of
its parameters

1:  Member function declaration with different access specifier but same name with same parameter-type list
2:  Functions with parameter declarations that differ only in a pointer * verse an [] array
3:  Functions with the same parameter name but different passing methods
4:  Function with the same parameter but different volatile type specifier

* NOTE: C++ does not allow function overloading by changing on return type since
it is not included in the function call

#include <iostream>
using namespace std;

string get(){
  return "String";
}
int get() {
  return 99;
}
int main(){
  string s = get()
  cout << s;

  return 0;
}

FUNCTION OVERLOADING                                        FUNCTION OVERRIDING
1: The same function name                                   Same function with the same parameters
with different parameters                                   but different definition

2: Function signatures are                                  Function signatures appear similar
different

3: Done at compile time                                     Done at runtime

4: They are in the same scope                               Are in different scopes

5: Used to create multiple functions                        To change or extend the behaviour of an inherited function
that perform similar tasks with varied
arguments