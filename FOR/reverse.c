#include<stdio.h>
int main()
{
    int num,temp,a,rev=0;
    printf("Enter the num value : ");
    scanf("%d",&num);

    

    for(temp=num;num!=0;num=num/10)
    {
        a = num % 10;
        rev = rev * 10 + a;
    }
    printf("Reverse of %d is %d",temp,rev);
}