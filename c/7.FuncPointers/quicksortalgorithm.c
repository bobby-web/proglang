#include <stdio.h>
#include <stdlib.h>
// Still ERROR
//ERROR ERROR ERROR ERROR ERROR ERROR ERROR


// Function Declaration 
int compare (const void *,const void *);

// Main Program Entry
int main (void) {
    int arr [5]={52,23,56,29,4};
    int num,width,i;
    num=sizeof(arr)/sizeof(arr[0]);
    width=sizeof(arr[0]);
    qsort((void *)arr,num,width,compare);
    for (i=0;i<5;i++)
        printf("%d ",arr[i]); // Space after soecifier  "%d " make sure output have space 
}

// Function Definition
int compare (const void *elem1,const void *elem2) // Declare Parameter Name
{
    // If elem1 same as elem2 return 0
    // If elem1 > elem2 return 1
    // If elem1 < elem2 return -1
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    else
        return 1;
}