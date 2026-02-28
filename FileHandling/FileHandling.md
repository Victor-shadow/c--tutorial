# File handling refers to reading and writing data to a file(.txt .csv) using classes provided by C++ standard library
# Programs run in RAM means that data  exists only while the program is running, when a program
# ends, all data stored in RAM is lost automatically
# File handling allows storing data in secondary memory(like HDD or SSD) so it can be preserved permanently
# and can be saved and accessed even after the program terminates
# For file operations C++ provides file stream classes in the <fstream> header such as ofstream, ifstream, fstream

# Opening a file
# Before reading from or writing to a file, one first needs to open it.
# Opening a file loads it in RAM. We open a file by creating a stream to it using the fstream class that represents
# a file stream 'i.e' stream for input and output for the file
# fstream str("filename.txt", mode);
# str: Name given to the stream
# fileName: name of the file
# mode: represents the way in which one interacts with the file

# File Opening modes
# File Opening modes indicate that the file is opened for reading, writing or appending
# ios::in - File open for reading, If the file does not exist, the open operation fails
# ios::out - File open for writing; the internal stream buffer supports output operations
# ios::binary - Operations are performed in binary mode rather than text
# ios::ate - The output position starts at the end of the file
# ios::app - All output operations happen at the end of the file, append to its existing contents
# ios::trunc - Any contents that existed in the file before it is opened is discarded

# Open a file for reading
# fstream filein("file.txt", ios::in);

# open a file for writing
# fstream fileout("file.txt", ios::out);

# Similarly using the OR Operator(||): fstream str("file.txt", ios::in|ios::out);
# If a file opened in write mode does not exist, a new file is created but in read mode it throws an exception

# File Streams
# ifstream: Stands for input file stream. It is equivalent to open fstream in ios::in mode
# ofstream: Stands for output file stream. It is equivalent to open fstream in ios::out mode

# ifstream filein("file.txt");
# ofstream fileout("file.txt");

# Write to a file
# Data can be written to a file using the insertion operator <<

# include <bits/stdc++.h>
# using namespace std;
# int main(){
# //Open a file
# ofstream file("file.txt");
# file << " Written data to a file: ";
# return 0;
# }

# Read data from a file
# Once a file is opened in the read mode using either fstream or istream, the write operation can be performed using the
# extraction operator >>

# include <bits/stdc++.h>
# using namespace std;
# int main(){
# //open a file in read mode
# ifstream file("file.txt");
# string s;
# //Read string from a file
# file >> s;
# //getline(file, s);
# cout << " Read String: "<< s;
# return 0;
# }

# Closing a file
# Closing the file means closing the associated stream and free the resources that are used
# It is important to close a file, after use to avoid memory leaks, data loss
# In C++ files are closed using the close() member function that is present in all file streams

# Errors in file Handling
# Errors that can occur in file handling include file not found, disk full

# File Open failure
# There can be cases in which a file is not opened due to various reasons such as it does not exist, or the
# program does not have any permission to open it, In such cases use the is_open() member function of the file stream class
# to check whether the file is successfully opened or not

# Failure to read or write data
# A common error is to fail to read or write data for reasons such as incorrect mode, One can validate operations
# after each read/write operations

# End Of File Error
# Trying to read beyond the end of a file can cause the EOF error. This can happen if one does not check for the end of the file
# before reading. One can check for EOF using eof() member function

# Handling Binary files
# In C++ one can also handle Binary files, which store data in raw format
# To read and write binary data, one must use ios::binary flag when creating or opening a binary file

# Writing binary file
# Syntax: ofstream file("file.bin", ios::binary);

# Reading a binary file
# One must open the file in read mode using ios::in

# syntax: fstream fileInstance("file.bin", ios::in | ios::binary);