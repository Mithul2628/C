#include<stdio.h>
int main()
{
    int a;
    printf("Enter the mark : ");
    scanf("%d",&a);

    if (a>=90 && a<=100)
    printf("you get A GRADE ");

    else if (a>=80 && a<=89)
    printf("you get B GRADE ");

    else if (a>=70 && a<=79)
    printf("you get a C GRADE ");

    else if (a>=60 && a<=69)
    printf("you get a D GRADE ");

    else 
    printf("YOU FAILED ");
    
}