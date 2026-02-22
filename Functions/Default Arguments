-It is a value provided for a parameter in a function declaration that is automatically
assigned by the compiler if no value is provided for those parameters in the function
Default arguments must be on the right side only. Once a default argument is provided, all the arguments
to the right must be default

Syntax
-A default argument is defined by assigning a value to a function parameter on its declaration
return_type name(p1 = v1, p2 = v2);
where v1, v2 are default values for parameters p1 and p2

1: Default Values for parameters should be specified in function Declarations(prototypes)
//Declaration with default argument
void func(int x = 10);
//Definition without default argument
void func(int x){
 cout << "Value" << x<< endl;
}

2: Default arguments cannot be modified in the function definition once defined in the declaration

void func(int x = 10);
//results in an error
void f(int x = 100){
//statements
}

3: Default arguments must be provided from right parameter to left parameter in a function with multiple parameters
If a parameter has a default argument, all parameters to the right must have default values

//Valid
void func(int x, int y = 100);
//Invalid
void func(int x = 10, int y);

4: Function overloading
If a function that contains default arguments is overloaded, it has to be less ambiguous
to the compiler otherwise an error is thrown

//Valid
void func(int x =100, int y =200);
//throws an error as signature is same
void func(int x = 200, int y = 300);

void func(int x);

void func(int x, y);