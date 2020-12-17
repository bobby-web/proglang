#include <stdio.h>

int main (void) {
    int x=10;
    int *y=NULL;
    y=&x;
    printf("The Value OF Variable Y Is: %x\n",y);
    // Access Variable X Value Directly By Calling X
    printf("The Value OF Variable X Is: %d\n",x);

    // Access Variable X Value Indirectly By Calling Pointer *Y
    printf("Variable Y is pointing to: %d",*y);
}