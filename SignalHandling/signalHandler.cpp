#include <csignal>
#include <iostream>
using namespace std;

//signal handler function
void signalHandler(const int signum){
    cout << "Interrupt Handler: " << signum << endl;
    //Optionally exit the program after Signal Handle
    exit(signum);
}

int main(){
    //Handle Signal
    signal(SIGINT, signalHandler);
    //loop to wait for the signal
    while (true){
        cout << "Process Ongoing: " << endl;
    }
    return 0;
}