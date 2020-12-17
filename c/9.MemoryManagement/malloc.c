#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr;
    ptr=malloc(10*sizeof(*ptr)); //Return An Address of A Block(Array) Of 10 Int Space In Memory
    if (ptr!=NULL) { // Check Wether Allocation Is Sucessfull
        *(ptr+2)=50; // Assign 50 To The THird Int (By Pointer Arithmetic)
    }
    printf("Third Element Is %d\n",*(ptr+2));
    free(ptr); // Release Memory 
    printf(" After Free Ptr, Third Element Is %d",*(ptr+2));
}  