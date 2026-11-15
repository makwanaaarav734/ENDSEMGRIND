// Write a program that:
// 1. Takes the number of students as input.
// 2. Defines a structure named Student with name, age and marks.
// 3. Declares an array of Student structures.
// 4. Takes the details of every student as input.
// 5. Calculates the average marks of all students.
// 6. Displays the details of all students.
// 7. Displays the average marks.

#include <stdio.h>

int main(){
    int n;
    printf("enter the number of students\n");
    scanf("%d", &n);
 
    struct Student
    {
        char name[50];
        int age;
        float marks;
        /* data */
    };
    struct Student s1[n];

    

    for (int i = 0; i < n; i++)
    {
        printf("enter name, age and marks for student number %d\n", i+1);
        scanf("%s", s1[i].name);
        scanf("%d", &s1[i].age);
        scanf("%f", &s1[i].marks);

        /* code */
    }
    
for (int i = 0; i < n; i++)
    { printf("the name, age and marks of student number %d is %s, %d and %f\n", (i+1), s1[i].name, s1[i].age, s1[i].marks);
        
        /* code */
    }
float sum=0; //always declare sum=0 outside functions
    for (int i = 0; i < n; i++)
    { 
        sum+=s1[i].marks;  
        /* code */
    }
float avg = sum/(float)n;
printf("the average marks of %d students is %f", n,avg);
    return 0;
}