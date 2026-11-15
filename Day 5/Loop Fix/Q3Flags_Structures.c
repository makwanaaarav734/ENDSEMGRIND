// struct Student {
//     int roll;
//     int marks;
// };

// struct Student s[3] = {
//     {101, 75},
//     {102, 85},
//     {103, 90}
// };

// Your task:
// Write a program that:
// 1. Asks the user to enter a roll number.
// 2. Searches all three students using a for loop.
// 3. If found, prints the student's marks.
// 4. If not found, prints "Student not found".
// 5. Uses a found flag and break.

struct Student {
    int roll;
    int marks;
};

struct Student s[3] = {
    {101, 75},
    {102, 85},
    {103, 90}
};
#include <stdio.h>

int main(){
    
printf("Enter roll from 101,102 and 103.");
int x;
scanf("%d",&x);
int found=0;
for (int i = 0; i < 3; i++)
{
    if (x==s[i].roll)
    {
        found=1;
        printf("the marks of roll %d is %d", s[i].roll,s[i].marks);
        break;
        /* code */
    }
    
    
    /* code */
}
if (found==0)
{
    printf("invalid roll selected");
    /* code */
}


    return 0;
}
