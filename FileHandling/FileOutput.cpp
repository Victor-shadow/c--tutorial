#include <bits/stdc++.h>
using namespace std;


int main(){
//create an output stream to a file
    ofstream file; //creates an output file stream object
    file.open(R"(C:\Users\victo\CLionProjects\c--tutorial\FileHandling\file.txt)");
   //store default cout buffer
    streambuf *cout_buffer = cout.rdbuf(); //save the address of the console output buffer
    //get the stream buffer of the file
    streambuf *file_buffer = file.rdbuf();
    //redirect cout buffer to the file by setting it to file's buffer
    cout.rdbuf(file_buffer);
    cout << "This line is written to the file.txt: " << endl;
    //flush to ensure all data is written
    cout.flush();
    //redirect cout back to its default buffer
    cout.rdbuf(cout_buffer);
    //close the file stream
    file.close();
    return 0;


}