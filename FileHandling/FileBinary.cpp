#include <cstring>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string str;
    //open the binary file for reading
    fstream file("file.bin", ios::in|ios::binary);
    //check if the file is open
    if (!file.is_open()){
        cerr << "Error opening file for reading: ";
        return 1;
    }
    //read length of the string
    size_t strLength;
    file.read(reinterpret_cast<char *>(&strLength), sizeof(strLength));

    //Allocate memory for the string
    char *buffer = new char[strLength + 1]; //+1 for null terminator
    file.read(buffer, strLength);
    //Null terminates the string
    buffer[strLength] = '\0';
    str = buffer; //convert buffer to string
    cout << "File data: "<< str;
    delete[] buffer;
    file.close();
    return 0;

}