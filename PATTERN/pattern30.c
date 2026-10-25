#include<stdio.h>
int main()
{
    int n,k;
    char ch;
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=-n;i<=n;i++)
    {
        k=i<0?-i:i;
        ch ='A';
        for(int s=0;s<(n-k);s++,ch++)
        {
            printf("  ");
        }
       
        for(int j=0;j<(k+1);j++)
        {
            printf(" %c",ch++);
        }
printf("\n");
    }
}