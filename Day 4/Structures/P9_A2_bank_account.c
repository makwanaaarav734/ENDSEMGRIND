// Write a program that:
// 1. Defines a structure named Account.
// 2. Adds name, account number and balance as members.
// 3. Manages multiple bank accounts using structure variables.
// 4. Creates a separate function to deposit money into a particular bank account.
// 5. Creates a separate function to withdraw money from a particular bank account.
// 6. Creates a separate function to display all details of a particular account.
//THIS CODE IS INCOMPLETE
#include <stdio.h>


struct bank_account
{
    char name[50];
    int num;
    float mon;

    /* data */
}; //we didnt add a1[] as we are going to declare how many array elements are there in next line

void deposit(struct bank_account *a1, float);
void withdraw(struct bank_account *a1, float);
void display(struct bank_account* a1);

int main(){
    int n;
    printf("enter number of people\n");
    scanf("%d",&n);
struct bank_account a1[n];
printf("enter name,account number and money in account of each user\n");
for (int i = 0; i < n; i++)
{
    scanf("%s", a1[i].name);
    scanf("%d", &a1[i].num);
    scanf("%f",&a1[i].mon);
    /* code */
}
int found=0;
int jk=1;
int kok;
int hok;
int rok;
float wok;
float lok;
int i;
int a;
while (1)// not i=1 | while(1) represents an always true loop
{
    printf("do you want to commence operation as a user?(1 for yes and 0 for no)\n");
    scanf("%d",&kok);
    
    if (kok==1)
        {
            printf("enter account number\n");
            scanf("%d",&hok);
            found =0;
            for (int j = 0; j < n; j++)
            {
               if (a1[j].num==hok)
             {
                found=1;
                
                printf("welcome %s what would you like to do?\n", a1[j].name);
                
                while (1)
                {   printf("for withdrawl press 1\n");
                printf("for deposit press 2\n");
                printf("for simple diplay press 3\n");
                printf("for exit press 4\n");
                
                    scanf("%d",&rok);
                        if (rok==1)
                        {

                            printf("money to be withdraw\n");
                           scanf("%f", &wok);
                           withdraw(&a1[j],wok);
                        }
                        
                        else if (rok==2)
                        {
                            printf("money to be deposit\n");
                           scanf("%f", &lok);
                           deposit(&a1[j],lok);// not *a1[j] as in the function we have used pointer which will show the 
                                             //variable's value it points to 
                           /* code */
                        }
                        
                        else if (rok==3)
                        {
                    
                           display(&a1[j]);
                            /* code */
                        }

                        else if (rok==4)
                        {
                            printf("thank you for working with us\n");
                            break;
                            /* code */
                        }
                        else
                        {
                            printf("invalid choice\n");
                        }
                        
                        
                    /* code */
                
                }
               break; 
                /* code */
            }
            if (found==0)
            { 
                printf("you have entered invalid account number try again\n");
            }
            
                /* code */
                }
            
            
    /* code */
            }

else
{
    break;
}

    /* code */
}


    return 0;
}
void deposit(struct bank_account *A, float x){
if (x>0)
{
 A->mon += x;
printf("current balance is %f\n", (A->mon));
   /* code */
}
else
{
    printf("invalide amount deposited");
}


}

void withdraw(struct bank_account *a1, float x){
if(a1->mon >= x && x>0){
a1->mon-=x;
printf("current balance is %f\n", (a1->mon)); 
}
else
{
 printf("insufficient money\n");
}


}
void display(struct bank_account *a1){ \
printf("name is %s\n", (a1->name));
printf("account number is %d\n", (a1->num));
printf("current balance is %f\n", (a1->mon));

}