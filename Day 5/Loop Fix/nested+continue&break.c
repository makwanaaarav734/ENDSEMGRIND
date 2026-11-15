#include <stdio.h>

int main(){
    for(int i = 1; i <= 2; i++)
{
    for(int j = 1; j <= 4; j++)
    {
        if(j == 2)
            continue;

        if(j == 4)
            break;

        printf("%d ", j);
    }

    printf("| ");
}
    return 0;
}