#include <stdio.h>

int main(){
    int choice;

for(;;)
{
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Hello\n");
    }
    else if(choice == 2)
    {
        printf("Goodbye\n");
        break;
    }
    else
    {
        printf("Invalid choice\n");
    }
}

printf("Program ended");
    return 0;
}