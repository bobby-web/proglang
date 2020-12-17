#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *ptr;
    ptr=malloc(10*sizeof(*ptr)); // Allocated Memory WIth Size 10 Integer
    if(ptr!=NULL){
        *(ptr+2)=50;
    }
    ptr=realloc(ptr,100*sizeof(*ptr)); //Resize Allocation Memory to 100 Integer Size

    *(ptr+30)=75;
    printf("%d %d",*(ptr+2),*(ptr+30));
    free(ptr);
}