#include <csignal>
#include <iostream>
using namespace std;

//signal handler function
void signalHandler(const int signum){
    cout << "Interrupt Handler: " << signum << endl;
    //Optionally exit the program after handle
    exit(signum);
}

int main(){
    //Handle signal
    signal(SIGINT,signalHandler);
    //raise a signal
    raise(SIGINT);
    return 0;

}