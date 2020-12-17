#include <stdio.h>

// Declaring Structure
struct student {
    int age;
    int grade;
    char name[40];
};
typedef struct {
    char trademark[40];
    float maxspeed;
    int wheel;
} car;

 // Main Program Entry
int main (void) {
    // Declaring Struncture Element Then Defining It
    struct student s1;
    s1=(struct student) {20,8,"Smith"};
    // Declaring and Defining Structure Element
    struct student s2={19,9,"John"};
    // Declaring and Defining Structure Element
    struct student s3={ .grade=7,.age=19,.name="Logan"};
    struct student s4;
    s3=s4; // Assign Structure To another same type
    car anton={.trademark="toyota",.maxspeed=180.5,.wheel=4};
    
    printf("%s\t %4.2f\t %d",anton.trademark,anton.maxspeed,anton.wheel);
}