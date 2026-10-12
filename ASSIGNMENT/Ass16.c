#include<stdio.h>
int main()
{
    int num ,x=0,y =1,z;
    printf("Enter the Num : ");
    scanf("%d",&num);

    while(x<=num)
    {
        z = x + y;
        printf(" %d",x);
        y = x;
        z = y;    

       
    }

}