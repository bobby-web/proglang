#include <stdio.h>

int main(void) {
    char str1[6]="hello"; // 6 array of char Include '\0'
    char str2[ ]="world"; // Size Will Be Set To 6
    char str3[6]={'h','e','l','l','o','\0'};
    char str4[ ]={'w','o','r','l','d','\0'};
    printf("str1 is: %s\n str2 is: %s\n str3 is: %s\n str4 is: %s\n",str1,str2,str3,str4);
}