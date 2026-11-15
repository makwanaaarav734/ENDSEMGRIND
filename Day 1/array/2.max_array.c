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
int max=arr[0];
for(int i=0; i<n;i++){

    if(arr[i]>max){
        max=arr[i];
    }

}
printf("maximum array element is %d", max);
    return 0;
}