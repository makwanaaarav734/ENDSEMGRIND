// Write a program that:
// 1. Takes 5 characters as input.
// 2. Declares a separate character pointer.
// 3. Prints each character and its address.
// 4. Advances the pointer using p++.

#include <stdio.h>

int main(){
     char arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of element with index %d\n",i);
        scanf(" %c",&arr[i]); //the space before %c is required and missing it will result in wrong results, not in error.
        /* code */
    }
    char *p = arr; 
    for (int i = 0; i < 5; i++)
    {
        printf(" value of element with index %d is %c\n", i, *(p+i));
        printf(" address of element with index %d is %p\n",i, (void*)(p+i));
        // char *p; p++ advances 1 byte.
        /* code */
    }
    
    return 0;
}