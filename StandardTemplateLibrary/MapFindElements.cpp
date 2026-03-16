#include <iostream>
#include <map>
using namespace std;

int main(){
    map<int, string> m = {{1, "Spring Boot"}, {2, "Selenium"}, {3, "AWS"}, {4, "ReactJS"}};
    //find the element with a key of 2
    auto it = m.find(2);
    if(it != m.end())
    cout << it->first << " " << it->second;
    else cout << "Key not Found! " << endl;
    return 0;
}