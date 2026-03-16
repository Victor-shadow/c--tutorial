# The stack container follows the Last In First Out order of insertion and deletion. It means that the most recently inserted element is removed first and the first inserted element is removed last.
# This is done by inserting and deleting elements at only one end of the stack which is generally called the top of the stack

# SYNTAX
# Stack is defined as std::stack class template inside the <stack> header file
# stack<T> st;
# T: Data type(int char) of elements of the stack
# std: Name assigned to the stack

# Basic Operations
# Inserting Elements
# In a stack new elements can be inserted at the top of the stack using the push() method

# Access Elements
# Only the top Elements of the stack can be accessed using top() method
# peek() method is used to view the topmost element of the stack not print it

# Delete Elements
# In a stack, only the top element in the stack can be deleted using the pop() method in one operation

# Empty stack
# This checks whether the stack is empty. It returns true if the stack has no elements, otherwise it returns false

# Size of the stack
# The size() function in a stack returns the number of elements currently in the stack. It helps to determine how many items are stored without modification of the stack

# Pseudo transversal
# A stack cannot be directly traversed, but by creating a copy and repeatedly accessing and removing the top element, one can traverse it without modification of the original 

# --------------------------------------------------------------------------------------------------#
# STACK OPERATIONS
# -----------------------------------------------------------------------------------------------#
# The stack::push() and stack::pop() method in a stack container is used to insert and delete the element from the top of the stack. They are members of the function of std::stack container defined inside the <stack> header file

# stack::push()
# The stack::push() function is used to insert and push() an element at the top of the stack container
# This increases the size of the stack container by 1
# syntax: st.push(val);

# st - name of the stack
# (Parameters)val - Value to be pushed or inserted
# The function does not return any value

# stack::pop()
# The stack::pop() function is used to remove or 'pop' the element from the top of the stack
# The most recently inserted element will be removed first. This decreases the size of the stack container by 1
# syntax: st.pop()
# Parameter: This function does not take any parameter
# This function does not return any value

# stack::top()
# In C++, the std::stack::top() method is used to find the top element of the std::stack container. 
# It is a member function of the std::stack class defined inside <stack> header file

# syntax: st.top()
# where st is the name of the std::stack
# Parameter: The function does not take any parameter
# The function returns the top element of the stack container
# If the stack is empty the behaviour is undefined
# ------------------------------------------------------------------------------------------------#



