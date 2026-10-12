#include<stdio.h>
int main()
{
    int num ,i,j,count;
    printf("Enter the Number : ");
    scanf("%d",&num);

    for (i = 2; i<=num ; i++)
    {
        count = 0;

        for( j=1;j<=i; j++)
        {
            if(i%j==0)
            count++;
        }
        if(count == 2)
        {
            printf("%d  ",i);
        }

    }    
}
