/*
A flag is a variable that stores information about whether something has happened.

Usually, we use an integer:
- 0 means false / not yet happened.
- 1 means true / has happened.
For example:
- Has the account been found?
- Has the user entered a valid choice?
- Has a particular number been found?
- Should the program exit?
*/

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int target = 30;
    int found = 0; // 0 is for false and 1 is for true
// see found=0 as found=false(initially)
    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == target)
        {
            found = 1;
            printf("Element found at index %d\n", i);
            break;
        }
    }
// if is outside the for loop because it makes the loop check every element and assigns found as 1 if the element is found
// then it checks the value
    if(found == 0)
    {
        printf("Element not found\n");
    }

    return 0;
}