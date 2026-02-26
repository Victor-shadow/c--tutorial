# Namespace in C++  is like a special container or a label that holds a group of names like variables, functions and classes to avoid confusion when the same name is used in different parts of the program

# SYNTAX
# include <iostream>
# using namespace std;

# namespace TypeA{
#    //function
#    returnType functionNameA(){
#    std::cout << "Namespace A: " << std::endl;
#     }
# }

#  namespace TypeB{
#  //function
#  returnType functionNameB(){
#  std::cout << "Namespace B: " << std::endl;
#     }
# }

# int main(){
# //Use the scope resolution operator(::) to access the function inside Namespace A
# TypeA::functionNameA();
# TypeB::functionNameB();
# return 0;
# }

# Namespace using Directive
# One can also avoid prepending of namespaces with the using namespace directive. This directive tells the compiler that the subsequent code is making use of names in the specified namespace

# SYNTAX
# include <iostream>
#
# namespace first_directive{
#  returnType functionNameA(){
#   std::cout << "Inside first namespace: " << std::endl; 
#    }
# }

# using namespace first_directive;

# int main(){
# //call function
# functionNameA();
# }

# Names introduced in a using directive obey normal scope rules. The name is visible from the point of the using directive to the end of the scope in which the scope is found
# Entities with the same name defined in an outer scope are hidden

# -----------------------------------------------------------------------------------------------------------------#
# GLOBAL NAMESPACE
# The global namespace is the default namespace where all functions, variables, classes are not
# explicitly declared inside any namespace(Everything outside the namespace)

# #include<iostream>
# using namespace std;
# returnType variable = value;

# int main(){
#  returnType variable2 = value2;
#  //Access global namespace
#  cout << ::variable << endl;
#  cout << variable2;
#  return 0;  
# }
# -----------------------------------------------------------------------------------------------------------------#

# -----------------------------------------------------------------------------------------------------------------#
# EXTENDING NAMESPACE
# Addition of more features like functions, variables, classes to existing namespaces

# include <iostream>
# using namespace std;

# namespace Nmsp{
#  returnType function(){
#  cout << "The namespace can be extended: " << endl;
# }
# }
# ------------------------------------------------------------------------------------------------------------------#

# ----------------------------------------------------------------------------------------------------------------#
# INLINE NAMESPACES
# An inline namespace is a type of namespace where its members are accessible directly without using the
# namespace name;

# include <iostream>
# using namespace std;

# inline namespace inline_name{
#   returnType functionName(){
#    cout << "Inside inline space";
#     }
# } 

# int main(){
#  functionName(); //direct access 
#  return 0;
# }

# In C++, the resolution of namespace variables is hierarchical
# Inline namespaces uses the optional keyword inline in its original namespace
# This allows identifiers of the nested inline namespace to behave as if they are the identifier
# of the parent/enclosing namespace

# Syntax: inline namespace namespace_name;
# The inline specifier makes the declaration from the nested namespace appear exactly as if they had been
# declared in the enclosing/parent namespace

# "Using" directive
# A using-directive means that the names of inline namespace is implicitly inserted in the enclosing namespace
# SYNTAX
# using namespace name
# -----------------------------------------------------------------------------------------------------------------#


# ----------------------------------------------------------------------------------------------------------------#
# ANONYMOUS NAMESPACES
# Are namespaces without names
# It ensures that entities in the unnamed namespace are limited to that files

# #include<iostream>
# using namespace std;

# //Anonymous namespace
# namespace {
#  returnType variable = value;
# }

#  int main(){
#  //access the Anonymous namespace variable
#  cout << variable;
#  return 0;
# }
# ---------------------------------------------------------------------------------------------

# ------------------------------------------------------------------------------------------
#
# DIFFERENCE BETWEEN NAMESPACES AND CLASSES
  NAMESPACE                                                     classes                                                                                                                                  
- 1: It is used to organize code and prevent                    Used to define and create objects and encapsulate      
-     name collisions in large projects                         data and members


- 2: It only provides scope/no encapsulation                    Encapsulates both data members and methods into objects     
    of data

- 3: Does not have access modifiers(public, private)            Has access modifiers(public, private, protected) to control
                                                                visibility of members\

- 4: Cannot be inherited                                        Can be inherited to create subclasses   

- 5: A namespace is not instantiated/ used to group             A class is instantiated to create objects
-    entities

- 6: Does not directly consume memory; provides scope           Consumes memory as objects are created in memory/
      for identifiers                                           from classes
-   

- 7: No constructors/destructors                                Has constructors and destructors to initialize
                                                                and destroy objects
# --------------------------------------------------------------------------------------------------------------------#

                                            
  