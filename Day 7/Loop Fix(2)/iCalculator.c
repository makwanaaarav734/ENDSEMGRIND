// Question 1: Menu-driven calculator

// Write a program that repeatedly asks the user to choose:
// 1. Addition
// 2. Subtraction
// 3. Exit


// Requirements:
// - Use for(;;).
// - Use if / else if / else.
// - For options 1 and 2, take two numbers and calculate the result.
// - For option 3, terminate using break.
// - For any other option, print "Invalid choice" and repeat.

#include <stdio.h>

int main(){
    int n;
    
    for(;;){
            printf("For add(1), sub(2) and exit (3)");
            scanf("%d",&n);
            
            if (n==1)
            {int a,b;
                printf("enter numbers");
                scanf("%d %d",&a,&b);
                printf("addition is %d", a+b);
                /* code */
            }
            else if (n==2)
            { int a,b;
                printf("enter numbers");
                scanf("%d %d",&a, &b);
                printf("subtraction is %d",a-b);
                /* code */
            }
            else if(n==3)
            {
                printf("Bye");
                break;
            }
            else
            {
                printf("invalid option");
            }
            

    }
    return 0;
}