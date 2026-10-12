#include<stdio.h>
#include<math.h>
int main()
{
    int num , count= 0, rem ,temp,sum=0 ;
    printf("Enter the Value : ");
    scanf("%d",&num);

    for(temp = num ; temp != 0; temp = temp/10)
    {
        count++;
    }
    for(num = temp;temp != 0;temp = temp /10)
    {
        rem = temp % 10;
        sum = sum + pow(rem,count); 
    }
    if(temp == sum)
    {
        printf("IT'S ARMSTRONG");
    }
    else
    printf("IT'S NOT ARMSTRONG");

}