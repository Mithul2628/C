#include<stdio.h>
int main()
{
    int i = 2 , j , count , num ;
    printf("Enter the value of N : ");
    scanf("%d",&num);

    while(i<=num)
    {
        j = 1;
        count = 0;

        while(j<=i)
        {
            if(i % j == 0)
            {
            count++;
            }
        j++;
        }
        if(count==2)
        printf("%d  ",i); 
      i++;
    }
    
  
}