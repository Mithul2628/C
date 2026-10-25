#include<stdio.h>
int main()
{
    int num,a;
    printf("Enter the value : ");
    scanf("%d",&num);

    for(int i = 0;i<num;i++)
    {
        a = i + 1;

        for(int j = 0;j<=i;j++)
        {
            printf("%d",a);
            a = a + (num - j-1);

        }
        
        printf("\n");
    }
    }
