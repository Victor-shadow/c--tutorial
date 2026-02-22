#include <stdio.h>

int main(){
    int *danglingPointer;
    //block scope
    {
        int var = 1000;
        danglingPointer = &var;
    }
    printf("Value of the dangling pointer: %d\n", *danglingPointer);
    return 0;

}