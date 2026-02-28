#include <bits/stdc++.h>
using namespace std;

int main(){
    //Redirect standard output(stdout) to file.txt in write mode
    if (freopen("file.txt", "w", stdout) == nullptr){
        cerr << "Error redirecting std cout";
    }
    //output write file in file.txt
    cout << "This output will be written in file.txt: " << endl;
    cout << "Another line to the file: " << endl;
    return 0;
}