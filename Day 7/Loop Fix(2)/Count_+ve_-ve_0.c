// Write a C program that takes 10 integers from the user and counts:
// 1. How many are positive?
// 2. How many are negative?
// 3. How many are zero?

#include <stdio.h>

int main(){
    int arr[10];
    int x;
    printf("enter integers");
    scanf("%d",&x);
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
               /* code */
    }
    int cp=0,cn=0,cz=0;// for +ve,-ve and zero counters 
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>0)
        {
            cp++;
            /* code */
        }
        else if(arr[i]<0){
            cn++;
        }
        else
        {
            cz++;
        }
            /* code */
    }
    printf("number of positives, negatives and zeroes are %d, %d and %d",cp,cn,cz);

    return 0;
        }