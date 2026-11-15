// Write a program that:
// - Takes an integer N.
// - Prints numbers from 1 to N.
// - Prints numbers from N down to 1.

#include <stdio.h>

int main(){
    int N;
    printf("enter integer");
    scanf("%d",&N);
    
    // int i=1;
    // while (i<=N)
    // {   printf("%d ",i);        /* code */
    //     i++;
    // }
    // int j=0;
    // while (j<N)
    // {
    //             printf("%d ", N-j);
    //         j++;
    //             /* code */
    // }
    for (int i = 1; i <= N; i++)
    {
        printf("%d",i);
        /* code */
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d",N-i);
        /* code */
    }
    
    
    
    return 0;
}