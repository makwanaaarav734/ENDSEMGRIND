// Write a program that:
// 1. Takes 5 integers as input.
// 2. Declares int *p separately.
// 3. Initializes p to the address of arr[0].
// 4. Prints each element's address and value using p and *p.
// 5. Advances the pointer using p++.

#include <stdio.h>

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of element with index %d\n",i);
        scanf("%d",&arr[i]);
        /* code */
    }

    
    int *p = arr;
     for (int i = 0; i < 5; i++)
    {
        printf(" value of element with index %d is %d\n", i, *p);
        printf(" address of element with index %d is %p\n",i, (void*)p);
        p++;
        // int *p; p++ advances 4 bytes.
        /* code */
    }
    
    return 0;
 }
// suppose our array is
// int arr[3] = {10, 20, 30};
// int *p = &arr[0];
// Without p++, the output becomes:
// 10
// 10
// 10
// Why? Because p keeps pointing to arr[0]. It never moves.
// No error occurs on removing . The program simply keeps accessing the same element.

// p → stores an address.
// *p → accesses the value at that address.
// p++ → moves to the next array element.