
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

             printf("the 2d array looks like dis \n");
        for (int i = 0; i < r ; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("%d ", arr[i][j]);
            }
            
                printf("\n");
        }
        
    return 0;
}
// // we can take outer loop for coloumn and inner loop for row by 
//  for(int i=0; i<c;i++){

//       for(int j=0; j<r;j++){

//         printf("enter value of element \n");
//         scanf("%d",&arr[j][i]);    
//     }

//     }