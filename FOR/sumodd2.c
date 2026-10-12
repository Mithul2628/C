#include<stdio.h>
int main()
{
    int num , sum = 0,temp,a;
    printf("Enter the number : ");
    scanf("%d",&num);

    

    for(temp = num; num!=0 ; num = num /10)
    {
        a = num % 10;
        if(a % 2 == 1)
        {
            sum = sum + a;
        }

    }
    printf("SUM OF ODD NUMBERS %d",sum);
}