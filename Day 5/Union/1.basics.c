// Write a small program that:
// 1. Declares a union named abc.
// 2. Adds three members: int a, char b, double c.
// 3. Declares a variable s1.
// 4. Assigns 45 to s1.a.
// 5. Prints s1.a.

#include <stdio.h>
union Data{
int a;
char b;
float c;
};
int main(){
  union Data s1;
  s1.a=  45;
  printf("%d",s1.a);
  s1.c= 3.14;
  printf("\n%f",s1.c);
 // if I again ask for s1.a I will get a garbage value.
 printf("\n%p", (void*)&s1.a);
printf("\n%p", (void*)&s1.b);
printf("\n%p", (void*)&s1.c);
// All are stored at same location.
// Size of a union depends on the size of the largest member.
  return 0;
}