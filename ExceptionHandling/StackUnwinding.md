# Stack unwinding is the process of removing function call frames from the call stack at runtime
# During this process local objects are destroyed in the reverse order of creation
# Stack unwinding happens:
# 1: Normally, when a function returns
# 2: During Exception handling, when an exception is thrown and control transfers to a matching case block
# When an exception is not handled in the current function, the runtime
# 1: Exits the current function
# 2: Destroys all local objects
# 3: Moves up the call stack searching for a matching catch block
# 4: Terminates the program if no handler is found

# Destructors and Stack Unwinding
# All local(automatic) objects are destroyed during stack unwinding
# Destructors are called in reverse order of creation
# This guarantees cleanup of stack-based resources

# Dynamic Resources and Stack unwinding
# Stack unwinding does not automatically free heap memory allocated using new unless it is managed by an object whose destructor handles cleanup

# How to safely handle Resources during Stack Unwinding
# 1: Use Resource Acquisition is Initialization
# 2: Prefer smart pointers(unique_ptr, shared_ptr) over raw pointers
# 3: Use standard containers like vectors, maps, set instead of manual memory management
# 4: Avoid new and delete in exception prone code
# 5: Let destructors handle cleanup automatically

# Stack unwinding always removes stack frames when exceptions propagate
# Local objects are always cleaned up safely
# Heap memory must be managed using RAII Techniques
# Smart pointers make exception-safe code easier and more reliable

