/*
You are given:
int arr[5] = {10, 20, 30, 40, 50};
int found = 0;


Your task: Write a complete C program that:
1. Takes an integer from the user.
2. Searches for that integer in the array using a for loop.
3. If found, changes found to 1.
4. Prints:
   - Element found if it exists.
   - Element not found otherwise.
Conditions:
- Use for loops only.
- Use if-else.
- Use break when the element is found.
- Don't use any functions apart from main().
*/
#include <stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int found = 0;
int x;
printf("enter a value");
scanf("%d",&x);

for (int i = 0; i < 5; i++)
{
    if (x==arr[i])
    {found=1;
        printf("the value you inserted is of index %d",i);
       break; /* code */
    }
    
    /* code */
}
if (found==0)
{
    printf("not matching");
    /* code */
}



    return 0;
}