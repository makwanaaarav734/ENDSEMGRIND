// Write a C program that:
// 1. Takes 5 integers into an array.
// 2. Declares a pointer to that array.
// 3. Prints each element's value and its address using a loop.

#include <stdio.h>

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of element with index %d\n",i);
        scanf("%d",&arr[i]);
        /* code */
    }
    int *p = arr; // same as int *p = &arr[0] the array name arr automatically represents the address of its first element in this context.
    for (int i = 0; i < 5; i++)
    {
        printf(" value of element with index %d is %d\n", i, *(p+i));
        printf(" address of element with index %d is %p\n",i, (void*)(p+i));
        /* code */
    }
    
    return 0;
}