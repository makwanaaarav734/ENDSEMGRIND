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
int found=0;

for ( ; ; )//keeps the loop running even if the user selects the wrong roll
{
    scanf("%d",&x);
    found = 0;
    for (int i = 0; i < 3; i++)
    {
        if (x==s[i].roll)
    {
        found =1;
        printf("the marks of roll %d is %d",s[i].roll,s[i].marks);
       break;// this break is used to exit the inner for loop
        /* code */
    }
        /* code */
    }
    if (found==1)
    {
        break;// this break is used to exit the outer for loop
        /* code */
    }
    
    printf("invalid roll");//error message
    
    /* code */
}


    return 0;
}