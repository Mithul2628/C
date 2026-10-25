#include<stdio.h>
int main()
{
    int num;
    char a;
    printf("Enter the value : ");
    scanf("%d",&num);

    a = 65 + (num - 1);

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
           
            printf(" %c",a - j);
        }
     printf("\n");
    }
  
}