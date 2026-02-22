- In C++, Memory leak occurs when memory allocated for a particular task remains
allocated even if it is no longer needed
- This leads to wastage of memory because it is unavailable for other tasks till the
end of the program

- REASONS WHY MEMORY LEAKS OCCUR IN C++
In C++ there is no automatic garbage collector. It means that any memory that is dynamically allocated
by the programmer needs to be freed after its usage manually by the programmer
If a programmer forgets to free the memory, it will not be deallocated till the program lives and will
be unavailable to other processes
-It is referred to as a memory leak

Memory leakage program
#include <stdlib.h>
void f(){
//Allocate memory for 10 integers in an array
int *ptr = new int[10];
  //return without free memory
  return;
 }
 int main(){

 }

CONSEQUENCES OF MEMORY LEAK
1: Reduced Performance: Leaked memory is not available for other parts of the program or other
programs running in the computer. If memory leak is significant, programs/systems
can slow down due to lack of available memory

2: Program Crashes: If a program keeps leaking memory, it may eventually use up the available RAM
which may cause the program to become unstable/ start behave erratically/crash

3: Depletion of Resources: Memory is a limited resource

4: Long programs suffer the most since short running programs leak memory for a short time

* Detecting Memory Leaks in C++ can be challenging due to lack of automatic memory management
 can be managed through use of tools like Valgrind, AddressSanitizer


MINIMIZE MEMORY LEAKS IN C++
1: Use of smart pointers wherever possible and avoid raw pointers. They automatically manage/deallocate memory
when the pointers/objects goes out of scope
2: Use of Constructors and Destructors for complex memory allocation, wrap resources in a class and manually
deallocate memory using destructors which will be automatically called when
an object goes out of scope

