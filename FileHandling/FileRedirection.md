# In C++, input and output are performed using streams, which are sequences of bytes
# Common stream objects include cin(reads input from the keyboard) cout, (display output on the screen)
# Each stream has a buffer, which temporarily stores data to make input/output faster
# I/O redirection means changing where the program gets input from or send output to
# The function ios::rdbuf() is used to redirect streams to different sources or destinations

#                  Data flow in cin                                Data flow in cout
#                  Keyboard                                        cout
#                  Operating System(OS)                            Buffer
#                  stdin                                           stdout
#                  Buffer                                          Operating System
#                  cin                                             Console screen

# A buffer is a temporary storage area in memory(RAM) used to hold data while it has been moved from one place to another

# Internal working of the ios::rdbuf()
# The rdbuf() function manipulates the internal buffer of the stream object(cout, cin)
# A backup of the original stream buffer(cout_buffer is created)
# The stream buffer of the desired output(file) is assigned to the stream(cout)
# After the redirection is done,the output is written to the file instead of the console
# After the task is completed, the stream buffer is reset back to the original buffer
# and output is returned to the console

# Redirection with freopen
#  It is a method to achieve file I/O redirection in C++
# Syntax: freopen("fileName", "mode", stream/stdcout);
# fileName - represents the path to the file to be redirected to or from
# mode: Specify the file access mode like read mode(r)
# stream: A pointer to an existing standard C++ file stream to be redirected
# freopen returns a pointer to the newly reopened file stream if successful otherwise return null

# Need for IO Redirection
# 1: Automation: Runs programs repeatedly with the same input data without manually typing it each time. This
# is essential for testing and batch processing
# 2: Data pipelines: Connect the output of one program as the input of another program, creating powerful
# processing workflows in scripting and command line arguments
# 3: Testing and debugging: Easily test a program with various input scenarios by simply changing the input files
# Capture program output to files for detailed analysis and comparison with expected results
# 4: Logging and Monitoring: Redirect program output, especially error streams to log files. This creates a record
# of program activity useful for debugging, auditing and system monitoring
# 5: Clean console output: Keep the console clear of program output when one wants to examine results later in a file or when
# running programs in the background.


# Difference between ios::rdbuf() and freeopen()

# ios::rdbuf()                                                    freeopen()
# 1: Used to get or set the stream buffer                         Used to associate an existing file
# of an istream or ostream                                        with a stream,typically redirect standard input/output

# 2:  Allows changing the underlying buffer                       Redirect a stream to a different 
# of a stream to redirect input/output                            file or device (stdin, stderr,stdout)
# to a different buffer

# 3: Primarily used for low-level control over                   Typically used to redirect standard streams
# stream buffering and to change stream internal                 (stdin, stderr, stdout) to files or other streams
# buffer

# 4: Only affects the internal buffer of the                     Changes the stream's file descriptor
# stream/does not change the file descriptor                     and redirect input/output to the specified
# or stream's properties                                         file

# 5: Allow direct control of buffer mechanisms                   No direct control over buffering, just redirects input
#  switch to a different buffer                                  and output stream


