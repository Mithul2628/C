#include<stdio.h>
int main()
{
    int min,max;
    printf("Enter the Max value : ");
    scanf("%d",&max);

    printf("END WITH 3 AND 7 NUMBERS\n");

    for(min =1;min<=max;min++)
    {
        if((min%10==3)||(min%10==7))
        {
            printf("%d ",min);
        }

    }
}