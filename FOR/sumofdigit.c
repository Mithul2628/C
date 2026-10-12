#include<stdio.h>
int main()
{
    long long int num,temp;
    int sum = 0,a;
    printf("Enter the number : ");
    scanf("%lld",&num);

    for(temp=num;num!=0;num = num/10)
    {
        a = num % 10;
        sum = sum+a;
    }
    printf("Sum of DIGIT is %d",sum);
}