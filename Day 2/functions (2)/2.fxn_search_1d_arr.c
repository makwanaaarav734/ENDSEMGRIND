#include <stdio.h>

int src(int x ,int n, int arr[n]){
int leg=-1;
    for (int i = 0; i < n; i++)
    {

        if (x==arr[i])
        {
          leg=i;
          break; //the fxn prints -1 if no values match
        }
        

        /* code */
    }
    
     return leg;
}

int main(){
    

    return 0;
}