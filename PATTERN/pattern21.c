#include<stdio.h>
int main()
{
    int n;
    char ch = 'A';
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int s=0;s<i;s++)
        {
            printf("  ");
        }
        ch = 65 + i;
        for(int j=0;j<(n-i);j++)
        { 
            printf(" %c",ch++);
        }
        printf("\n");
    }
}