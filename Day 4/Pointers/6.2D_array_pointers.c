// Write a program that:
// 1. Takes the number of rows and columns as input.
// 2. Takes the elements of a 2D integer array as input.
// 3. Prints each element's address and value using the address-of operator (&).
// 4. Prints each element's address and value using pointer arithmetic (array as pointer).
// 5. Declares a separate integer pointer to traverse the 2D array.
// 6. Prints each element's address and value using the separate pointer.
// 7. Advances the pointer using p++.

#include <stdio.h>

int main(){
    int r,c;
    printf("enter the number of rows and coloumns\n");
    scanf("%d %d", &r, &c);
    int arr[r][c];

    

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("enter the (%d,%d) element\n", i,j);
            scanf("%d", &arr[i][j]);
            /* code */
        }
        

        /* code */
    }
    
int *p=&arr[0][0]; //For a 2D array, int *p = arr will not work in standard C.

// What's the issue?
// - arr represents the address of the first row.
// - The first row is an array of 3 integers.
// - Therefore, arr decays to a pointer-to-array-of-3-integers, not an int*.(for a 2d array with 3 element row)

for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        printf("the value and address of element (%d,%d) is %d and %p\n", i,j,arr[i][j],(void*)&arr[i][j]);//not arr[i,j]
        
        /* code */
    }
    
}

for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        printf("the value and address of element (%d,%d) is %d and %p\n", i,j,*(*(arr+i)+j),(void*)(*(arr+i)+j));
        
        // Address using array pointer	(*(arr+i)+j)
        // Value using array pointer	*(*(arr+i)+j)
        
        /* code */
        // always use (void*) before any variable that will be used in printf to display address of another variable
    }
    
}

for (int i = 0; i < r; i++)
{
    for (int j = 0; j < c; j++)
    {
        printf("the value and address of element (%d,%d) is %d and %p\n", i,j,*p,(void*)p);
        p++;
        /* code */
    }
    
}

    return 0;
}