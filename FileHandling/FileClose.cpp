#include <bits/stdc++.h>
using namespace std;

int main(){
    //open a file in read mode
    ifstream file("file.txt");
    string s;
    //read string from the file
    getline(file, s);
    cout << "Read String: " << s;
    //close the file
    file.close();
    return 0;

}

