#include <stdio.h>
#include <string.h>

typedef struct {
    int panjang;
    int lebar;
    int tinggi;
} balok;

int main (void) {
    balok bata[3]={{1,2,3},{3,2,4},{4,3,1}}; // Array Of Structure
    int volume,k;
    for (k=0;k<3;k++) { 
        volume=bata[k].panjang*bata[k].lebar*bata[k].tinggi;
        printf("Bata %d Punya Volume %d\n",k,volume);
    }
}