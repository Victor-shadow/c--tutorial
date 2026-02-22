#include <iostream>
using namespace std;

int main(){
    //buffer on stack
    unsigned char buf[sizeof(int)*2];
    //placement new in buf
    const int *pInt = new (buf) int(3);
    const int *qInt = new (buf + sizeof(int)) int(5);
    const int *pBuf = reinterpret_cast<int*>(buf + sizeof(int));
    const int *qBuf = reinterpret_cast<int*>(buf + sizeof(int));
    cout <<"Buff Address              Int Address"<< endl;
    cout << pBuf << "               "<<pInt << endl;
    cout << qBuf << "                "<<qInt << endl;
    cout << "-----------------------------"<< endl;
    cout << "Is Int                   2Int" << endl;
    cout << *pBuf<< "                     " << *qBuf << endl;

     return 0;
}