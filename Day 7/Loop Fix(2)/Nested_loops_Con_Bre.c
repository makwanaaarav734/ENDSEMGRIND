// Given:
// int readings[3][3] = {
//     {10, 20, -1},
//     {30, 40, 50},
//     {60, 70, 80}
// };

// Write a program that:
// 1. Asks the user for a reading to search.
// 2. Searches the entire 2D array using nested for loops.// a single reading
// 3. If the reading is found, prints its row and column.
// 4. Stops searching once it finds the reading.
// 5. If it isn't found, prints "Reading not found".
// Use: found, continue, and break.

#include <stdio.h>

int main(){
    int readings[3][3] = {
    {10, 20, -1},
    {30, 40, 50},
    {60, 70, 80}
};
int x;
printf("enter value to  be searched");
scanf("%d",&x);
int found =0;
for (int i = 0; i < 3; i++)// i for rows
{
    for (int j = 0; j <3; j++)// j for coloumns
    {
        if (x==readings[i][j])
        {found =1;
            printf("the row and coloumn of given value is %d and %d",i,j);
            break;
            /* code */
        }
            /* code */
    }
if (found==1)
{
   break;
        /* code */
}
    
    
    /* code */
}
if (found==0)
{
    printf("reading not found");
    /* code */
}

    return 0;
}