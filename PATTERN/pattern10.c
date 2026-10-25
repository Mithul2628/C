#include<stdio.h>
int main()
{
    int num,k=1;
    printf("Enter the value : ");
    scanf("%d",&num);

    for(int i = 0;i<num;i++)
    {
        for(int j = 0;j<=i;j++)
        {
            printf("  %d",k++);
        }
        printf("\n");
    }
}