/*
Exercise 3: Prime number checker
Write a C program that:
1. Takes an integer N from the user.
2. Checks whether it is prime.
3. Prints "Prime" or "Not prime".
Examples:
Input	Output
2	Prime
7	Prime
12	Not prime
1	Not prime
0	Not prime

Hints:
- A prime number has exactly two factors: 1 and itself.
- Use a for loop to check divisibility.
- Use a found or flag variable.
- Use break when you find a divisor.
*/
#include <stdio.h>

int main(){
    int N;
    printf("Give an integer\n");
    scanf("%d",&N);
    if (N>0&&N!=1)
    {
        int found =0;
    for (int i = 2; i < N; i++)
    {
        if (N%i==0)
        {
            found=1;
            break;
            /* code */
        }
        /* code */
    }
    if (found==0)
    {
        printf("%d is prime",N);
        /* code */
    }
    else
    {
        printf("%d is composite",N);
    }
    
        /* code */
    }
    else if (N==1)
    {
        printf("neither prime nor composite");
    }
    else
    {
        printf("enter a positive integer");
    }
    
    
    
    return 0;
}