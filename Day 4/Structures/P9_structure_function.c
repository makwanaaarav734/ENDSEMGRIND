// Write a program that:
// 1. Defines a structure named Student.
// 2. Adds name, age and marks as members.
// 3. Declares one structure variable s1.
// 4. Takes student details as input.
// 5. Passes s1 to a function named display().
// // 6. Displays all student details inside display().
// In C, the function prototype is generally declared before the function is defined and called.

// But there's one additional rule:
// The compiler must know the structure type before it encounters a prototype that uses that structure.
// These are two separate declarations serving different purposes:
// 1. Structure definition: tells the compiler what struct Student contains.
// // 2. Function prototype: tells the compiler what the function accepts and returns.

// Remember this ordering:
// Structure definition → Function prototype → Function definition → main()
//


#include <stdio.h>

struct Student{
char name[50];
int age;
float marks;

    }s1;
    // IMPORTANT- we declared struct outside main so that it can be accessed by both main() and display()
void display(struct Student A);
void display(struct Student A){
    printf("name is %s", A.name);
    printf("age is %d", A.age);
    printf("marks is %f", A.marks);
}
int main(){
    struct Student s1; //very important to declare struct in the fxn you are going to use it in
    printf("enter name, age and marks");
scanf("%s", s1.name);
scanf("%d", &s1.age);
scanf("%f", &s1.marks);
display(s1); 
// not display( Student s1);  
return 0;
}