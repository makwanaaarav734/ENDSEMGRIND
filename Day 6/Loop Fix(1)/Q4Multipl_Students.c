// struct Student {
//     int roll;
//     int marks;
// };

// struct Student s[3] = {
//     {101, 75},
//     {102, 85},
//     {103, 90}
// };


// Write a program that:
// 1. Asks the user how many students they want to search for.
// 2. Takes that many roll numbers as input.
// 3. Searches the array for each roll number.
// 4. Prints the corresponding marks or "Student not found".
// Use:
// - Nested for loops.
// - A found flag.
// - Reset found for every new search.
// - break to stop searching once a match is found.


struct Student {
    int roll;
    int marks;
};

struct Student s[3] = {
    {101, 75},
    {102, 85},
    {103, 90}
};


#include <stdio.h>

int main(){
    int x;
    printf("how many students you want to enter?");
    scanf("%d",&x);

    int arr[x];

    for (int i = 0; i < x; i++)
    {
        printf("enter roll of %d student",(i+1));
        scanf("%d",&arr[i]);
        /* code */
    }
    
    for (int i = 0; i < x; i++)
    {
        int found =0;
        for (int j = 0; j <3 ; j++)
        {
            // here no found =0; as then flag will get resetted even though the student is found
            if (arr[i]==s[j].roll)
            {found=1;
                printf("the marks of %d roll is %d", arr[i],s[j].marks );
                
            break;
                /* code */
            }
          
            
            /* code */
        }
      
        if (found==0)
           {
            printf("error");
            // break; // if we add this break here then a non compatible roll will not allow the roll next to it
                      //  will be neglectd and won't be checked
           }// overall this if is placed outside the inner loop so that not at every iteration of inner loop error 
            // be printed. and it is printed inside inner loop so that it corresponds with the value inserted be shown
            // that the value is not compatible with the given roll.
            

        /* code */
    }
    //  if (found==0)
    //        {
    //         printf("error");
            
    //        }
            
    

    return 0;
}