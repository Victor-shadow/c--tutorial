#include <iostream>
#include <cmath>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;

int main(){
    //using <iostream>
    cout << "This is a standard inbuilt file: " << endl;
    //use <cmath>
    const double square_root = sqrt(25);
    cout << "Square root of 25 is: " << square_root<<endl;
    //use <cstdlib>
    const int randomNumber = rand() % 100;
    cout << "Random number between 1 - 99 is: " << randomNumber << endl;
    //use <cstring>
    char str[20] = "Kotlin";
    char str2[] = "Language";
    strcat(str, str2);
    cout << "Concatenated string: " << str << endl;
    //use <vector>
    const vector<int> vec = {10, 20, 30, 40, 50};
    cout << "Vector Elements: " << endl;
    for (const int i: vec){
        cout << i << " " << endl;
    }
    //use <string>
    const string name = "James Gosling";
    const string language = " invented Java";
    const string fullOutput = name + language;
    cout << fullOutput << endl;

    return 0;



}