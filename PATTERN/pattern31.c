#include<stdio.h>
int main()
{
    int n,k;
    char ch = 'A';
    printf("Enter the value : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
     
        for(int j=-(n-1);j<n;j++)
        {
            if((-i<j) && (j<i))
            {
                printf("  ");
            }
            else
            {
                k=j<0?-j:j;
                printf(" %c",ch+k);
        }}
        printf("\n");
    }
}