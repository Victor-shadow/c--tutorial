#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
  const string str = "Animations stored in this file: ";
  //open a binary file for writing
  ofstream file("file.bin", ios::binary);
  //check if file is open
  if (!file){
    cerr << "Error opening the file for writing: ";
    return 1;
  }
  //write the length of the string
  const size_t strLength = str.length();
  file.write(reinterpret_cast<const char*>(&strLength), sizeof(strLength));

  //write the string to the binary file
  file.write(str.c_str(), strLength);
  file.close();
  return 0;
}