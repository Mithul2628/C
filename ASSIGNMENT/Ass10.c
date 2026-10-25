#include<stdio.h>
#include<math.h>
int main()
{
    printf("WELCOME TO CALCULATOR\n");
    printf("\n");
    printf("1.ADDITION\n2.SUBRACTION\n3.MULTIPICATION\n4.DIVITION\n5.MODULUS\n6.POWER\n");
    printf("\n");
    int op ,a,b,c;
    printf("Enter the Options : ");    
    scanf("%d",&op);
    printf("\n");

    switch(op)
    {
        case 1:        printf("\tADDITION\n");
                       printf("\n");

        printf("Enter a Number : ");
        scanf("%d",&a);
        printf("Enter a Number : ");
        scanf("%d",&b);

       if(a>=0 && b>=0)
        {
            c = a + b;
            printf("ADDTION OF TWO NUMBERS : %d\n",c);
        }
        else
        printf("Enter only NUMBERS");

        break;

        case 2:        printf("\tSUBRCTION\n");
                       printf("\n");

        printf("Enter a Number : ");
        scanf("%d",&a);
        printf("Enter a Number : ");
        scanf("%d",&b);

       if(a>=0 && b>=0)
        {
            c = a - b;
            printf("SUBRACTION OF TWO NUMBERS : %d\n",c);
        }
        else
        printf("Enter only NUMBERS");

        break;

        case 3:        printf("\tMULTIPLICATION\n");
                       printf("\n");
      
        printf("Enter a Number : ");
        scanf("%d",&a);
        printf("Enter a Number : ");
        scanf("%d",&b);

       if(a>=0 && b>=0)
        {
            c = a * b;
            printf("MULTIPLICATION OF TWO NUMBERS : %d\n",c);
        }
        else
        printf("Enter only NUMBERS");

        break;

        case 4:     printf("\tDIVITION\n");
                    printf("\n");

        printf("Enter a Number : ");
        scanf("%d",&a);
        printf("Enter a Number : ");
        scanf("%d",&b);

       if(a>=0 && b>=0)
        {
            c = a / b;
            printf("DIVISION OF TWO NUMBERS : %d\n",c);
        }
        else
        printf("Enter only NUMBERS");

        break;
        
        case 5:     printf("\tMODULUS\n");
                    printf("\n");

        printf("Enter a Number : ");
        scanf("%d",&a);
        printf("Enter a Number : ");
        scanf("%d",&b);

       if(a>=0 && b>=0)
        {
            c = a % b;
            printf("MODULUS OF TWO NUMBERS : %d\n",c);
        }
        else
        printf("Enter only NUMBERS");  
        
        break;

        case 6:     printf("\tPOWER\n");
                    printf("\n");

        printf("Enter the BASE Number : ");
        scanf("%d",&a);
        printf("Enter the POWER Number : ");
        scanf("%d",&b);

       if(a>=0 && b>=0)
        {
            c = pow(a,b);
            printf("POWER OF TWO NUMBERS : %d\n",c);
        }
        else
        printf("Enter only NUMBERS");  
        
        break;
    }

} 