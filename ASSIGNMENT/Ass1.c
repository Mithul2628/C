#include<stdio.h>
int main()
{
    int a, fact = 1, i=1;
    printf("Enter the a value : ");
    scanf("%d",&a);

    while(i<=a)
    {
        fact = fact * i;
        i++;
    }
    printf("Factorial of %d is : %d",a,fact);
}