#include <iostream>
using namespace std;

//Define enum class
enum class Day{
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){
    //Initialize the enum variable
    auto today = Day::Sunday;
    //print enum
    cout << static_cast<int>(today) << endl;
    return 0;

}