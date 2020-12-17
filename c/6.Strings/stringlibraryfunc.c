#include <stdio.h>
#include <string.h>

int main (void) {
    char s1[ ]="I Am";
    char s2[ ]=" Awesome";

    strcat(s1,s2); // Concatenate Source s2 to Destination s1
    printf("%s\n",s1);
    printf("Length of s1 is %d\n",strlen(s1)); // Return Length Of s1
    strcpy(s1,s2); // Copy Paste Source s2 to Destination s1
    printf("s1 is now %s\n",s1);
}