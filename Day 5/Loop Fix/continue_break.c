#include <stdio.h>

int main(){
    for(int i = 1; i <= 6; i++)
{
    if(i == 3)
    {
        continue;
    }

    if(i == 5)
    {
        break;
    }

    printf("%d ", i);
}// code skips 3 but ends at 5(and excluding 5).
    return 0;
}

//practical use of continue statement 
/*
#include <stdio.h>

int main()
{
    int temp;

    for(int i = 1; i <= 5; i++)
    {
        printf("Enter temperature: ");
        scanf("%d", &temp);

        if(temp < 0 || temp > 100)
        {
            printf("ERROR: Invalid temperature!\n");
            continue;
        }

        printf("Temperature accepted: %d\n", temp);
    }

    return 0;
}


*/