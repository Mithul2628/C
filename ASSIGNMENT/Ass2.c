#include<stdio.h>
int main()
{
    int a , sum = 0 , b;
    printf("Enter the a value : ");
    scanf("%d",&a);

    while(a!=0)
    {
        b = a % 10;
        sum = sum + b;
        a = a / 10;
    }
    printf("Sum of Given DIGITS : %d",sum);
}