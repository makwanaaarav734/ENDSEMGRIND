#include <stdio.h>

int main(){
    for(int i = 1; i <= 2; i++)
{
    for(int j = 1; j <= 3; j++)
    {
        printf("%d ", j);
    }

    printf("\n");
}
// at 1st iteration of inner loop, 1 3 prints
// as 1st iteration of inner loop ends, 2nd loop's first iteration gives a new line and so 
    return 0;
}