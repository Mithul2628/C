#include<stdio.h>
#include<math.h>
int main()
{
    int num , count=0,rem;
    printf("Enter the N value : ");
    scanf("%d",&num);
    int sum =0;

    int temp = num;

    while(temp!=0)
    {
        count++;
        temp = temp / 10;
    }
     num=temp;
     while(temp!=0)
        {
            rem = temp % 10;
            sum = sum + pow(rem,count);
            temp = temp % 10;
        }
        if(temp == sum)
            printf("IT's Armstrong");
        else
        printf("IT's not Armstrong");
    
}
