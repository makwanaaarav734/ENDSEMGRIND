#include <stdio.h>

int sqr( int );

int sqr(int x){
 
    return x*x; 
    // cant use x^2 in c 

}

int main(){

    int n; 
    printf("sqr of num req \n");
    scanf("%d", &n);
    
    printf("sqr of num %d is %d\n", n,sqr(n));

    return 0;
}