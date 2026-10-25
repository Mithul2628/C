#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=-n;i<=n;i++)
    {
        int k=i<0?-i:i;
        for(int s=0;s<=(n-k);s++)
        {
            printf("  ");
        }
        for(int j=0;j<k+1;j++)
        {
            printf(" *");
        }
        printf("\n");
    }
}