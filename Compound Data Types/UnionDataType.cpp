#include <iostream>
using namespace std;

union Programmer{
    int number;
    string language;
    int age;
};

int main(){
    Programmer data;
    data.number = 1;
    cout << data.number << endl;

    data.language = "Kotlin";
    cout << data.language << endl;

    data.age = 10;
    cout << data.age << endl;

    return 0;
}