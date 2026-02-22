//In C++, data is read and written using streams which are sequences of bytes
//Input Stream: Data flows from a Device(like the keyboard) to the computer's memory
//Output Stream: Data flows from Memory to an Output Device(Screen)
//Streams are defined in <iostream> header file
//Stream Objects include: - "cin" for taking input and "cout" for displaying
//output

//STANDARD OUTPUT STREAM - cout
//cout is an instance of the ostream class used to display output on the screen
//Data is sent to cout using insertion operator <<

//STANDARD INPUT STREAM -cin
//cin is an instance istream class used to read input from the keyboard
//The extraction operator >> is used with cin to get data from the input stream

//Unbuffered Standard Error Stream - cerr
//cer is the standard error stream used to display error messages. It is an instance of the ostream class
//It is an unbuffered output stream used to display error or warning messages immediately, ensuring that they appear instantly
//without buffer delays

//Buffered Standard Error Stream - clog
//clog is the standard logging stream used to display error messages or log messages
//It is an instance of the ostream class
//Messages are first stored in a buffer and displayed only when the buffer is full or explicitly flushed using
//the flush() method(Buffered output)
//Useful for logging messages that do not appear immediately in the screen
//output from clog may be delayed due to buffering

