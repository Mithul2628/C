#include<stdio.h>
int main()
{
    int x , y ,result=1;
    printf("Enter the No for x : ");
    scanf("%d",&x);
    printf("Enter the No for y : ");
    scanf("%d",&y);
    

    while(y>0)
    {
        result = result * x;
        y--;
    }
    printf("power of x and y is %d :", result);

}