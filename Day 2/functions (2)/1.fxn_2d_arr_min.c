#include <stdio.h>

int min(int r, int c, int arr[r][c]){
int min= arr[0][0];
     for (int i = 0; i < r; i++)
     {
        
    for (int j = 0; j < c; j++)
    {
        if (min>arr[i][j])
        {
            min=arr[i][j];
            /* code */
        }
        

        /* code */
    }
    
     }
     
return min;
}

int main(){
    int r,c;
    printf("enter number of rows and columns\n");
    scanf("%d %d", &r, &c);
    int arr[r][c];
printf("enter array elements left to right and top to bottom");
     for (int i = 0; i < r; i++)
     {
        
    for (int j = 0; j < c; j++)
    {
       
        scanf("%d", &arr[i][j]);

        /* code */
    }
    
     }

     printf("minimum of array is %d", min(r,c,arr));// not arr[r][c]

    return 0;
}