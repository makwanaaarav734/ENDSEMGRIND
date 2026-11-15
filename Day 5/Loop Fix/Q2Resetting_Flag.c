/*
Given:
int arr[5] = {10, 20, 30, 40, 50};
int found = 0;
int x;


Write a program that:
1. Asks the user for a number.
2. Searches the array using a for loop.
3. Prints whether the number was found.
4. Asks for a second number and searches again using the same found variable.
*/

#include <stdio.h>

 int main(){
int arr[5] = {10, 20, 30, 40, 50};
int found = 0;
printf("enter value");
int x;
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
found=0;
printf("enter value");
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