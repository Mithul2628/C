#include<stdio.h>
int main()
{
    int num,rem,fact,i,sum =0,temp;
    printf("Enter the num value : ");
    scanf("%d",&num);

    temp = num;

    while(num!=0)
    {
        rem = num%10;
        fact =1;
        i =1;
        
        while(i<=rem)
        {
            fact = fact * i;
            i++;
        }
        
        sum = sum + fact;
        num = num / 10;
    }
    if(temp==sum)
    {
        printf("IT'S STRONG NO");
    }
    else
    printf("IT'S NOT A STRONG NO ");
}