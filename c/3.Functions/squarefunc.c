#include <stdio.h>

// Function Declaration
int square (int num);

//Program Entry
int main (void) {
    
    printf("Enter A Number: ");
    int num,result;
    scanf("%d",&num);
    result=square(num);
    printf("%d squared is %d",num,result);
}

// Function Definition
int square (int num) {
    int y;
    y=num*num;
    return(y);
}