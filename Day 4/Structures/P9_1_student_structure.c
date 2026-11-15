// An array groups multiple values of the same data type.
// A structure groups related variables that can have different data types.
// For example, a student has:
// - name → character array
// - age → integer
// - marks → float
// We can group all three into one structure.

// Write a program that:
// 1. Defines a structure named Student.
// 2. Adds three members: name, age and marks.
// 3. Declares one structure variable s1.
// 4. Takes the student's details as input.
// 5. Displays all the details.

#include <stdio.h>

int main(){
    struct Student{
char name[50];
int age;
float marks;

    }s1;
//or struct Student s1;

printf("enter name, age and marks");
scanf("%s", s1.name);
scanf("%d", &s1.age);
scanf("%f", &s1.marks);

printf("name is %s", s1.name);
printf("age is  %d", s1.age);
printf("marks is   %f", s1.marks);

return 0;
}