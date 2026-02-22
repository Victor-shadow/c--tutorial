-Placement new is a variation of new operator in C++
The new operator:
1) Allocates memory in heap;
2)Constructs an object in allocated memory;

-In placement new, one can pass a pre-allocated memory and construct an
object in pre-allocated memory
-Construction of Objects is performed at a known address

SYNTAX:
new (address) (type) initializer //an address can be specified where a new object of a given
//type can be constructed

Delete memory allocated by placement new
- The operator delete can only delete storage created on the heap
- In the case of memory allocation using placement new operator, it is created
in stack, the compiler knows when to delete it and deallocation of memory is done automatically
-A destructor can be used as well

Placement new operator as a segmentation fault
-The address passed can be a reference or a pointer that refers to a valid memory location
It may show an error when the address is passed as a:
i) Null pointer
ii) void pointer/unless it points to some location

#include <iostream>
using namespace std;

int main(){
//Fine
int i = 10;
int* ptr = &i;
int* var = new(ptr)int(10);

//invalid as ip may not be a valid address
int *ip;
int *i2 = new(ip)int(10);

//Valid
void* ptr = &i;
int *ptr3 = new(ptr)int(100);

//Incorrect as x is not an address
int x;
int *i5 = new(x)int(1000);

return 0;
}


Advantages of placement new over new
1: The address of the memory allocation is known beforehand
2: Useful when building a memory pool, a garbage collector or simply
when performance and exception safety is paramount
3: There is no danger of allocation failure since memory has already been allocated
and constructing an object on pre-allocated buffer takes less time
4: Useful in an environment of limited resources

------------------------------------------------------------------------------------------------------------------------
std::make_unique in C++
-std::make_unique is an utility function in C++
It is used to create a unique_ptr object, which is a smart pointer that manages the lifetime
of dynamically allocated objects
It is defined inside a memory <header> file

Syntax:
std::make_unique<object_type> (arguments);
Parameters:
1: object_type - Type of Object to be created
2: arguments - It is the argument list for the constructor of object type

The function returns a unique_ptr of type object_type
This allows the object to be automatically destroyed when it goes out of scope

Advantages of std::make_unique function
1: Unlike new, make_unique is exception safe
2: No cleanup is necessary, if make_unique is not evaluated
