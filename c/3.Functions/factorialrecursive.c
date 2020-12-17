#include <stdio.h>

// Factorial Function Using Recursive

// Function Declaration
int factorial(int num);

// Main Program Entrance
int main (void) {
    int x;
    printf("Enter A Number: ");
    scanf("%d",&x);
    printf("The Factorial of %d is %d",x,factorial(x));
}

// Function Definition
int factorial (int num) {
    int y;
    // Base Case Of Recursive
    if (num==1)
        return(1);
    else
    // Recursive 
    y=num*factorial(num-1);
        return(y);
}