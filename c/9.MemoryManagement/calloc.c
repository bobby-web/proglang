#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Struct Declaration
typedef struct {
    int num;
    char *info;
} record;

int main(void) {
    record *recs; // Init Element of Record Struct as Pointer
    int num_recs=2;
    int k;
    char str[ ]="This Is Information";
    
    recs=calloc(num_recs,sizeof(record));
    if(recs!=NULL) {
        (recs+k)->info=malloc(sizeof(str));
        strcpy((recs+k)->info,str);
    }
    for (k=0;k<num_recs;k++) {
        printf("%d\t%s\n",(recs+k)->num,(recs+k)->info);
    }
}

