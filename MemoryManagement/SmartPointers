- A smart pointer is a class that wraps a raw pointer and automatically manages
the lifetime of dynamically allocated memory
- It ensures proper resource deallocation by automatically releasing memory
when a pointer goes out of scope, thus preventing memory leaks and dangling pointers
- Smart pointers are defined in the memory header file and include types such as:
 i)std::unique_ptr
 ii)std::shared_ptr
 iii)std::weak_ptr

MEMORY LEAKAGE
#include <iostream>
using namespace std;

int main(){
  while(1){
   int* ptr = new int; //memory is allocated repeatedly using new keyword
   } //allocated memory is never released using delete
   return 0;

}

TYPES OF SMART POINTERS
1: shared_ptr
The std::shared_ptr has an associated control block that keeps track of the reference count for
the managed objects
This reference count is shared among all copies of the shared_ptr instances pointing
to the same object ensuring proper memory management using new keyword and delete

The shared_ptr of type T can be declared as:
std::shared_ptr <T> ptr_name;

Initialization of shared_ptr objects
1: New Pointer
std::shared_ptr <T> ptr(new T());
std::shared_ptr<T> ptr = std::make_shared<T>();

2: Existing Pointer
shared_ptr<T> ptr(pointer)
shared_ptr<T> ptr = make_shared(pointer)

MEMBER METHODS OF SHARED POINTERS
1: reset() - Resets the std::shared_ptr to empty, release ownership of the managed object

2: use_count() - Returns the current reference count *how many std::share_ptr instances
share ownership

3: unique() - Checks if there is only one std::shared_ptr owning the object(reference count = 1)

4: get() - Returns a raw pointer for the managed object

5: swap(shr_ptr2) - Swaps the contents/ownership of two std::shared_ptr instances

SharedPointers allow multiple pointers to share ownership of the same object


2: weak_ptr - provides capability of  pointers with a reduced risk by not increasing the reference_count to prevent circular dependency between pointers referring to the same ownership
- Points at a resource that is owned by another shared_ptr but no ownership
- Create a non-owning reference to the object managed by the shared_ptr
- It is a non-owning smart pointer using with share_ptr to prevent circular
dependencies
-Circular dependency - Two or more objects reference to each other using a shared_ptr
(Neither ObjectA nor ObjectB may be deleted which results in a memory Leak)
*ObjectA has a shared_ptr with ObjectB
*ObjectB has a shared_ptr with ObjectA

SYNTAX:
std::weak_ptr<type> name;
:type - type of data it points to

Member functions of weak pointer
1: reset() - clears the weak_ptr
2: swap() -  Specialization of std:swap(). Swaps objects managed by weak_ptr
3: expired() - Checks if the resource weak_ptr refers to has expired or not
4: lock() - If the resource referred to by the weak_ptr exists, the function returns a shared_ptr
with ownership of that resource otherwise returns default constructed shared_ptr
5: use_count() - How many shared_ptr own a resource


Characteristics
1: Does not increase the reference count
2: Prevents circular dependency(where reference_count never reaches zero)
3: Must be converted using lock() before use
A class in which weak_ptr is declared ensures ownership isn't shared, but pointers
can access objects

Application of weak pointers
1: Preventing circular references: When an object wants to reference another object without owning it
one should use a weak_ptr. This ensures that objects can be safely freed when no longer needed

2: weak_ptr is commonly used in cache_systems. Cache often need to temporarily store references
to objects without preventing the deletion of those objects when no longer in use


3: unique_ptr
A unique pointer is a smart pointer that manages dynamically allocated objects
It is defined in the memory header file

1: A unique_ptr owns the object it points to. Only one unique_ptr can own an object at a time
2: A unique_ptr cannot be copied, it can only be transferred from one unique_ptr to another using move
semantics std::move
3: The unique_ptr automatically deletes an object it points to when it goes out of scope


unique_ptr stores only one pointer at a time
One cannot copy unique_ptr, only transfer ownership of the object to another unique_ptr using
move method

*Only one unique_ptr can own an object at a time
*It is lightweight and efficient

//memory allocation on the heap for an instance of a datatype
Syntax: unique_ptr<A> ptr(new A)
//ptr is initialized and points to the new object created for A and it is the only owner
it manages the lifetime of the object
//When ptr is reset or goes out of scope, memory is automatically deallocated, and A's object is destroyed

Similarly a unique pointer can be created as:
unique_ptr<A> ptr = make_unique<A>();

Unique pointers are used when ownership of a single resource is required

4: auto_ptr
* It was used to automatically delete the managed object when out of scope

#include <iostream>
#include <memory>
using namespace std;

int main(){
 auto_ptr<int> ptr(new int(10));
 cout << *ptr << endl;

 //ownership transfer
 auto_ptr<int> ptr2 = ptr //ownership transfer, original pointer is invalid
 //copy semantics are invalid, unsafe, error prone
 cout << *ptr2;
 return 0;
}

PROBLEMS WITH NORMAL POINTERS
1: Memory leaks: This occurs when memory is repeatedly allocated by a program but never freed
which leads to excessive memory consumption and eventually leads to system crash
2: Wild Pointers:  A pointer that is not initialized with a valid object or an address
3: Dangling Pointers: A pointer which refers to a memory that was deallocated earlier in a program

DIFFERENCE BETWEEN POINTERS AND SMART POINTERS
POINTERS                                                       SMART POINTERS
1)A pointer is a variable that maintains the                   Are classes that wrap a pointer
memory address as well as the data type                        or scoped pointer
(information about the memory location)

2)It is not destroyed in any form                              It destroys itself when it goes
when out of scope                                              out of scope

3)They are manual/labour-centric                               They are automatic/pre-programmed in nature
