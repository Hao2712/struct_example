#include <stdio.h>
#include <string.h>

typedef struct 
{
    int ID;
    char name[50];
    char class[10];
} student;


int main() {
    student student1;

    student1.ID = 100;
    strcpy(student1.name, "Nguyen Van A");
    strcpy(student1.class, "18H0402");

    printf("ID: %d\n", student1.ID);
    printf("Name: %s\n", student1.name);
    printf("Class: %s", student1.class);

    return 0;
}