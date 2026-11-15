//Factorial using loop
#include <stdio.h>

int main(){
    int x;
    int pro=1;
    printf("enter number");
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        pro=pro*i;
        /* code */
    }
    printf("factorial of %d is %d", x,pro);
    return 0;
}