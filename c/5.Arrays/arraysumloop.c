#include <stdio.h>

int main(void) {
    float arr[3]={12.22,18.35,34.15};
    float total;
    int k;
        for (k=0;k<3;k++) {
            total+=arr[k];
        }
    printf("Total is %6.2f",total);
}