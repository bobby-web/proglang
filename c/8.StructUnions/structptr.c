#include <stdio.h>
#include <string.h>

// Structure Declaration & Definition
typedef struct {
    char name[50];
    int number;
    int age;
} student;

// Declare & Define Struct Pointer As Function Parameter
// st->name is equal to (*st).age
void showStudentData(student *st) {
    printf("\nStudent:\n");
    printf("Name: %s\n",(*st).name);
    printf("Number: %d\n",st->number);
    printf("Age: %d\n",st->age);
}

// Main Program Entry
int main (void) {
    // New Student Record Creation
    student st1;
    student st2;

    // Filling Student 1 Detail
    strcpy(st1.name,"Krishna");
    st1.number=5;
    st1.age=21;

    // Filling Student 2 Detail
    strcpy(st2.name,"Max");
    st2.number=4;
    st2.age=15;

    // Displaying Student 1 Details
    showStudentData(&st1);

    // Displaying Student 2 Details
    showStudentData(&st2);
}