
#include <stdio.h>

int main(){
    int r,c;
    printf("rows and columns to be considered respectively\n");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    for(int i=0; i<r;i++){

      for(int j=0; j<c;j++){

        printf("enter value of element \n");
        scanf("%d",&arr[i][j]);

        
    }
    
   
    }
     
int max=arr[0][0];

for(int i=0; i<r;i++){

      for(int j=0; j<c;j++){

        
        {
            if (max<arr[i][j]){

                max=arr[i][j];

            }
            /* code */
        }
        
    }
    
    }


   printf("maximum of all array elements is %d", max);
   
   return 0;
}