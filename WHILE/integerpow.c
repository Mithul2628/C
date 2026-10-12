#include<stdio.h>
int main()
{
    int x , y, result = 1;
    printf("Enter the X value : ");
    scanf("%d",&x);
    printf("Enter the Y value : ");
    scanf("%d",&y);

    while(y>0)
    {
        
        result = result * 2;
        y--;
        
    }
printf("power of Given Interger No : %d",result);
}