#include <stdio.h>

int* getDanglingPointer(){
    int localVar = 1000;
    return &localVar; //return address of localVar

}

int main(){
    const int* danglingPointer = getDanglingPointer();
    //undefined behaviour
    printf("Value of dangling pointer: %d\n", *danglingPointer);
    return 0;

}