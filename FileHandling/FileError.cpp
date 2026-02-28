#include <fstream>
#include <iostream>
using namespace std;

int main(){
    fstream file("FileError.txt", ios::out);

    if (!file.is_open()){
        cerr << "Error reading file: " << endl;
        return 1;
    }
    string line;
    if (!getline(file, line)){
        cerr << "Error. Failed to read data: " << endl;
    }
    file.close();
    return 0;
}