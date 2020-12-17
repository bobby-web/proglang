#include <stdio.h>
// Print All Array Value
int main(void) {  
    int a[5]={22,23,24,25,26};
    int *ptr=NULL;
    int i;
    ptr=a;
    for (i=0;i<5;i++) {
        printf("%d", *(ptr+1));
    }
}