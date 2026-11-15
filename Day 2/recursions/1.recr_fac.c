#include <stdio.h>
int fac(int n)
{
if (n==0||n==1)
return 1;

return n*fac(n-1);


}
int main()
{
    printf("factorial of 4 is %d", fac(4));
    return 0;
}