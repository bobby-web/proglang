#include <stdio.h>

// Function Swap Value Between 2 Variable By Pass & Change Real Variable Value Using Pointer  

// Function Declaration
void swap(int *num1,int *num2);

// Main Program Entry
int main(void) {
    // Declare & Define Initial Value
    int x=10;
    int y=20;
    printf("x is %d and y is %d\n",x,y);
    // Swap The Value Using Swap Fucntion 
    // (Pass Variable Address As Argument In Swap Function Parameter)
    swap(&x,&y);
    printf("Swapped\n");
    printf("x is %d and y is %d",x,y);
}

// Function Definition
void swap(int *num1,int *num2) {
    int temp;
    temp=*num1;
    *num1=*num2;
    *num2=temp;
}

