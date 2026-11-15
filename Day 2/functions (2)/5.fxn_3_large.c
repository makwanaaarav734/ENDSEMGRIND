#include <stdio.h>

int lar(int arr[3]){

    int max=arr[0];
        for (int i = 0; i < 3; i++)
        {
            if (max<arr[i])
            {
                 max = arr[i];
            }
            
            /* code */
        }
        return max;
}

int main(){
    int arr[3];
    printf("enter the values");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &arr[i]);

        /* code */
    }
    
printf("the maximum value is %d", lar(arr));

    return 0;
}