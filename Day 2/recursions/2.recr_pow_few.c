// we make a recurrsion which recurrs less

#include <stdio.h>

int rey(int x, int n){
if (n==0)
{
    return 1;
}

if(n%2==0){

    return rey(x*x,n/2);

}
else
{
    return x * rey(x*x,n/2); //as in C, 5/2=2
}

}

int main(){
    printf("%d is 4 to the power 3",rey(4,3));
    printf("%d is 4 to the power 4",rey(4,4));
    return 0;
}