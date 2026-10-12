#include<stdio.h>
int main()
{
    char name [20];
    int Exp,Pr;
    printf("Enter the Employee name : ");
    scanf("%s",&name);

    printf("Enter the Experience : ");
    scanf("%d",&Exp);

    printf("Enter the Performance Rating : ");
    scanf("%d",&Pr);

    if (Exp>=3 && Pr>=7)
    printf("%s you are Eligible for promotion ",name);

    else
    printf(" %s you are not Eligible for promotion",name);
    
}