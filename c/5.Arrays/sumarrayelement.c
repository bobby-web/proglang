#include <stdio.h>
int main (void) {
    float Array[3]={12.12,13.24,32.45};
    float total;
    int i;
    for (i=0;i<3;i++){
        total+=Array[i];
    }
    printf("Total Sum Of Array Is: %6.2f",total);
}