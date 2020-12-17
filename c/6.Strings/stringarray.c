#include <stdio.h>
int main (void) {
    // Declare Array of Array(String)
//  char trip[3][15]= // Explicitly Using 2 Dimensional Matrix
    char *trip[ ] = { // With Pointer 
        "suitcase",
        "passport",
        "ticket"
    };
    printf("please bring the following:\n");
    for (int i=0;i<3;i++){
        printf("%s\n",trip[i]);
    }
}