#include<stdio.h>
int main()
{
    int a , rem ,rev = 0;
    printf("Enter the value a : ");
    scanf("%d",&a);

    while(a!=0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a / 10;
    }
    printf("Reverse of Given No : %d",rev);
}