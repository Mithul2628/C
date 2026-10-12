#include<stdio.h>
int main()
{
    int min,max;
    printf("Enter the max value : ");
    scanf("%d",&max);

    printf("Even No Between min and max \n");

    for(min=1;min<=max;min++)
    {
        if( min % 2 == 0)
        {            
        printf("%d  ",min);
        }
    }
}