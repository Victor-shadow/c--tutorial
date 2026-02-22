//An inline function in C++ is whose code is expanded at the point of call at compile time
//It reduces function-call overhead

//1: The inline keyword suggests replace a function call with its code to reduce overhead
//2: Inlining is a request not guaranteed by the compiler
//3: The compiler may ignore inlining if a function contains loops, recursion, static variables, switch/goto statements
//a non-void function without return statement

//ROLE OF INLINE FUNCTION
//1: Function calls involve overhead from storing the return address, passing arguments and returning control, which
//can be significant for small, frequently used functions
//2:They improve efficiency by replacing function call by actual code which reduces function overhead
//3: Inline functions are useful  when the function call overhead is higher than function execution time

//Inline functions have their body replace the call at compile time, so no separate symbol is created
//Non-Inlined functions generate a real definition which can cause multiple definition errors if used in
//headers across files
//C++ allows identical inline functions in multiple files, making them safe for files, headers, templates and class definitions


//VIRTUAL FUNCTIONS INLINING
//Virtual functions are resolved at runtime based on actual object type
//Inlining happens at compile time, the compiler replaces the function call with its body
//Virtual functions cannot be inlined due to runtime resolution conflicts

//INLINE VS MACROS
INLINE                                                    MACROS
1: Are functions defined with                             They are preprocessor directives
inline keyword                                            defined using #define

2:Inline functions have scope                             Macros have no scope and type checking
and type checking                                         They are replaced by the preprocessor

3:Arguments are evaluated once                            Arguments may be evaluated multiple times

4:Inline functions are handled by the                     Macros are handled by the preprocessor
compiler

5:They can access private members of a                    Cannot access private members of a class
class

6:A compiler may ignore the inline request                Macros are always substituted into code
if a function is large

7:They can call themselves recursively                    Macros cannot be recursive

ADVANTAGES OF INLINE FUNCTIONS
1:Function call overhead does not occur
2:They allow the compiler to apply context-specific optimizations not possible
3:Small inline functions can reduce code size, which is useful in embedded systems

DISADVANTAGES
1: Excessive Inlining may reduce instruction cache efficiency and enlarge the binary
2: Changes in an inline function requires recompiling all calling locations
3: It increases the number of variables and registers used at  each call
4: Inline functions may not suit embedded systems where code size is more critical than speed