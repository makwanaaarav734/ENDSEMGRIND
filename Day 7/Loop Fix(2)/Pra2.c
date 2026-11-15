// Exercise 2: Odd and even numbers
// Write a program to print:
// - All even numbers between 1 and 50.
// - All odd numbers between 1 and 50.
// Use for loops. You can use two loops or one loop with conditions.

#include <stdio.h>

int main(){
    for (int i = 0; i <= 50; i++)
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
            
            /* code */
        }
        
        /* code */
    }
    printf("\n");
    for (int i = 0; i <= 50; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
            /* code */
        }
        
        /* code */
    }
    

    for(int i = 1; i <= 50; i++)
{
    if(i % 2 == 0)
        printf("%d is even\n", i);

    else
        printf("%d is odd\n", i);
}
    
    return 0;
}

