/*
Exercise 2: Exit using a flag
Write a program that:
1. Starts with int found = 0.
2. Runs an infinite for(;;) loop.
3. Asks the user to enter an integer.
4. If the user enters 100, set found = 1.
5. If found == 1, print "Target reached" and exit using break.
6. Otherwise, print "Wrong number. Try again."
Example execution:
Enter number: 25
Wrong number. Try again.

Enter number: 70
Wrong number. Try again.

Enter number: 100
Target reached

Use only for, if, else and break.
*/
//Taking this one level up I will make such a code such that it will give ranges like if number
// is from 75-100 it will print a little behind and beyond that it will be far and same for
// upper conditions

#include <stdio.h>

int main(){
    int found=0;
    int x;
    for (;;)
    {   printf("enter number\n");
        scanf("%d",&x);
        if (x==100)
        {
            found =1;
            printf("correct");
            break;
            /* code */
        }
        else if (x>=75&&x<100)
        {
            printf("a lil short");
            /* code */
        }
        
        else if (x<75)
        {
            printf("short");
            /* code */
        }
        
        else if (x>100&&x<=125)
        {
            printf("a lil big");
            /* code */
        }
        else if (x>125)
        {
            printf("big");
            /* code */
        }
                  
     /* code */
    }
    
    return 0;
}