//as the name suggests

#include <stdio.h>

int main(){
    int x=25;
    int *p=&x;
    printf("%d", x);
        
        printf("%p", (void*)p); //we use (void*)p as it can store addresses of various data types, if we had used (int*)p it only contained address of an integer variable
    
printf("%d", *p);
    return 0;
}