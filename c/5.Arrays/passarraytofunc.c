#include <stdio.h>

// Function Add Up All Array Value  

// Function Declaration
int add_up(int *a,int num_elements);

// Main Program Entry
int main(void) {
    // Declare & Define an Array
    int orders[5]={100,220,37,16,98};
    printf("Total Order is %d\n",add_up(orders,5));
}

// Function Definition
// Array Neme Is Pointer To Its First Value Adress
int add_up(int *a,int num_elements) {
    int total, k;
    total=0;
    
    for (k=0;k<num_elements;k++){
        total+=a[k];
    }
    return (total);
}

