#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream file("nonExistentFile.txt", ios::in);
    //check if file is opened
    if (!file.is_open()){
        cerr << "Error unable to open file: " << endl;
        return 1;
    }
    file.close();
    return 0;
}