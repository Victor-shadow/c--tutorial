-It is where a function calls itself repeatedly until  a specific base case condition
is met
-A function that calls itself is referred to as a recursive function and each instance of the function
calling itself is a recursive call
-When a recursive function is called, it executes a set of instructions and then calls itself
to execute the same set of instructions with a smaller input
-A recursive function should contain:
1 = Recursive case - the way the recursion call is present in the function
2 = Base condition - A condition that terminates the recursion

//syntax:
return type function(parameters){
   //base case
if(base condition){
   return base value;
 }
  //recursive case
   return recursive expression involving function(modified parameters);
 }
The structure allows a problem to be broken down into simpler versions of themselves

* Each time a function calls itself, the current state is saved in a stack, and the new call begins
Once the base case is reached, the function starts returning back one call at a time

MEMORY MANAGEMENT IN RECURSION
-The data of a recursive function is stored in stack memory as a stack frame
This stack frame is removed once a function returns a value. In recursion
=The function call occurs before returning a value, so stack frames for each recursive calls are placed
on top of the existing stack frames in memory
=Once the topmost function returns a value, its stack frame is removed, and control is passed back to the function just before
it resuming execution after the point where the recursive call was made
=The compiler uses an instruction pointer to keep track of the location to return to after function execution is complete
=Recursion relies on the call stack, making memory management efficient

STACK OVERFLOW
It is a common error associated with recursion which occurs when a function calls itself excessively
Each recursive call requires separate space in stack memory
A large number of recursive calls/ infinite recursion causes exhaustion of the stack memory which may cause the termination of a program

DRAWBACKS OF RECURSION
1: They affect performance since recursive algorithms can be less effective than iterative algorithms particularly
if the data structure is large or there is deep recursion
2: Recursive algorithms consume memory, particularly due to deep recursion or large data structures since each recursive call
creates a stack frame on the call stack, which can quickly add up to significant amount of memory usage
3: The Recursive algorithms can lead to complex code than iterative algorithms hence more difficult to debug if a program uses multiple recursive calls
4: Deep recursions may cause stack overflow errors hence crash the program