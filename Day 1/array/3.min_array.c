#include <stdio.h>

int main(){
         int n;
printf("numbers to be considered\n");
scanf("%d",&n);
int arr[n];
for(int i=0; i<n;i++){
    
    printf("enter value of element %d\n",i);
    scanf("%d", &arr[i]);

}
int min=arr[0];
for(int i=0; i<n;i++){

    if(arr[i]<min){
        min=arr[i];
    }

}
printf("minimum array element is %d", min);
    return 0;
}