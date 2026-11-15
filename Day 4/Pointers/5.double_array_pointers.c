// Your task:
// 1. Take 5 double values as input.
// 2. Declare a separate double pointer.
// 3. Print each value and its address.
// 4. Advance the pointer using p++.

// double uses %lf with scanf() and %f with printf().
// scanf() needs %lf to know it must store a double.
// printf() receives a double because float arguments are automatically promoted to double. So %f is used for both.

#include <stdio.h>

int main(){
     double arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("enter value of element with index %d\n",i);
        scanf("%lf",&arr[i]); 
        /* code */
    }
    double *p = arr; 
    for (int i = 0; i < 5; i++)
    {
        printf(" value of element with index %d is %lf\n", i, *p);
        printf(" address of element with index %d is %p\n",i, (void*)p);
        p++;
        // double *p; p++ advances 8 bytes.
        /* code */
    }
    
    return 0;
}