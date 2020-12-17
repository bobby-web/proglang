// Use to Refer To Any Address Type
#include <stdio.h>

int main (void) {
    int x=33;
    float y=12.4;
    char c='a';
    void *ptr;

    // Use Type Cast (ie: (int *)) Before Dereferencing (*) To Set What Return Type Will Be
    ptr=&x; // Asign ptr to x value with int type
    printf("void ptr points to %d\n",*((int *)ptr));
    ptr=&y; // Asign ptr to y value with float type
    printf("void ptr points to %f\n",*((float *)ptr));
    ptr=&c; // Asign ptr to c value with char type
    printf("void ptr points to %c\n",*((char *)ptr));
}