#include <stdio.h>

// Function Declaration
void* square (const void* num); // void* function allow any return type and void* parameter allow any arguments type also use const type to use data passed in parameter without changing it  

// Program Entry
int main(void) {
    int x, sq_int;
    x=6;
    // Pass Adress Of X to Function Void Pointer Parameter
    sq_int=square(&x);
    printf("%d squared is %d\n",x,sq_int);
}

// Function Definition
void* square (const void* num) {
    int result;
    result=(*(int *)num) *(*(int *)num);
    return result;
}