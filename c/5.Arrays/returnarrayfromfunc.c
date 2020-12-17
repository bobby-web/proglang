#include <stdio.h>

// Function Add Up All Array Value  

// Function Declaration
int *get_evens();

// Main Program Entry
int main(void) {
    // Declare & Define Initial Value
    int *a;
    int k;
    a=get_evens(); // Get First 5 Even Numbers
    for (k=0;k<5;k++) {
        printf("%d\n",a[k]);
    }
}

// Function Definition
int *get_evens() {
    static int nums[5];
    int k;
    int evens=0;
    
    for (k=0;k<5;k++){
        nums[k]=evens+=2;
    }
    return (nums);
}

