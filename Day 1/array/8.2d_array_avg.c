
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
    int sum=0;
    //start from 0 as if 1 then elements such as (1,0);(0,1) and more won't get considered.
for(int i=0; i<r;i++){
      for(int j=0; j<c;j++){
               {
            sum+=arr[i][j];
            /* code */
        }       
    }   
    }
float avg= (float)sum/(r*c);
   printf("average of all array elements is %.2f", avg);
   
   return 0;
}