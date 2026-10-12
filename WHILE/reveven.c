#include<stdio.h>
int main()
{
    int a;
    long long int num , rev = 0;
    printf("Enter the num value : ");
    scanf("%lld",&num);

    while(num!=0)
    {
       a = num % 10;

       if(a % 2 == 0)
       {
        rev = rev *10+a;
       }
        num = num / 10;

    }
         printf("Reverse No is : %lld",rev);
}
    
