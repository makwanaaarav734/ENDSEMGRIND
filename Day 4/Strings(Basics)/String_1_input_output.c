// 1. What is a string?
// A string is a sequence of characters stored in a character array and 
// terminated by a special character called the null character '\0'.

// Why 6 positions for a 5-letter name? 
// Because C needs that extra '\0' to mark the end.

// Declaring a string
// char name[50];
// This creates space for up to 49 characters plus the null character.
// Taking string input
// scanf("%s", name);

// Write a program that:
// 1. Declares a character array of size 50.
// 2. Takes a name as input.
// 3. Prints the entered name.

#include <stdio.h>

int main(){
    char leg[50];
    printf("enter name");
    scanf("%s", leg);//note we didn't used ampersand
    printf("the name is %s",leg); //scanf("%s", leg) automatically adds the null character after the characters it reads.
    // But consider:
    // char name[5] = {'A','a','r','a','v'};
    // This array has no room for the null character. It is not a properly terminated C string.
    // Key takeaway: A C string must end with '\0'. 
    // Input functions such as scanf("%s", ...) add it automatically, provided the array has enough space.
      return 0;
}