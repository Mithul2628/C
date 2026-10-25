#include<stdio.h>
int main()
{
    int num,pos,result;
    printf("Enter the no : ");
    scanf("%d",&num);
    printf("Enter the position : ");
    scanf("%d",&pos);

    result = num ^ (1<<pos);
    printf("%d",result);
}