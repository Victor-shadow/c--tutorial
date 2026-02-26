#include <iostream>
#include <csignal>
#include <unistd.h>
using namespace std;

void handle_signal(const int signum){
    cout << "Received Signal: "<< signum <<  endl;
}

int main(){
    signal(SIGINT, handle_signal);
    //Get the current process id
    pid_t pid = getpid();
    //Generate signal using kill
    kill(pid, SIGINT);
    return 0;
}