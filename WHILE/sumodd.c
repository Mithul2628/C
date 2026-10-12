#include<stdio.h>
int main()
{
    int a ,sum = 0;
    long long int num;
    printf("Enter the num value : ");
    scanf("%lld",&num);

    while(num!=0)
    {
        a = num % 10;
       if(num % 2 == 1)
       {
        
        sum = sum + a;     
       }
        num = num / 10;
        
    }
    printf("Sum of Odd digit in Integer : %d",sum);

}