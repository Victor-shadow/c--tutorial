#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m = {{1, "Java"}, {2, "Kotlin"}, {3, "C++"}, {4, "C#"}};
    //Traverse using Iterators
    //it = iterator = pointer to map elements
    for(auto it = m.begin(); it != m.end(); ++it)
    //access the key of the current pair
    //access the value associated with the key
      cout << it->first << " " << it-> second << endl;
      return 0;
}