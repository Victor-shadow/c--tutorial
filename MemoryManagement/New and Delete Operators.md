- In C++, stack memory is automatically allocated for variables at compile time
and has a fixed size
-For greater control and flexibility,dynamic memory allocation on the heap is used
allowing manual allocation with new and manual deallocation with delete
-It allows the program to request memory from the heap at runtime using the new
operator and release it using the delete operator
*It is useful when the size of the memory is not known at compile time such
as for variable-sized array or dynamic data structures
* The new operator in C++ allocates memory from the free store(a portion of the heap)
If enough memory is available, it initializes the memory with a default value based
on its type and returns the address of the allocated memory

* NEW OPERATOR
#include <iostream>
#include <memory>
using namespace std;

int main(){
//allocate and initialize memory
  int *ptr = new int(6);
  //print the value
  cout << *ptr << endl;
  //print the address of the memory block
  cout << ptr << endl;
  return 0;
}

//ALLOCATE BLOCK OF MEMORY
* A new operator is also used to dynamically allocate a block(an array) of memory as:
new data_type[n]; //allocate memory for n elements of a given data_type

*Lack of enough memory during runtime
- If enough memory is not available in the heap to allocate, a new request indicates failure
by throwing an exception of type std::bad_alloc unless new(nothrow) is used
which returns a nullptr pointer

int *p = new(nothrow) int;
  if(!p){
  cout << "Memory allocation failed\n";
 }

delete Operator
In C++ the delete operator is used to release dynamically allocated memory
It releases memory previously allocated with new

delete ptr//pointer to the dynamically allocated memory

*free dynamically allocated memory for an array
delete[] arr;

EXAMPLE:
#include <iostream>
using namespace std;

int main(){
    int *ptr = NULL;
    //Request memory for an integer variable
    ptr = new int(10);
    if (!ptr){
        cout << "Memory allocation failed: " << endl;
        exit(0);
    }
    cout << "value of *ptr: " << *ptr << endl;
    //free the value once it is used
    delete ptr;
    //Allocate an array
    ptr = new int[3];
    ptr[2] = 11;
    ptr[3] = 22;
    ptr[4] = 33;

    cout << "Array: " << endl;
    for (int i = 0; i < 5; i++){
        cout << ptr[i] << " ";
        //deallocate when done
        delete [] ptr;
        return 0;
    }
}

ERRORS ASSOCIATED WITH DYNAMIC MEMORY
1: Memory Leak - It is a situation where the memory for a particular task remains in use/allocated
even after it is no longer needed
If the address of the memory is lost, then it remains allocated till the program runs
*Use of smart pointers whenever possible since they deallocate memory when the variable goes out of scope.

2: Dangling pointers - They are created when the memory address pointed to by a pointer
is still accessible after it has been allocated
*Initialize pointers with nullptr, assign nullptr again after deallocation

3: Double Deletion - When delete is called on the same memory twice, it causes crashes/corrupt programs
*Assign null ptr to the memory pointer when deallocated

4: Mix of new/delete with malloc()/free()
C++ supports the C style dynamic memory allocation using malloc(), calloc(), free()
The functions are incompatible
* memory cannot be allocated from the heap using new and deleted using free()

PLACEMENT NEW - separates allocation of memory/ construction of objects from memory
-One can pass a pre-allocated memory block and construct an object in the memory
-It is a variant of the new operator
The new operator both allocates memory and constructs an object in that memory