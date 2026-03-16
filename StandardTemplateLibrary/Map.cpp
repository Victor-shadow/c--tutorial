#include <iostream>
#include <map>
using namespace std;

int main(){
    //Create an empty map
    map<int, string> mp;
    //Initialize a map with a list
    map<int, string> m2 = {{1, "Java"}, {2, "Kotlin"}, {3, "Spring"}};

    for(auto&p : m2){ //iterate through the map using a ranged base for-loop and prints each key along with its value
        cout << p.first << " " <<  p.second << endl;
    }
    return 0;
}