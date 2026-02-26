# Signals are the interrupts that force an Operating System to stop an ongoing
# task and attend the task for which the interrupt has been sent. These
# interrupts can pause any service in the program
# C++ also offers various signals which it can catch and process in a program
# Each signal has its own default behaviour

# --------------------------------------------------------------------------------------------------------------------#
# SIGNAL NAME                    DESCRIPTION                            ROLE
# SIGABRT                        Abnormal termination triggered         Program terminates
                                 by abort() function
# SIGFPE                         Floating-point exception               Program Terminates
                                 division by zero/overflow
# SIGILL                         Illegal instructions,invalid           Program Terminates
                                 machine instructions
# SIGINT                         Interrupt signal sent when             Program Terminates
                                 CTRL + C is pressed by a user
# SIGSEGV                        Segmentation fault caused by           Program Terminates
                                 accessing memory in an invalid
                                 way
# SIGTERM                        Termination request sent by kill       Program Terminates
                                 or other methods
# SIGKILL                        Kill signal/forceful termination       Program terminates
                                 of a process                           immediately
# SIGQUIT                        Quit signal/cause core dump            Program terminates
                                                                        and generates a core
                                                                        dump
# SIGCHLD                        Child process terminated/stopped       No action(ignored)

# SIGSTOP                        Stop signal that stops the process     Program Pauses execution
                                 It cannot be caught/ignored

# SIGSYS                         Bad system call(invalid system call)   Program terminates

# SIGUSR1                        User-defined Signal 1, available       Program terminates
                                 for app use
# ---------------------------------------------------------------------------------------------------------------------#

# SIGNAL HANDLING IN C++
# Each of the signals in C++ has its default behaviour/ behaviour can be changed
# The process of handling signals manually is referred to as signal handling
# In C++ it is done with the help of a signal handler function which is assigned the
# corresponding signals using signal() functions

# Syntax:
# signal(signal_type, signal_handler);

# #include <iostream>
# using namespace std;

# int main(){
# while(1){
# cout << "Signal Interrupted: " << endl;
#   }
# return 0;
# }

# ------------------------------------------------------------------------------------------------------#

# Raise Signal Manually
# raise() function - allows one to generate signals in the program. It receives the signal type
# and set to the current process

# SYNTAX: raise(signal_type);
# returns 0 on success, non-zero value on failure

# kill() Function
# The kill() function is used to send signals to other processes, not just the current
# process.
# * A signal can be sent to a specific process or a group of processes

# syntax: kill(pid, signal_type);
# pid - process id of the target process to which the signal is to be sent