#include <bits/stdc++.h>
using namespace std;

int main(){
    ifstream file("error.txt");
    if (!file.is_open()){
        cerr<< "Unable to open file: " << endl;
        return 1;
    }
    string line;
    while (getline(file, line)){
        cout << line << endl;

    }
    if (file.eof()){
        cout << "Reached end of file: " << endl;
    } else{
        cout << "Error reading failed: " << endl;
    }
    file.close();
    return 0;
}