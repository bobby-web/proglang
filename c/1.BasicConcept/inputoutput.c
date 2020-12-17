#include <stdio.h>

// Function for get input: getchar(), gets(), scanf()
// Function for get output: putchara(), puts(), printf()

// Get Char 
/*
int main (void) {
    char a=getchar();
    printf("You Entered: %c",a);
}
*/

// You Get Input From Array of Character a with size 100
/*
int main (void) {
    char a[100];
    gets(a);
    printf("You Entered: %s",a);
}
*/

// You Get Input WIth Format Specifier That Stored in Declared Variable Using Its Variable's Memory Address 
int main (void) {
    printf("Enter A String: ");
    char a[100];
    scanf("%s",&a);
    printf("You Entered: %s",a);
}
