#include <stdio.h>
#define PI 3.14 // Define A Constant
#define AREA(r) (PI*(r)*(r)) // Define A Function

int main (void) {
    float radius =2;
    printf("%3.2f\n",PI);
    printf("Area is %5.2f\n",AREA(radius));
    printf("Area with radius +1: %5.2f\n",AREA(radius+1));
}