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
            if(-(n-i)+1<j && j<n-(i+1))
            {
                printf("  ");
            }
            else
            printf(" *");
        }
        printf("\n");
    }
}