// Write a C program that asks the user to enter a password (integer).

// Requirements:
// 1. Give the user a maximum of 3 attempts.
// 2. If the password is 1234, print "Access granted".
// 3. If incorrect, print "Wrong password".
// 4. If all 3 attempts fail, print "Access denied".
// 5. Once the correct password is entered, stop asking.
// Rules:
// - Use a for loop.
// - Use break.
// - Do not use while, do-while, or switch.

#include <stdio.h>

// int main(){
//     int pass=1234;
//     int x;
//     printf("enter password");
//     scanf("%d",&x);
//     int found=0;
//     int count=1;
//     for (int i = 0; i < 3; i++)
//     {
//        if (count<=3)
//        {
//          if (pass==x)
//         {
//             found=1;
//             printf("welcome");
//             break;
//             /* code */
//         }
//         else if(pass!=x)
//         {
//             found=0;
//             printf("try again");
//             printf("enter password");
//                 scanf("%d",&x);
//             count++;      //no need of either break or continue      
//         }
//         /* code */
//        }
//        else
//        {
//         printf("maximum attempts reached");
//        }
       
       
        
        
//         /* code */
//     }
    
    
//     return 0;
// }


int main(){
    int pass=1234;
    int x;
    printf("enter password");
    scanf("%d",&x);
    int found=0;
    int count=1;
    for (int i = 0; i < 3; i++)
    {
       
       
         if (pass==x)
        {
            found=1;
            printf("welcome");
            break;
            /* code */
        }
        else if(pass!=x)
        {
            
            if (count<3)// we introduce count not in the correct condition because 
                        // failure is counted not success
            {
                
            found=0;
            printf("try again");
            printf("enter password");
                scanf("%d",&x);
            count++;      //no need of either break or continue 
                /* code */
            }
            
            else{

                printf("maximum attempts reached");
            }
        }
        /* code 
       
       
        
        
        /* code */
    }
    
    
    return 0;
}