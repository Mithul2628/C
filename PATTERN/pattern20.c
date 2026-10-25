#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int s=0;s<i;s++)
        {
            printf("  ");
        }
        for(int j=0;j<(n-i);j++)
        {
            if((i+j)%2==0)
            {
                printf(" 1");
            }
            else
            printf(" 0");
        }
        printf("\n");
    }
}