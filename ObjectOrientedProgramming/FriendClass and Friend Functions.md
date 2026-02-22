- In C++ friend functions and friend classes allow certain functions or classes to access the private and protected members of another class

FRIEND CLASS IN C++
- A friend class can access private and protected members of other classes in which it is declared as a friend
- A friend class can be declared in C++ using the friend keyword
- NOTE: One can declare a friend class or function anywhere in the base class body whether
it is private, public or protected

FRIEND FUNCTION IN C++
- A friend function can be granted special access to private and protected members of a class in C++
- They are not member functions of the class but can access and modify/manipulate the private and protected members of that class for they are declared as friends
- A friend function can be:
- i: A global function
- ii: A member function of another class

NOTE: Any global function can be declared as a friend function, the keyword friend is only placed in the function declaration of the friend function and not in the function call or definition

- Member function of Another class as a Friend function
- One can also declare a member function of another class as a friend function in C++
- forward declaration of the class is needed, if one wants to make a member function of another class a friend inside that class

- The Order in which the friend function is defined of another class is important and should be taken care of
- One has to define both the classes before function definition

------------------------------------------------------------------------------------------
- FRIEND FUNCTIONS
------------------------------------------------------------------------------------------
- ADVANTAGES                                       DISADVANTAGES
1: Access private and protected                       Violates data hiding by exposing
   members without inheritance                        private members

2: Enables controlled data sharing                    Breaks encapsulation when overused
   between classes

3: Useful for operator overloading                    Does not support runtime
   flexibility                                        polymorphism

4: Can be declared in any access                      Friendship is not inherited
   section of a class                                 in derived classes

------------------------------------------------------------------------------------------