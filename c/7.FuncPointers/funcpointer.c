#include <stdio.h>
// Function Declaration 
void say_hello(int num_times);

// Main Program Entry
int main (void) {
    void (*funptr)(int);    // Function Pointer Declaration (Use bracket'()' for function pointer name)
    funptr=say_hello;       // Function Pointer Definition (point *funptr by Assign funptr value to say_hello function address)
    funptr(3);              // FUnction Pointer Call
}


// Function Definition
void say_hello(int num_times) {
    int k;
    for (k=0;k<num_times;k++)   {
        printf("Hello\n");
    }
}