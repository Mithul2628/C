#include<stdio.h>
int main()
{
    int num ,temp,rem,fact,i,sum=0;
    printf("Enter the num value : ");
    scanf("%d",&num);

    temp = num;

    for(; num!=0;num = num / 10)
    {
        rem = num % 10;
        fact =1;
        i = 1;

        for(;i<=rem;i++)
        {
            fact = fact * i;
        }
            sum = sum + fact;
        
    }
    if(temp == sum)
    printf("STRONG NO");
    else
    printf("NOT A STRONG NO");
    
}