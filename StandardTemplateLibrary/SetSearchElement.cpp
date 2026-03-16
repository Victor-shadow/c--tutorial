#include <iostream>
#include <set>
using namespace std;

int main(){
    set<string> s = {"Java", "Kotlin", "Spring"};
   //access elements using find
   auto it = s.find("Kotlin");
   if(it != s.end())
     cout << "Element found: " << *it << endl;
     //Access elements using count()
     if(s.count("Spring")){
        cout << "2 Elements exist in the set";
     }
     //Access all elements by traversal
     cout  << "All Elements";
     for(auto x: s){
        cout << x << " ";
        cout << endl;
     }
     return 0;

}