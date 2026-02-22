#include <iostream>
using namespace std;

int i = 0;
int main(){
    while (i < 10){
        i++;
        if (i == 5){
            continue;
        }
       else{
          cout << i << " ";
      }
    }
    return 0;
}