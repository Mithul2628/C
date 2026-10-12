#include<stdio.h>
int main()
{
    int Balance;
    printf("Available Balance : ");
    scanf("%d",&Balance);

    int Withdrawal;
    printf("Withdrawal Amount : ");
    scanf("%d",&Withdrawal);


if (Withdrawal<=0)
{
    printf(" NO BALANCE ");
}

else if (Withdrawal % 100 !=0)
{
     printf(" Withdrawal Amount must be Multiple of 100 ");
}

else if (Withdrawal > Balance)
{
     printf("INSUFFICIENT BALANCE ");
}

else 
{
    Balance = Balance - Withdrawal;
    printf("Available Balance : %d",Balance);
}
return 0;

}