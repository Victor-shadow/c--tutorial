# Multithreading is where a program is divided into smaller units of execution known
# as threads
# Each thread runs independently and share resources like memory allowing tasks to 
# be performed simultaneously. This helps improve performance by utilizing multiple CPU cores
# effectively
# Implemented by the <thread> header file

# Importance of multithreading
# Leverages multiple CPU cores to execute tasks in parallel, reducing overall execution time
# Keeps applications responsive by running background operations without blocking the main thread
# Makes it easier to handle multiple/large workloads or multiple simultaneous operations such as in servers
# or real time systems

# Operations on threads:
# The <thread> header file in C++ provides a simple and powerful interface for managing threads

# 1: Create a thread
# The std::thread class represents the thread
# Threading an instance of this class will create a thread with the given callable as its task

# thread thread_name(callable);
# thread_name - object of thread class
# callable - callable object such as a function pointer, function object

# 2: Joining a thread
# Before joining a thread it is preferred to check if the thread can be joined using joinable() method
# The joinable() method checks whether the thread is in a valid state for those operations or not
# thread_name.joinable(); //returns true if the thread can be joined or else false

# Joining two threads in C++ blocks the current thread until the thread associated with the std::thread object
# finishes execution. To join two threads in C++ use the join() function which is called
# inside the body of the thread function to which the specified thread is to be joined
# thread_name.join(); //throws std::system_error if the thread is not joinable

# 3: Detaching a thread
# A joined thread can be detached from the calling thread using the detach() member function
# of the std::thread class
# When a thread is detached, it runs independently in the background/other thread do not wait for it to finish

# thread_name.detach();

# 4: Getting Thread ID
# In Multithreading in C++ each thread has a unique ID which can be obtained using the get_id() function
# thread_name.get_id(); //returns an object that represents the thread ID

# CALLABLES IN MULTITHREADING
# A callable(function, lambda, function object) is passed to a thread. The callable is executed in parallel by the thread when
# it starts, 
# *thread t(func) - creates a thread that runs the function func
# parameters can also be passed along the callable: thread t(func, paramA, paramB)
# In C++ a callable can be divided into:
# 1: Function - It can be a callable object passed to the thread constructor for initializing a thread

# 2: Lambda Expression - Thread objects can also use lambda expressions as a callable/functions which can be
# passed directly inside the thread object

# 3: Function Object - They can also be used for a thread as a callable
# To make functors callable, the parentheses() operator needs to be overloaded

# 4: Non-Static or Static Member functions - Threads can also be used by using the non-static/static member functions
# of a class. For non-static member functions objects need to be created

# ----------------------------------------------------------------------------------------------------------------------#
# THREAD MANAGEMENT
# In C++ the thread library, various functions are defined to manage threads that can be reused to perform
# multiple tasks

# Classes/Methods                                             Definition
# join()                                                      It ensures the calling threads
                                                              wait for the specific thread to
                                                              complete its execution
# detach()                                                    Allows the thread to run independently
                                                              of the main thread/does not need to wait

# mutex()                                                     A mutex is used to protect shared 
                                                              resources between threads and prevent
                                                              data races/ensure synchronization

# lock_guard()                                                A wrapper for mutexes that automatically
                                                              locks and unlocks mutexes in a scoped block

# condition_variable()                                        Used to synchronize threads/allowing one thread
                                                              to wait for a condition before proceeding
# atomic()                                                    Manage shared variables between threads in a thread
                                                              safe manner without using locks

# sleep_for()                                                 Pause the execution of the current thread for
                                                              a specified duration

# sleep_until()                                               Pauses the execution of the current thread until
                                                              a specified time point is reached

# hardware_concurrency()                                      Returns the number of hardware threads available for use
                                                              optimize use of system resources

# get_id()                                                    Retrieves the unique ID of the current
                                                              thread useful for debugging purposes/logging

# ---------------------------------------------------------------------------------------------------------------------#

# PROBLEMS WITH MULTITHREADING
# Deadlock: A deadlock occurs when two or more threads are blocked forever because they are each waiting for
# shared resources that the other threads hold. This creates a cycle of waiting/none of the threads can proceed

# Race Condition: It occurs when two or more threads access shared resources at the same time/ and at least
# one of them modifies the resources. Since the threads compete to read and write the data
# the final result depends on the order in which the thread executes leading to unpredictable/incorrect results

# Starvation: It occurs when a thread is unable to continuously access shared resources because other threads keep
# getting priority preventing execution/making of progress

# In multithreading, synchronization is the way to control the access of multiple threads to shared resources
# ensuring that only one thread can access a resource at a time to prevent data corruption/inconsistencies
# This is typically done using tools such as mutexes, locks, conditional variables

# Context switching in multithreading is a process where the CPU stops the execution of one thread and begins
# executing another within the same process. In this process the CPU stores the state of the running thread so that
# it can be restored later once the CPU finishes execution of the other thread