#include<stdio.h>
#include<unistd.h>
int main()
{
    int i=10;
    int j;
    printf("Enter the TABLE  : 10 to 20 \n");

    while(i<=20)
    {
        j = 1;
        printf(" TABLE %d\n",i);
        while(j<=10)
        {
            printf(" %d * %d = %d\n",i,j,i*j);
            j++;
        }
        i++;
    }  
}