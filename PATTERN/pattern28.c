#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=-(n-1);j<=(n-1);j++)
        {
            if((-i<j)&&(j<i))
            {
                printf("  ");
            }
            else
            printf(" *");
        }
        printf("\n");
    }
}