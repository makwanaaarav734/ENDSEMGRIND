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
int sum=0;
for(int i=0;i<n;i++){
sum+=arr[i];
}
printf("sum of all the entered numbers is %d\n", sum);
float avg= (float)sum/n; //its(float)sum not (float)sum
printf("average of all entered numbers is %.2f\n",avg);//for float use %f w inside .2 to limit till two decimals

    return 0;
}