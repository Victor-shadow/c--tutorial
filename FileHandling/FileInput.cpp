#include <bits/stdc++.h>
using namespace std;

int main(){
    fstream file;
    file.open("file.txt", ios::in);
    string line;
    //backup the original stream buf of the file
    streambuf *cin_buffer = cin.rdbuf();
    //stream buf of the file
    streambuf *file_buffer = file.rdbuf();
    //redirect cin to the file
    cin.rdbuf(file_buffer);
    //cin reads file.txt instead of keyboard
    getline(cin, line);
    //print file line
    cout << line << endl;
    cin.rdbuf(cin_buffer);
    file.close();
    return 0;

}