#include<stdio.h>
int main()
{
    int num , temp,rem, binary = 0,place =1;
    printf("enter the num : ");
    scanf("%d",&num);

    

    for( temp = num; num >0 ;num = num /2)
    {
        rem = num % 2;
        binary = binary + rem * place;
        place = place * 10;
    }
    printf(" binary of %d is %d",num,binary);


}