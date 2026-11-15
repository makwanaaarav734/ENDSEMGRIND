// Try writing this program yourself:
// 1. Declare union Data with int i, float f, and char c.
// 2. Declare a union variable d1.
// 3. Declare a pointer ptr to the union.
// 4. Assign &d1 to ptr.
// 5. Assign 100 to ptr->i and display it.
// 6. Assign 12.75 to ptr->f and display it.
// 7. Assign 'A' to ptr->c and display it.
// 8. Print the addresses of all three members using the pointer.

#include <stdio.h>
union Data
{
    int i;
    float f;
    char c;
    /* data */
};

int main(){
    union Data d1;
    union Data *p = &d1;//not int int *p= &d1
    
    p->i=100;// same as d1.i
    printf("%d\n",p->i);
    
    p->f=12.75;
    printf("%f\n",p->f);

    p->c='A';
    printf("%c\n",p->c);
 
    printf("%p\n",(void*)(&(p->i)));
    printf("%p\n",(void*)(&(p->c)));
    printf("%p\n",(void*)(&(p->f)));

    return 0;
}