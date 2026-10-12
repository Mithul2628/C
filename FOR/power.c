#include<stdio.h>
#include<math.h>
int main()
{
    int x , y,result =1,temp;
    printf("Enter x value : ");
    scanf("%d",&x);
    printf("Enter y value : ");
    scanf("%d",&y);

   

    for(temp=x;y>0;y--)
    {
        result = result * x; 
    }
    printf("power of x and y is %d",result);
}