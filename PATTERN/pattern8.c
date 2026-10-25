#include<stdio.h>
int main()
{
    int num,a;
    printf("Enter the value : ");
    scanf("%d",&num);

    for(int i =0;i<num;i++)
    {
        if(i % 2==0)
        a = 1;
        else
        a = 2;
        
        for(int j=0;j<=i;j++)
        {
           
            printf("%d",a);
            a = a + 2;
        }
        printf("\n");
    }
}