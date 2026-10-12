#include<stdio.h>
int main ()
{
    int a , b, c;
    printf("Enter a No for A : ");
    scanf("%d",&a);
    printf("Enter a No for B : ");
    scanf("%d",&b);
    printf("Enter a No for C : ");
    scanf("%d",&c);

    if ( a==b && b==c)
    printf("All are Equal ");

    else if(a==b && b!=c)
    printf("Two Numbers are Equal ");

    else
    printf("All are Different ");
}