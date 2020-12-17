#include <stdio.h>
int main (void) {
    char city[5];
    printf("Enter your City: ");
    fgets(city,5,stdin);

    fputs(city, stdout);
    printf(" is a nice city.");
}