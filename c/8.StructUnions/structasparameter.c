#include <stdio.h>
#include <string.h>

// Struct Declaration & Definition
typedef struct {
    int id;
    char title[40];
    float hours;
} course;

// Function Declaration
void update_course(course *class); // Pass Pointer To Paramenter 
void display_course(course class); // Pass Value to Parameter

// Main Program Entry
int main(void) {
    course cs2;
    update_course(&cs2);
    display_course(cs2);
}

// Function Definiton
void update_course(course *class) {
    strcpy(class->title,"C++ Fundamentals");
    class->id=111;
    (*class).hours=12.30;
}
void display_course(course class) {
    printf("%d\t%s\t%3.2f\n",class.id,class.title,class.hours);   
}