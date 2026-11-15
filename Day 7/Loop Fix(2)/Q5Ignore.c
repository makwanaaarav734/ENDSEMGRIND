// Write a C program that:
// 1. Takes 6 integer readings from the user.
// 2. Ignores any negative reading.
// 3. Adds only non-negative readings to sum.
// 4. Prints the total of valid readings.
// Rules:
// - Use a for loop.
// - Use continue to skip negative readings.
// - Initialise sum = 0.

#include <stdio.h>

int main(){
    int arr[6];
    for (int i = 0; i < 6; i++)
    {printf("enter number%d\n",i+1);
        scanf("%d",&arr[i]);
        /* code */
    }
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>=0)
        {
            sum+=arr[i];
            /* code */
        }
        else {
            continue;

        }
        /* code */
    }
    printf("the summation is %d", sum);
    
    return 0;
}