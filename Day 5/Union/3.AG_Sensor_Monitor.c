// Task: Write a C program for a sensor monitoring system that can receive data from different types of sensors.

// 1. At any given moment, the system operates in one of three modes:
// - Temperature
// - Humidity
// - Pressure
// 2. Use a union variable with three array members to store and display readings of each of the modes.
// 3. Calculate the size difference between using a union and using a structure instead.

#include <stdio.h>
union sen
{
    int tem[5];
    int hum[5];
    int pre[5];
    /* data */
};
struct mon
{
    int te[5];
    int hu[5];
    int pr[5];
};


int main(){
    union sen s1;
    union sen *p=&s1;

    struct mon d1;
    struct mon *j=&d1;
int k;
    printf("do you want to do it through structures or union?(1 for structures and 2 for union)\n");
scanf("%d", &k);
if (k==1)
{
    printf("You have selected structure way of using monitor\n");
    for (;;)//always true for loop
    
    {
        printf("Which quantity you want to enter?\n");
    printf("Type 1 for Temperature, 2 for Humidity, and 3 for Pressure\n");
    int k1;
    scanf("%d",&k1);
    if (k1==1)
    {
        printf("You have selected Temperature.\n");
        for (int h = 0; h < 5; h++)
        {
            printf("enter T%d Temperature\n", (h+1));
            scanf("%d",&j->te[h]);
            /* code */
        }
        
        /* code */
    }
    else if (k1==2)
    {
        printf("You have selected Humidity.\n");
        for (int h = 0; h < 5; h++)
        {
            printf("enter H%d Humidity\n", (h+1));
            scanf("%d",&j->hu[h]);
            /* code */
        }
        /* code */
    }
    else if (k1==3)
    {
        printf("You have selected Pressure.\n");
        for (int h = 0; h < 5; h++)
        {
            printf("enter P%d Pressure\n", (h+1));
            scanf("%d",&j->hu[h]);
            /* code */
        }
        /* code */
    }
    else
    {
        printf("invalid option selected\n");
    }
    for (int i = 0; i < 5; i++)
    {printf("which data set you want to see?\n");
    int o;
    scanf("%d",&o);
    if (o-1==i)
    {printf("Temperature is %d Humidity is %d and Pressure is %d\n", j->te[i],j->hu[i],j->pr[i]);
        /* code */
    }
    else
    {
        printf("invalid option selected\n");
    }
    
        /* code */
    }
    
        /* code */
    }
    
    

    
}

else if (k==2)//NO ELIF
{
    printf("you have selected union way of sensor monitor\n");
    printf("select T,H or P by 1,2,3\n");
    int r;
    scanf("%d",&r);
    for (;;)
    {
        if (r==1)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Enter temp T%d",i);
                scanf("%d",&p->tem[i]);
                /* code */
            }
            
                int e;
                printf("which temp you want to see?");
                scanf("%d",&e);
            for (int i = 0; i < 5; i++)
            {
                if (e-1==i)
                {
                        printf("temp%d is %d", e,p->tem[i]);                    /* code */
                }
                
                /* code */

            }
            
        }
        
        else if (r==2)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Enter humid H%d",i);
                scanf("%d",&p->hum[i]);
                /* code */
            }
            
                int q;
                printf("which humid you want to see?");
                scanf("%d",&q);
            for (int i = 0; i < 5; i++)
            {
                if (q-1==i)
                {
                        printf("humid%d is %d", q,p->hum[i]);                    /* code */
                }
                
                /* code */

            }
            
        }

         else if (r==3)
        {
            for (int i = 0; i < 5; i++)
            {
                printf("Enter pres P%d",i);
                scanf("%d",&p->pre[i]);
                /* code */
            }
            
                int x;
                printf("which pre you want to see?");
                scanf("%d",&x);
            for (int i = 0; i < 5; i++)
            {
                if (x-1==i)
                {
                        printf("pres%d is %d", x,p->pre[i]);                    /* code */
                }
                
                /* code */

            }
            
        }
      else
      {
        printf("invalid option selected");
      }
      
        /* code */
    }
    
    /* code */
}

else
{
    printf("invalid option selected\n");
}

    printf("size of struc= %zu\n", sizeof(struct mon));
    printf("size of union is %zu\n", sizeof(union sen));

    return 0;
}